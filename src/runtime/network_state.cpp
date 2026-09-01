#include "runtime/network_state.hpp"

#include <cstdint>
#include <format>
#include <print>

#include <schemasystem/schemasystem.h>

#include <Zydis/Zydis.h>

namespace schema {

namespace {

constexpr int kMaxVirtualSlots = 256;
constexpr size_t kScanBytes = 64;
constexpr uint32_t kNetworkingEnabledOffset = 0x24; // m_bNetworkingEnabled inside CNetworkVarChainer
constexpr int64_t kChainerSlack = 16;               // the owner keeps its chainer right after the vtable pointer

#ifdef _WIN32
constexpr ZydisRegister kThisRegister = ZYDIS_REGISTER_RCX;
#else
constexpr ZydisRegister kThisRegister = ZYDIS_REGISTER_RDI;
#endif

struct Placement {
	std::string owner;
	std::string field;
	uint32_t offset = 0;
};

using PlacementMap = std::unordered_map<std::string, std::vector<Placement>>;

template<typename Callback>
void ForEachInstruction(const uintptr_t function, Callback callback) {
	ZydisDecoder decoder;
	if (!ZYAN_SUCCESS(ZydisDecoderInit(&decoder, ZYDIS_MACHINE_MODE_LONG_64, ZYDIS_STACK_WIDTH_64))) {
		return;
	}

	for (auto ip = function; ip < function + kScanBytes;) {
		ZydisDecodedInstruction instruction;
		ZydisDecodedOperand operands[ZYDIS_MAX_OPERAND_COUNT];

		if (!ZYAN_SUCCESS(ZydisDecoderDecodeFull(&decoder, reinterpret_cast<void*>(ip), function + kScanBytes - ip, &instruction, operands))) {
			return;
		}

		if (instruction.mnemonic == ZYDIS_MNEMONIC_INT3) { // padding: the function ended, do not read the next one
			return;
		}

		if (!callback(instruction, operands)) {
			return;
		}

		ip += instruction.length;
	}
}

bool IsThisMemory(const ZydisDecodedOperand& operand) {
	return operand.type == ZYDIS_OPERAND_TYPE_MEMORY &&
	       operand.mem.base == kThisRegister &&
	       operand.mem.index == ZYDIS_REGISTER_NONE;
}

// add this, imm / sub this, imm / lea reg, [this+imm] -- the walk to the owner or to its chainer
bool ThisAdjust(const ZydisDecodedInstruction& instruction, const ZydisDecodedOperand* operands, int64_t& value) {
	const bool add = instruction.mnemonic == ZYDIS_MNEMONIC_ADD;
	const bool sub = instruction.mnemonic == ZYDIS_MNEMONIC_SUB;

	if ((add || sub) &&
	    operands[0].type == ZYDIS_OPERAND_TYPE_REGISTER && operands[0].reg.value == kThisRegister &&
	    operands[1].type == ZYDIS_OPERAND_TYPE_IMMEDIATE) {
		value = add ? operands[1].imm.value.s : -operands[1].imm.value.s;
		return true;
	}

	if (instruction.mnemonic == ZYDIS_MNEMONIC_LEA && IsThisMemory(operands[1])) {
		value = operands[1].mem.disp.value;
		return true;
	}

	return false;
}

// cmp byte ptr [this+N], 0 ... add this, +M ... jmp CNetworkVarChainer::NetworkStateChanged
bool MatchChainerThunk(const uintptr_t function, uint32_t& chainOffset) {
	int64_t enabled = -1;
	bool matched = false;

	ForEachInstruction(function, [&](const ZydisDecodedInstruction& instruction, const ZydisDecodedOperand* operands) {
		if (instruction.mnemonic == ZYDIS_MNEMONIC_CMP && IsThisMemory(operands[0]) &&
		    operands[1].type == ZYDIS_OPERAND_TYPE_IMMEDIATE && operands[1].imm.value.u == 0) {
			enabled = operands[0].mem.disp.value;
			return true;
		}

		int64_t adjust = 0;
		if (enabled >= 0 && ThisAdjust(instruction, operands, adjust) && adjust >= 0 &&
		    enabled == adjust + kNetworkingEnabledOffset) {
			chainOffset = static_cast<uint32_t>(adjust);
			matched = true;
			return false;
		}

		return true;
	});

	return matched;
}

// add dword ptr [mem], N rebases changed offsets into the owner's coordinates; the walk back lands
// on the owner itself or a few bytes in, straight on its chainer
bool MatchOwnerForwarder(const uintptr_t function, const uint32_t memberOffset, const bool rebaseOnly) {
	bool matched = false;

	ForEachInstruction(function, [&](const ZydisDecodedInstruction& instruction, const ZydisDecodedOperand* operands) {
		const bool rebaseAdd = instruction.mnemonic == ZYDIS_MNEMONIC_ADD;
		const bool rebaseSub = instruction.mnemonic == ZYDIS_MNEMONIC_SUB;

		if ((rebaseAdd || rebaseSub) &&
		    operands[0].type == ZYDIS_OPERAND_TYPE_MEMORY &&
		    operands[1].type == ZYDIS_OPERAND_TYPE_IMMEDIATE) {
			const int64_t rebase = rebaseAdd ? operands[1].imm.value.s : -operands[1].imm.value.s;
			if (rebase == static_cast<int64_t>(memberOffset)) {
				matched = true;
				return false;
			}
		}

		int64_t adjust = 0;
		if (!rebaseOnly && ThisAdjust(instruction, operands, adjust) && adjust < 0) {
			const int64_t slack = static_cast<int64_t>(memberOffset) + adjust;
			if (slack >= 0 && slack <= kChainerSlack) {
				matched = true;
				return false;
			}
		}

		return true;
	});

	return matched;
}

class CVirtualTableScanner {
public:
	explicit CVirtualTableScanner(const DynLibUtils::CModule& module) :
		_module(module) {
		if (const auto* code = module.GetSectionByName(".text")) {
			_codeStart = reinterpret_cast<uintptr_t>(code->GetPtr());
			_codeEnd = _codeStart + code->m_nSectionSize - kScanBytes;
		}
	}

	uintptr_t Find(const std::string_view scopedName, const std::string_view ownerName) const {
#ifdef _WIN32
		const auto decorated = ownerName.empty()
		                           ? std::format(".?AV{}@@", scopedName)
		                           : std::format(".?AV{}@{}@@", scopedName, ownerName);
#else
		const auto decorated = ownerName.empty()
		                           ? std::format("{}{}", scopedName.length(), scopedName)
		                           : std::format("N{}{}{}{}E", ownerName.length(), ownerName, scopedName.length(), scopedName);
#endif

		auto table = _module.GetVirtualTableByName(decorated, true);

#ifdef _WIN32
		if (!table && ownerName.empty()) {
			table = _module.GetVirtualTableByName(std::format(".?AU{}@@", scopedName), true);
		}
#endif

		return reinterpret_cast<uintptr_t>(table.GetPtr());
	}

	template<typename Matcher>
	int FindSlot(const uintptr_t table, Matcher matcher) const {
		if (!table || !_codeStart) {
			return -1;
		}

		const auto* slots = reinterpret_cast<const uintptr_t*>(table);
		for (int slot = 0; slot < kMaxVirtualSlots; ++slot) {
			const auto function = slots[slot];
			if (function < _codeStart || function >= _codeEnd) {
				break;
			}

			if (matcher(function)) {
				return slot;
			}
		}

		return -1;
	}

private:
	const DynLibUtils::CModule& _module;
	uintptr_t _codeStart = 0;
	uintptr_t _codeEnd = 0;
};

PlacementMap CollectPlacements(const std::vector<Module>& modules) {
	PlacementMap placements;

	for (const Module& module : modules) {
		for (const ClassRec& rec : module.classes) {
			const char* owner = rec.info->m_pszName;
			if (!owner) {
				continue;
			}

			for (const SchemaClassFieldData_t* field : rec.fields) {
				if (!field->m_pType || field->m_pType->m_eTypeCategory != SCHEMA_TYPE_DECLARED_CLASS) {
					continue;
				}

				const auto* declared = static_cast<const CSchemaType_DeclaredClass*>(field->m_pType);
				if (!declared->m_pClassInfo || !declared->m_pClassInfo->m_pszName || !field->m_pszName) {
					continue;
				}

				placements[declared->m_pClassInfo->m_pszName].push_back(
				    { owner, field->m_pszName, static_cast<uint32_t>(field->m_nSingleInheritanceOffset) });
			}
		}
	}

	return placements;
}

int FindStateChangedIndex(const CVirtualTableScanner& scanner, const std::string& className, const std::vector<Placement>* placements) {
	uint32_t chainOffset = 0;
	const int chained = scanner.FindSlot(scanner.Find(className, {}), [&](const uintptr_t function) {
		return MatchChainerThunk(function, chainOffset);
	});

	if (chained >= 0) {
		return chained;
	}

	if (!placements) {
		return -1;
	}

	for (const bool rebaseOnly : { true, false }) {
		for (const Placement& placement : *placements) {
			const auto table = scanner.Find(std::format("NetworkVar_{}", placement.field), placement.owner);

			const int slot = scanner.FindSlot(table, [&](const uintptr_t function) {
				return MatchOwnerForwarder(function, placement.offset, rebaseOnly);
			});

			if (slot >= 0) {
				return slot;
			}
		}
	}

	return -1;
}

}

std::unordered_map<std::string, int> CollectNetworkStateIndices(const ModuleMap& mods, const std::vector<Module>& modules) {
	const PlacementMap placements = CollectPlacements(modules);

	std::unordered_map<std::string, int> indices;
	for (const Module& module : modules) {
		const auto it = mods.find(NormalizeModuleName(module.scope));
		if (it == mods.end()) {
			continue;
		}

		const CVirtualTableScanner scanner(it->second->module);
		for (const ClassRec& rec : module.classes) {
			if (!rec.info->m_pszName) {
				continue;
			}

			std::string name = rec.info->m_pszName;
			if (indices.contains(name)) {
				continue;
			}

			const auto placed = placements.find(name);
			const int slot = FindStateChangedIndex(scanner, name, placed != placements.end() ? &placed->second : nullptr);
			if (slot >= 0) {
				indices.emplace(std::move(name), slot);
			}
		}
	}

	std::println("network state: {} classes report changes themselves", indices.size());
	return indices;
}

}
