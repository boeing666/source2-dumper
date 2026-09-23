#include "runtime/pulse_io.hpp"

#include <optional>
#include <print>
#include <string_view>

#include <glaze/glaze.hpp>
#include <glaze/containers/ordered_map.hpp>

#include <tier0/keyvalues3.h>
#include <tier0/utlstring.h>

namespace schema {

namespace pulse_meta {

// Subset of the server's module metadata (ExtractModuleMetadata), the data Valve's tools read.
// Entity I/O moved out of the datamap into Pulse API bindings; each binding is keyed "Class_API::Name",
// outputs "OUTPUT!Class_API::Name".
struct MetaParam {
	std::string type;
};

struct MetaFlow {
	std::string name;
};

struct MetaData {
	bool is_pulse_target_method = false;
	bool is_pulse_target_output = false;
	std::optional<glz::ordered_map<std::string, MetaParam>> pulse_inparams; // null when there are none
	std::optional<glz::ordered_map<std::string, MetaParam>> pulse_outparams;
	std::optional<std::vector<MetaFlow>> pulse_inflows;
};

struct MetaBinding {
	std::optional<MetaData> m_MetaData;
};

struct MetaGamedata {
	std::unordered_map<std::string, MetaBinding> m_Classes;
};

struct MetaPulseBindings {
	MetaGamedata gamedata;
};

struct ModuleMetadata {
	MetaPulseBindings pulse_bindings;
};

}

namespace {

using namespace pulse_meta;

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

std::string ParamTypes(const std::optional<glz::ordered_map<std::string, MetaParam>>& params) {
	std::string out;
	for (const auto& [name, p] : params ? *params : glz::ordered_map<std::string, MetaParam>{}) {
		if (name == kTargetArg) {
			continue;
		}
		if (!out.empty()) {
			out += ", ";
		}
		out += ValueType(p.type);
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

	CUtlString json, saveError;
	if (!SaveKV3AsJSON(kv, &saveError, &json)) {
		std::println(stderr, "pulse io: SaveKV3AsJSON failed: {}", saveError.Get());
		return out;
	}

	pulse_meta::ModuleMetadata meta;
	if (auto ec = glz::read<glz::opts{ .error_on_unknown_keys = false }>(meta, std::string_view(json.Get(), json.Length()))) {
		std::println(stderr, "pulse io: metadata parse error: {}", glz::format_error(ec, std::string_view(json.Get(), json.Length())));
		return out;
	}

	int inputs = 0, outputs = 0;
	for (const auto& [key, binding] : meta.pulse_bindings.gamedata.m_Classes) {
		if (!binding.m_MetaData) {
			continue;
		}
		const MetaData& m = *binding.m_MetaData;

		std::string_view name = key;
		const bool output = m.is_pulse_target_output && name.starts_with(kOutputPrefix);
		const bool input = m.is_pulse_target_method && m.pulse_inflows && !m.pulse_inflows->empty();
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
			out[cls].push_back({ "output", io, ParamTypes(m.pulse_outparams) });
			++outputs;
		} else {
			out[cls].push_back({ "input", io, ParamTypes(m.pulse_inparams) });
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
