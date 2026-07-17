#include "core/game_module.hpp"

#include <print>

namespace schema {
namespace fs = std::filesystem;
using DynLibUtils::CModule;

#if defined(_WIN32)
static constexpr int kLoadFlags = 0x8;
#else
static constexpr int kLoadFlags = 0x2 | 0x100;
#endif

std::string NormalizeModuleName(std::string_view filename) {
	std::string_view n = filename;
	if (auto dot = n.find('.'); dot != std::string_view::npos) {
		n = n.substr(0, dot);
	}
	if (n.size() > 3 && n.rfind("lib", 0) == 0) {
		n = n.substr(3);
	}
	return std::string(n);
}

ModuleMap LoadGameModules(const std::vector<fs::path>& dirs) {
	const std::string ext = MODULE_EXT;
	ModuleMap mods;

	for (const fs::path& dir : dirs) {
		if (!fs::is_directory(dir)) {
			continue;
		}

		for (const auto& entry : fs::directory_iterator(dir)) {
			if (!entry.is_regular_file() || entry.path().extension() != ext) {
				continue;
			}

			auto gm = std::make_unique<GameModule>();
			if (!gm->module.LoadFromPath(entry.path().string(), kLoadFlags)) {
				std::println(stderr, "warning: could not load {} ({})",
				             entry.path().filename().string(), gm->module.GetLastError());
				continue;
			}
			gm->func = gm->module.GetFunctionByName("CreateInterface").RCast<CreateInterfaceFn>();
			mods.emplace(NormalizeModuleName(entry.path().filename().string()), std::move(gm));
		}
	}
	return mods;
}

}
