#pragma once

#include <string>
#include <unordered_set>

#include "core/game_module.hpp"

namespace schema {

std::unordered_set<std::string> CollectNetworkFields(const ModuleMap& mods);

}
