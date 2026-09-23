#pragma once

#include <string>
#include <unordered_map>
#include <vector>

#include "core/game_module.hpp"

namespace schema {

struct PulseIOEntry {
	std::string kind;   // "input" | "output"
	std::string name;
	std::string type;   // parameter types, "void" when there are none
};

std::unordered_map<std::string, std::vector<PulseIOEntry>> CollectPulseIO(const ModuleMap& mods);

}
