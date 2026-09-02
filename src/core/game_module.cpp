#include "core/game_module.hpp"

#include <print>

#include <icvar.h>
#include <tier1/convar.h>

namespace schema {
namespace fs = std::filesystem;
using DynLibUtils::CModule;

#if defined(_WIN32)
static constexpr int kLoadFlags = 0x8;
#else
static constexpr int kLoadFlags = 0x2 | 0x100;
#endif

namespace {

std::unordered_map<std::string, std::string> g_consoleOwners;

std::unique_ptr<GameModule> LoadModule(const fs::path& path) {
	auto gm = std::make_unique<GameModule>();
	if (!gm->module.LoadFromPath(path.string(), kLoadFlags)) {
		std::println(stderr, "warning: could not load {} ({})", path.filename().string(), gm->module.GetLastError());
		return nullptr;
	}

	gm->func = gm->module.GetFunctionByName("CreateInterface").RCast<CreateInterfaceFn>();
	return gm;
}

}

void SnapshotConsoleOwners(void* cvar, const std::string& module) {
	auto* impl = static_cast<CCvar*>(cvar);
	if (!impl) {
		return;
	}

	auto& cvars = impl->m_ConVarList;
	for (auto i = cvars.Head(); i != cvars.InvalidIndex(); i = cvars.Next(i)) {
		const ConVarData* d = cvars.Element(i);
		if (d && d->GetName()) {
			g_consoleOwners.try_emplace(d->GetName(), module);
		}
	}

	auto& commands = impl->m_ConCommandList;
	for (auto i = commands.Head(); i != commands.InvalidIndex(); i = commands.Next(i)) {
		const ConCommandData& d = commands.Element(i);
		if (d.GetName()) {
			g_consoleOwners.try_emplace(d.GetName(), module);
		}
	}
}

const std::unordered_map<std::string, std::string>& ConsoleOwners() {
	return g_consoleOwners;
}

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

			if (auto gm = LoadModule(entry.path())) {
				mods.emplace(NormalizeModuleName(entry.path().filename().string()), std::move(gm));
			}
		}
	}

	return mods;
}

}
