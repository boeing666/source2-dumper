#pragma once

#include <string>
#include <unordered_map>
#include <vector>

#include "core/game_module.hpp"
#include "schema/schema_model.hpp"

namespace schema {

// Class name -> vtable index of NetworkStateChanged, for classes that report changes themselves.
std::unordered_map<std::string, int> CollectNetworkStateIndices(const ModuleMap& mods, const std::vector<Module>& modules);

}
