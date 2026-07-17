#include "schema/schema_parse.hpp"
#include "schema/schema_util.hpp"

#include <algorithm>
#include <print>
#include <ranges>
#include <string_view>
#include <unordered_map>

#include <schemasystem/schemasystem.h>

namespace schema {

using InstallSchemaFn = char (*)(const char*, void*);

static CSchemaSystem* GetSchemaSystem(const ModuleMap& mods) {
	const auto it = mods.find("schemasystem");
	if (it == mods.end() || !it->second->func) {
		std::println(stderr, "schemasystem not loaded");
		return nullptr;
	}

	const auto sys = static_cast<CSchemaSystem*>(it->second->func(SCHEMASYSTEM_INTERFACE_VERSION, nullptr));
	if (!sys) {
		std::println(stderr, "no schema system");
		return nullptr;
	}

	for (const auto &gm: mods | std::views::values) {
		if (const auto fn = gm->module.GetFunctionByName("InstallSchemaBindings").RCast<InstallSchemaFn>()) {
			fn(SCHEMASYSTEM_INTERFACE_VERSION, sys);
		}
	}
	return sys;
}

static std::vector<CSchemaSystemTypeScope*> CollectScopes(CSchemaSystem* sys) {
	std::vector<CSchemaSystemTypeScope*> scopes;
	std::vector<void*> seen;
	auto add = [&](CSchemaSystemTypeScope* s) {
		if (s && !std::ranges::contains(seen, s)) {
			seen.push_back(s);
			scopes.push_back(s);
		}
	};

	for (int i = 0; i < sys->m_TypeScopes.GetNumStrings(); ++i) {
		add(sys->m_TypeScopes[i]);
	}

	add(sys->GlobalTypeScope());
	return scopes;
}

bool ParseSchema(const ModuleMap& mods, std::vector<Module>& modules, std::unordered_set<std::string>& known) {
	CSchemaSystem* sys = GetSchemaSystem(mods);
	if (!sys) {
		return false;
	}

	std::unordered_map<std::string, Module> byModule;
	std::unordered_set<std::string> seen;

	auto bucket = [&](const char* mod) -> Module& {
		std::string key = (mod && *mod) ? mod : "!GlobalTypes";
		Module& md = byModule[key];
		if (md.scope.empty()) { md.scope = key; md.safe = SafeName(key); }
		return md;
	};

	for (CSchemaSystemTypeScope* scope : CollectScopes(sys)) {
		auto& classes = scope->m_ClassBindings;
		if (int n = classes.Count(); n > 0) {
			std::vector<UtlTSHashHandle_t> handles(n);
			classes.GetElements(0, n, handles.data());

			for (int i = 0; i < n; ++i) {
				CSchemaClassInfo* c = classes.Element(handles[i]);
				if (!c || !c->m_pszName || !*c->m_pszName || !seen.insert(c->m_pszName).second) {
					continue;
				}
				bucket(sys->GetClassModuleName(c)).classes.push_back({ c, SortedFields(c), !DerivesFromEntity(c) });
				known.insert(c->m_pszName);
			}
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
				bucket(sys->GetEnumModuleName(e)).enums.push_back(e);
				known.insert(e->m_pszName);
			}
		}
	}

	for (auto &md: byModule | std::views::values) {
		std::ranges::sort(md.classes, [](const ClassRec& a, const ClassRec& b) {
			return std::string_view(a.info->m_pszName) < std::string_view(b.info->m_pszName);
		});
		std::ranges::sort(md.enums, [](CSchemaEnumInfo* a, CSchemaEnumInfo* b) {
			return std::string_view(a->m_pszName) < std::string_view(b->m_pszName);
		});
		modules.push_back(std::move(md));
	}

	auto prio = [](const std::string& n) {
		if (n == "server.dll" || n == "libserver.so") return 0;
		if (n == "client.dll" || n == "libclient.so") return 1;
		if (n == "!GlobalTypes") return 3;
		return 2;
	};

	std::ranges::sort(modules, [&](const Module& a, const Module& b) {
		int pa = prio(a.scope), pb = prio(b.scope);
		return pa != pb ? pa < pb : a.scope < b.scope;
	});

	return true;
}

}
