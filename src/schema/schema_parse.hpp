#pragma once

#include <string>
#include <unordered_set>
#include <vector>

#include "core/game_module.hpp"
#include "schema/schema_model.hpp"

namespace schema {

bool ParseSchema(const ModuleMap& mods, std::vector<Module>& modules, std::unordered_set<std::string>& known);

}
