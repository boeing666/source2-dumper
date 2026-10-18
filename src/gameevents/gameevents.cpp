#include "gameevents/gameevents.hpp"

#include <fstream>
#include <print>
#include <sstream>
#include <string>
#include <vector>

#include "core/sdk.hpp"
#include "core/vpk.hpp"

namespace schema {
namespace fs = std::filesystem;

namespace {

std::string ReadFile(const fs::path& path) {
	std::ifstream in(path, std::ios::binary);
	if (!in) { return {}; }
	std::ostringstream ss;
	ss << in.rdbuf();
	return ss.str();
}

void ParseInto(const std::string& text, const char* module, std::vector<GameEventInfo>& out) {
	KeyValues::AutoDelete root(new KeyValues("gameevents"));
	if (!root->LoadFromBuffer("gameevents", text.c_str())) {
		std::println(stderr, "gameevents: KeyValues parse failed ({})", module);
		return;
	}
	for (KeyValues* ev = root->GetFirstTrueSubKey(); ev; ev = ev->GetNextTrueSubKey()) {
		GameEventInfo e;
		e.module = module;
		e.name = ev->GetName() ? ev->GetName() : "";
		for (KeyValues* f = ev->GetFirstValue(); f; f = f->GetNextValue()) {
			e.fields.push_back({ f->GetName() ? f->GetName() : "", f->GetString() });
		}
		out.push_back(std::move(e));
	}
}

}

std::vector<GameEventInfo> CollectGameEvents(const fs::path& gameRoot) {
	// Read from that folder's pak01_dir.vpk (a full install, or SteamFileDownloader's sparse archives holding
	// just these entries); a loose resource/<file> is only the fallback, so a stale extracted copy can't win.
	struct Source { fs::path folder; const char* file; const char* module; };
	const Source sources[] = {
		{ gameRoot / SE_GAME_DIR, "game.gameevents", "game" },
		{ gameRoot / SE_GAME_DIR, "mod.gameevents",  "mod" },
		{ gameRoot / "core",      "core.gameevents", "core" },
	};

	std::vector<GameEventInfo> out;
	for (const Source& s : sources) {
		std::string text = vpk::ReadEntry(s.folder / "pak01_dir.vpk", std::string("resource/") + s.file).value_or("");
		if (text.empty()) {
			text = ReadFile(s.folder / "resource" / s.file);
		}
		if (text.empty()) {
			std::println(stderr, "gameevents: no {} in {}", s.file, s.folder.string());
			continue;
		}
		ParseInto(text, s.module, out);
	}
	std::println("gameevents: {} events", out.size());
	return out;
}

}
