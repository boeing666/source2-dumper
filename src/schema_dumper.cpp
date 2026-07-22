#include "schema_dumper.hpp"
#include "schema/schema_model.hpp"
#include "schema/schema_parse.hpp"
#include "core/game_module.hpp"
#include "output/header_writer.hpp"
#include "output/json_writer.hpp"
#include "runtime/network_fields.hpp"
#include "runtime/appsystem.hpp"
#include "runtime/convars.hpp"
#include "gameevents/gameevents.hpp"

#include <print>
#include <fstream>
#include <string>
#include <string_view>
#include <unordered_set>
#include <vector>

namespace schema {
namespace fs = std::filesystem;

static std::string ReadInf(std::string_view key) {
	std::ifstream in(fs::path(GAME_ROOT) / SE_GAME_DIR / "steam.inf");
	for (std::string line; std::getline(in, line);) {
		if (line.rfind(key, 0) == 0 && line.size() > key.size() && line[key.size()] == '=') {
			std::string v = line.substr(key.size() + 1);
			while (!v.empty() && (v.back() == '\r' || v.back() == '\n' || v.back() == ' ')) {
				v.pop_back();
			}
			return v;
		}
	}
	return "";
}

int DumpAll(const fs::path& binDir, const fs::path& moduleDir, const fs::path& outDir) {
	ModuleMap mods = LoadGameModules({ binDir, moduleDir });

	std::vector<Module> modules;
	std::unordered_set<std::string> known;
	if (!ParseSchema(mods, modules, known)) {
		return 1;
	}

	std::unordered_set<std::string> network = CollectNetworkFields(mods);

	std::vector<ConVarInfo> convars;
	std::vector<ConCommandInfo> concommands;
	CollectConVars(convars, concommands);

	std::vector<GameEventInfo> events = CollectGameEvents(GAME_ROOT);

	const std::string patch = ReadInf("PatchVersion");
	const fs::path headersDir = outDir / "headers" / GAME_NAME / PLATFORM_NAME;
	WriteHeaders(modules, headersDir);
	WriteConVarDump(convars, concommands, headersDir);
	WriteJson(outDir, modules, known, network, convars, concommands, events, patch, ReadInf("ServerVersion"));
	if (!patch.empty()) {
		fs::create_directories(outDir / GAME_NAME);
		std::ofstream(outDir / GAME_NAME / "patchversion.txt", std::ios::trunc) << patch;
	}

	int total = 0;
	for (const Module& m : modules) {
		total += (int)(m.classes.size() + m.enums.size());
		std::println("{:<28} {:>5} classes {:>4} enums", m.scope, m.classes.size(), m.enums.size());
	}
	std::println("\n{} types / {} modules / {} network fields -> {}/{}/{} (json)",
	             total, modules.size(), network.size(), outDir.string(), GAME_NAME, PLATFORM_NAME);

	ShutdownAppSystems();
	return 0;
}

}
