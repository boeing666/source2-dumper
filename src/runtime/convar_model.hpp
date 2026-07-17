#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace schema {

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

}
