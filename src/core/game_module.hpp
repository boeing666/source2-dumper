#pragma once

#include <filesystem>
#include <memory>
#include <string>
#include <string_view>
#include <unordered_map>
#include <vector>

#include <dynlibutils/module.hpp>

namespace schema {

using CreateInterfaceFn = void* (*)(const char*, int*);

struct GameModule {
	DynLibUtils::CModule module;
	CreateInterfaceFn func = nullptr;
};

using ModuleMap = std::unordered_map<std::string, std::unique_ptr<GameModule>>;

std::string NormalizeModuleName(std::string_view filename);
ModuleMap LoadGameModules(const std::vector<std::filesystem::path>& dirs);

}
