#include "runtime/boot/boot.hpp"
#include "runtime/boot/app_system_group.hpp"
#include "runtime/boot/module_systems.hpp"

#include <algorithm>
#include <cstdio>
#include <print>
#include <string>

#include <dynlibutils/module.hpp>
#include <dynlibutils/virtual.hpp>
#include <dynlibutils/vthook.hpp>
#include "core/sdk.hpp"

ISource2Server* g_pSource2Server = nullptr;
ISchemaSystem* g_pSchemaSystem = nullptr;
ICvar* g_pCVar = nullptr;

namespace boot {

namespace {

struct BaseSystem {
	const char* iface;
	bool init;
};

// Connected+initialised after cvar and schema, before the module systems.
constexpr BaseSystem kBaseSystems[] = {
	{ .iface = FILESYSTEM_INTERFACE_VERSION,            .init = true },
	{ .iface = RESOURCESYSTEM_INTERFACE_VERSION,        .init = true },
	{ .iface = "Source2ClientConfig001",                .init = true },
	{ .iface = SOURCE2ENGINETOSERVER_INTERFACE_VERSION, .init = true },
	{ .iface = "GameSystem2HostHook",                   .init = true },
	{ .iface = "Source2ModTools001",                    .init = true },
	{ .iface = MATCHFRAMEWORK_INTERFACE_VERSION,        .init = true },
	{ .iface = SOURCE2SERVERCONFIG_INTERFACE_VERSION,   .init = true },
};

// Convar change callbacks would recursively load scenesystem and crash; nothing here needs them.
void NoopCvarChangeCallback(void*) {}
DynLibUtils::CVTHook<void, void*> g_cvarChangeHook;

// The module whose CreateInterface hands out `system` for `iface`, for console-owner attribution.
std::string ModuleOf(const schema::ModuleMap& mods, const char* iface, const void* system) {
	const auto owns = [&](const auto& module) { return module.second->func && module.second->func(iface, nullptr) == system; };
	const auto it = std::ranges::find_if(mods, owns);
	return it != mods.end() ? it->first : std::string{};
}

// Source2Server must connect first: its Connect builds the network codegen database, which CBaseEntity's
// vtable slot 0 (GetSerializerClassInfo) then reaches.
CNetworkSerializerCodeGenDatabase* BootServer(const schema::ModuleMap& mods, const schema::GameModule& server) {
	IAppSystem* system = FindInModules(SOURCE2SERVER_INTERFACE_VERSION);
	if (!system) {
		return nullptr;
	}

	BootSystem(system, SOURCE2SERVER_INTERFACE_VERSION, &NetworkFactory, false);
	schema::SnapshotConsoleOwners(g_pCVar, ModuleOf(mods, SOURCE2SERVER_INTERFACE_VERSION, system));

	const CEntityInstance* entity = server.module.GetVirtualTableByName("CBaseEntity").RCast<CEntityInstance*>();
	DynLibUtils::CVirtualTable entityVTable(&entity);
	return entityVTable.CallMethod<const CNetworkSerializerClassInfo*>(0)->m_pDatabase;
}

void BootCvar(CreateInterfaceFn tier0Factory) {
	g_pCVar = static_cast<ICvar*>(tier0Factory(CVAR_INTERFACE_VERSION, nullptr));
	if (!g_pCVar) {
		return;
	}
	BootSystem(g_pCVar, CVAR_INTERFACE_VERSION, tier0Factory, true);
	g_cvarChangeHook.Hook<&ICvar::CallChangeCallback>(g_pCVar, &NoopCvarChangeCallback);
	schema::SnapshotConsoleOwners(g_pCVar, "tier0");
}

void BootSchemaSystem(const schema::ModuleMap& mods) {
	g_pSchemaSystem = static_cast<ISchemaSystem*>(FindInModules(SCHEMASYSTEM_INTERFACE_VERSION));
	if (!g_pSchemaSystem) {
		return;
	}
	BootSystem(g_pSchemaSystem, SCHEMASYSTEM_INTERFACE_VERSION, &GroupFactory, true);
	schema::SnapshotConsoleOwners(g_pCVar, ModuleOf(mods, SCHEMASYSTEM_INTERFACE_VERSION, g_pSchemaSystem));
}

void BootBaseSystems(const schema::ModuleMap& mods) {
	for (const auto& [iface, init] : kBaseSystems) {
		IAppSystem* system = FindInModules(iface);
		if (!system) {
			std::println(stderr, "[boot] {:<28} NOT FOUND", iface);
			continue;
		}
		Provide(iface, system);
		BootSystem(system, iface, &GroupFactory, init);
		schema::SnapshotConsoleOwners(g_pCVar, ModuleOf(mods, iface, system));
	}
}

}

CNetworkSerializerCodeGenDatabase* BootAppSystems(const schema::ModuleMap& mods) {
	AddModuleFactories(mods);

	const auto server = mods.find("server");
	const auto tier0 = mods.find("tier0");
	if (server == mods.end() || tier0 == mods.end() || !tier0->second->func) {
		return nullptr;
	}

	CNetworkSerializerCodeGenDatabase* networkDatabase = BootServer(mods, *server->second);
	BootCvar(tier0->second->func);
	BootSchemaSystem(mods);

	const std::vector<ResolvedModuleSystem> moduleSystems = RegisterModuleSystems(mods);
	BootBaseSystems(mods);
	BootModuleSystems(moduleSystems);

	schema::SnapshotConsoleOwners(g_pCVar, "tier0");
	return networkDatabase;
}

void ShutdownAppSystems() {
	ShutdownModuleSystems();
	DisconnectAll();
	g_cvarChangeHook.Clear();
}

}
