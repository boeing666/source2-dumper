#pragma once

#include <cstdint>
#include <filesystem>
#include <string>
#include <unordered_set>
#include <vector>

#include "schema/schema_model.hpp"
#include "runtime/convar_model.hpp"
#include "gameevents/event_model.hpp"

namespace schema {

void WriteJson(const std::filesystem::path& outDir,
               const std::vector<Module>& modules,
               const std::unordered_set<std::string>& known,
               const std::unordered_set<std::string>& network,
               const std::vector<ConVarInfo>& convars,
               const std::vector<ConCommandInfo>& concommands,
               const std::vector<GameEventInfo>& events,
               const std::string& patchVersion,
               const std::string& serverVersion);

}
