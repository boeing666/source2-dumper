#pragma once

#include <cstdint>
#include <filesystem>
#include <string>
#include <unordered_set>
#include <vector>

#include "schema_model.hpp"

namespace schema {

// Collected convar/concommand data (filled during the server bring-up), serialized to JSON.
struct ConVarInfo {
	std::string name;
	std::string type;
	std::string defaultValue;
	std::string minValue;
	std::string maxValue;
	std::string help;
	uint64_t flagsRaw = 0;
	std::vector<std::string> flags;
};

struct ConCommandInfo {
	std::string name;
	std::string help;
	uint64_t flagsRaw = 0;
	std::vector<std::string> flags;
};

// Enumerate the live cvar system (after the server bring-up) into convar/concommand records. win64 only;
// no-op elsewhere. Implemented in appsystem.cpp (has the ICvar instance).
void CollectConVars(std::vector<ConVarInfo>& convars, std::vector<ConCommandInfo>& concommands);

// Emit the whole dump as JSON under outDir/<platform>/: schema.<scope>.json per module + index.json,
// convars.json, concommands.json, meta.json. Replaces the C++ HTML generation (the frontend renders these).
void WriteJson(const std::filesystem::path& outDir,
               const std::vector<Module>& modules,
               const std::unordered_set<std::string>& known,
               const std::unordered_set<std::string>& network,
               const std::vector<ConVarInfo>& convars,
               const std::vector<ConCommandInfo>& concommands,
               const std::string& patchVersion,
               const std::string& serverVersion);

} // namespace schema
