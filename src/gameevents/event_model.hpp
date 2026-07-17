#pragma once

#include <string>
#include <vector>

namespace schema {

struct GameEventField {
	std::string name;
	std::string type;
};

struct GameEventInfo {
	std::string name;
	std::string module;
	std::vector<GameEventField> fields;
};

}
