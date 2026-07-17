#pragma once

#include <filesystem>
#include <vector>

#include "schema/schema_model.hpp"
#include "runtime/convar_model.hpp"

namespace schema {

void WriteHeaders(const std::vector<Module>& modules, const std::filesystem::path& root);
void WriteConVarDump(const std::vector<ConVarInfo>& convars, const std::vector<ConCommandInfo>& concommands,
                     const std::filesystem::path& dir);

}
