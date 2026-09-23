#include "runtime/pulse_io.hpp"

#include <algorithm>
#include <print>
#include <string_view>
#include <tuple>

#include <tier1/keyvalues3.h>

namespace schema {

namespace {

// Read from the server's module metadata (ExtractModuleMetadata), the data Valve's tools read:
//   pulse_bindings.gamedata.m_Classes["Class_API::Name"]          -> binding (input candidate)
//   pulse_bindings.gamedata.m_Classes["OUTPUT!Class_API::Name"]   -> output
// each with m_MetaData { is_pulse_target_method, is_pulse_target_output, pulse_inparams, pulse_outparams, pulse_inflows }.
// Walked through KeyValues3 directly: tier0's JSON writer crashes on this tree on some builds (deadlock 6637).

constexpr std::string_view kOutputPrefix = "OUTPUT!";
constexpr std::string_view kTargetArg = "_Target"; // implicit entity the binding is called on

// "PVAL_EHANDLE:path_mover" -> "ehandle:path_mover", "PVAL_ARRAY:PVAL_EHANDLE" -> "array:ehandle"
std::string ValueType(std::string_view t) {
	std::string out;
	while (!t.empty()) {
		const size_t sep = t.find(':');
		std::string_view part = t.substr(0, sep);
		if (part.starts_with("PVAL_")) {
			part.remove_prefix(5);
			for (char ch : part) {
				out += static_cast<char>(ch >= 'A' && ch <= 'Z' ? ch - 'A' + 'a' : ch);
			}
		} else {
			out += part;
		}
		if (sep == std::string_view::npos) {
			break;
		}
		out += ':';
		t.remove_prefix(sep + 1);
	}
	return out;
}

// Parameter table (name -> { type }) in declaration order; null when the binding has none.
std::string ParamTypes(const KeyValues3* params) {
	std::string out;
	if (params && params->IsTable()) {
		for (int i = 0; i < params->GetMemberCount(); ++i) {
			const char* name = params->GetMemberName(i);
			const KeyValues3* p = params->GetMember(i);
			if (!p || (name && kTargetArg == name)) {
				continue;
			}
			if (!out.empty()) {
				out += ", ";
			}
			out += ValueType(p->GetMemberString("type"));
		}
	}
	return out.empty() ? "void" : out;
}

// "CBaseEntity_API" -> CBaseEntity, "CEnvWindSharedAPI" -> CEnvWindShared, "CBaseEntity_SharedAPI" -> CBaseEntity
std::string ClassOfLibrary(std::string_view lib) {
	if (lib.ends_with("_API")) {
		lib.remove_suffix(4);
	} else if (lib.ends_with("_SharedAPI")) {
		lib.remove_suffix(10);
	} else if (lib.ends_with("API")) {
		lib.remove_suffix(3);
	}
	return std::string(lib);
}

}

std::unordered_map<std::string, std::vector<PulseIOEntry>> CollectPulseIO(const ModuleMap& mods) {
	std::unordered_map<std::string, std::vector<PulseIOEntry>> out;

	const auto it = mods.find("server");
	if (it == mods.end()) {
		return out;
	}

	using ExtractModuleMetadataFn = KeyValues3* (*)(const char** ppError);
	const auto extract = it->second->module.GetFunctionByName("ExtractModuleMetadata").RCast<ExtractModuleMetadataFn>();
	if (!extract) {
		std::println(stderr, "pulse io: server has no ExtractModuleMetadata");
		return out;
	}

	const char* error = nullptr;
	const KeyValues3* kv = extract(&error);
	if (!kv) {
		std::println(stderr, "pulse io: ExtractModuleMetadata failed: {}", error ? error : "");
		return out;
	}

	const KeyValues3* bindings = kv->FindMember("pulse_bindings");
	const KeyValues3* gamedata = bindings ? bindings->FindMember("gamedata") : nullptr;
	const KeyValues3* classes = gamedata ? gamedata->FindMember("m_Classes") : nullptr;
	if (!classes || !classes->IsTable()) {
		std::println(stderr, "pulse io: module metadata has no pulse_bindings.gamedata.m_Classes");
		return out;
	}

	int inputs = 0, outputs = 0;
	for (int i = 0; i < classes->GetMemberCount(); ++i) {
		const char* key = classes->GetMemberName(i);
		const KeyValues3* binding = classes->GetMember(i);
		const KeyValues3* meta = binding ? binding->FindMember("m_MetaData") : nullptr;
		if (!key || !meta || !meta->IsTable()) {
			continue;
		}

		std::string_view name = key;
		const bool output = meta->GetMemberBool("is_pulse_target_output") && name.starts_with(kOutputPrefix);
		// The entity's pulse signature accepts target methods that have an inflow as inputs.
		const KeyValues3* inflows = meta->FindMember("pulse_inflows");
		const bool input = meta->GetMemberBool("is_pulse_target_method") && inflows && inflows->IsArray() && inflows->GetArrayElementCount() > 0;
		if (!input && !output) {
			continue;
		}
		if (output) {
			name.remove_prefix(kOutputPrefix.size());
		}

		const size_t sep = name.find("::");
		if (sep == std::string_view::npos) {
			continue;
		}
		const std::string cls = ClassOfLibrary(name.substr(0, sep));
		const std::string io(name.substr(sep + 2));

		if (output) {
			out[cls].push_back({ "output", io, ParamTypes(meta->FindMember("pulse_outparams")) });
			++outputs;
		} else {
			out[cls].push_back({ "input", io, ParamTypes(meta->FindMember("pulse_inparams")) });
			++inputs;
		}
	}

	for (auto& [cls, entries] : out) {
		std::ranges::sort(entries, [](const PulseIOEntry& a, const PulseIOEntry& b) {
			return std::tie(a.kind, a.name) < std::tie(b.kind, b.name);
		});
	}

	std::println("pulse io: {} classes / {} inputs / {} outputs", out.size(), inputs, outputs);
	return out;
}

}
