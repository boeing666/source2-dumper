#pragma once

#include <string>
#include <vector>

namespace schema {

struct ScriptParam {
	std::string name;
	std::string type;
};

struct ScriptFunction {
	std::string name;
	std::string returnType;
	std::vector<ScriptParam> params;
	std::string description;
};

struct ScriptClass {
	std::string name;       // C++ class
	std::string scriptName; // name exposed to scripts
	std::string base;
	std::string description;
	std::vector<ScriptFunction> functions;
};

struct ScriptInstance {
	std::string name;       // global the instance is bound to
	std::string className;
};

struct ScriptConstant {
	std::string name;
	std::string type;
	std::string value;
};

struct ScriptApi {
	std::vector<ScriptFunction> functions;
	std::vector<ScriptInstance> instances;
	std::vector<ScriptClass> classes;
	std::vector<ScriptConstant> constants;
};

}
