#include "schema_dumper.hpp"
#include "schema_model.hpp"
#include "schema_util.hpp"
#include "header_writer.hpp"
#include "html_writer.hpp"

#include <algorithm>
#include <cstdio>
#include <format>
#include <fstream>
#include <string>
#include <string_view>
#include <unordered_set>
#include <vector>

#include <dynlibutils/module.hpp>
#include <schemasystem/schemasystem.h>

namespace schema {
namespace fs = std::filesystem;
using DynLibUtils::CModule;

#if defined(_WIN32)
static constexpr int kLoadFlags = 0x8;          // LOAD_WITH_ALTERED_SEARCH_PATH
#else
static constexpr int kLoadFlags = 0x2 | 0x100;  // RTLD_NOW | RTLD_GLOBAL
#endif

using CreateInterfaceFn = void* (*)(const char*, int*);
using InstallSchemaFn   = char  (*)(const char*, void*);

static std::string Decorate(std::string_view name) {
	return std::format(MODULE_PREFIX "{}" MODULE_EXT, name);
}

// e.g. ReadInf("PatchVersion") / ReadInf("ServerVersion") from game/<game>/steam.inf
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
	const std::string ext = MODULE_EXT;

	std::vector<CModule> mods;
	for (const fs::path& dir : { binDir, moduleDir }) {
		if (!fs::is_directory(dir)) {
			continue;
		}
		for (const auto& entry : fs::directory_iterator(dir)) {
			if (!entry.is_regular_file() || entry.path().extension() != ext) {
				continue;
			}
			CModule mod;
			if (mod.LoadFromPath(entry.path().string(), kLoadFlags)) {
				mods.push_back(std::move(mod));
			} else {
				// e.g. engine2/networksystem need steamnetworkingsockets.dll present in binDir
				std::fprintf(stderr, "warning: could not load %s (%s)\n",
				             entry.path().filename().string().c_str(), mod.GetLastError().data());
			}
		}
	}

	CModule* schemaMod = nullptr;
	const std::string schemaFile = Decorate("schemasystem");
	for (auto& m : mods) {
		if (m.GetName() == schemaFile) {
			schemaMod = &m;
			break;
		}
	}
	if (!schemaMod) {
		std::fprintf(stderr, "schemasystem not loaded\n");
		return 1;
	}

	auto createInterface = schemaMod->GetFunctionByName("CreateInterface").RCast<CreateInterfaceFn>();
	auto* sys = createInterface ? static_cast<CSchemaSystem*>(createInterface(SCHEMASYSTEM_INTERFACE_VERSION, nullptr)) : nullptr;
	if (!sys) {
		std::fprintf(stderr, "no schema system\n");
		return 1;
	}

	for (auto& m : mods) {
		if (auto fn = m.GetFunctionByName("InstallSchemaBindings").RCast<InstallSchemaFn>()) {
			fn(SCHEMASYSTEM_INTERFACE_VERSION, sys);
		}
	}

	// A module's scope name is not always its filename, so probe a few variants.
	std::vector<CSchemaSystemTypeScope*> scopes;
	std::vector<void*> seenScope;
	auto addScope = [&](CSchemaSystemTypeScope* s) {
		if (s && std::find(seenScope.begin(), seenScope.end(), s) == seenScope.end()) {
			seenScope.push_back(s);
			scopes.push_back(s);
		}
	};
	for (auto& m : mods) {
		std::string f(m.GetName());
		addScope(sys->FindTypeScopeForModule(f.c_str(), nullptr));
		std::string base = f.substr(0, f.find('.'));
		addScope(sys->FindTypeScopeForModule(base.c_str(), nullptr));
		if (base.rfind("lib", 0) == 0) {
			addScope(sys->FindTypeScopeForModule(base.substr(3).c_str(), nullptr));
		}
	}
	addScope(sys->GlobalTypeScope());

	auto prio = [](CSchemaSystemTypeScope* s) {
		std::string_view n = s->m_szScopeName;
		if (n.empty()) {
			return 0; // global
		}
		if (n == "server.dll" || n == "libserver.so") {
			return 1;
		}
		if (n == "client.dll" || n == "libclient.so") {
			return 2;
		}
		return 3;
	};
	std::stable_sort(scopes.begin(), scopes.end(), [&](auto* a, auto* b) { return prio(a) < prio(b); });

	std::vector<Module> modules;
	std::unordered_set<std::string> known;
	std::unordered_set<std::string> seen; // unique anchor id across classes + enums

	for (CSchemaSystemTypeScope* scope : scopes) {
		Module md;
		md.scope = scope->m_szScopeName[0] ? scope->m_szScopeName : "!GlobalTypes";
		md.safe  = SafeName(md.scope);

		auto& classes = scope->m_ClassBindings;
		if (int n = classes.Count(); n > 0) {
			std::vector<UtlTSHashHandle_t> handles(n);
			classes.GetElements(0, n, handles.data());
			for (int i = 0; i < n; ++i) {
				CSchemaClassInfo* c = classes.Element(handles[i]);
				if (!c || !c->m_pszName || !*c->m_pszName || !seen.insert(c->m_pszName).second) {
					continue;
				}
				md.classes.push_back({ c, SortedFields(c), !DerivesFromEntity(c) });
				known.insert(c->m_pszName);
			}
			std::ranges::sort(md.classes, [](const ClassRec& a, const ClassRec& b) {
				return std::string_view(a.info->m_pszName) < std::string_view(b.info->m_pszName);
			});
		}

		auto& enums = scope->m_EnumBindings;
		if (int n = enums.Count(); n > 0) {
			std::vector<UtlTSHashHandle_t> handles(n);
			enums.GetElements(0, n, handles.data());
			for (int i = 0; i < n; ++i) {
				CSchemaEnumInfo* e = enums.Element(handles[i]);
				if (!e || !e->m_pszName || !*e->m_pszName || !seen.insert(e->m_pszName).second) {
					continue;
				}
				md.enums.push_back(e);
				known.insert(e->m_pszName);
			}
			std::ranges::sort(md.enums, [](CSchemaEnumInfo* a, CSchemaEnumInfo* b) {
				return std::string_view(a->m_pszName) < std::string_view(b->m_pszName);
			});
		}

		if (!md.classes.empty() || !md.enums.empty()) {
			modules.push_back(std::move(md));
		}
	}

	const std::string patch = ReadInf("PatchVersion");
	WriteHeaders(modules, outDir / "headers" / PLATFORM_NAME);
	WritePlatformPage(outDir, modules, known, patch, ReadInf("ServerVersion"));
	if (!patch.empty()) {
		std::ofstream(outDir / "patchversion.txt", std::ios::trunc) << patch;   // read by the CI commit step
	}

	int total = 0;
	for (const Module& m : modules) {
		total += (int)(m.classes.size() + m.enums.size());
		std::printf("%-28s %5zu classes %4zu enums\n", m.scope.c_str(), m.classes.size(), m.enums.size());
	}
	std::printf("\n%d types / %zu modules -> %s (%s.html)\n",
	            total, modules.size(), outDir.string().c_str(), PLATFORM_NAME);
	return 0;
}

} // namespace schema
