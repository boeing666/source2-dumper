#include "gameevents/gameevents.hpp"

#include <fstream>
#include <print>
#include <sstream>
#include <string>
#include <vector>

#include <tier0/keyvalues.h>

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
	struct Source { fs::path path; const char* module; };
	const Source sources[] = {
		{ gameRoot / SE_GAME_DIR / "resource" / "game.gameevents", "game" },
		{ gameRoot / SE_GAME_DIR / "resource" / "mod.gameevents",  "mod" },
		{ gameRoot / "core" / "resource" / "core.gameevents",      "core" },
	};

	std::vector<GameEventInfo> out;
	for (const Source& s : sources) {
		std::string text = ReadFile(s.path);
		if (text.empty()) {
			std::println(stderr, "gameevents: missing {}", s.path.string());
			continue;
		}
		ParseInto(text, s.module, out);
	}
	std::println("gameevents: {} events", out.size());
	return out;
}

}
