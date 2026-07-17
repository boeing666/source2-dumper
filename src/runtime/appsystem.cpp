#include "runtime/appsystem.hpp"

#include <cstdio>
#include <print>
#include <string>
#include <string_view>
#include <unordered_set>
#include <utility>
#include <vector>

#include <dynlibutils/module.hpp>
#include <dynlibutils/virtual.hpp>
#include <dynlibutils/vthook.hpp>
#include <appframework/iappsystem.h>
#include <entity2/entityinstance.h>
#include <filesystem.h>
#include <icvar.h>
#include <networksystem/inetworkserializer.h>
#include <schemasystem/schemasystem.h>

#include <ranges>
#include "eiface.h"

#include <tier1/tier1.h>

#define DBG(...) std::println(stderr, __VA_ARGS__)

ISource2Server* g_pSource2Server = nullptr;
ISchemaSystem* g_pSchemaSystem = nullptr;
ICvar* g_pCVar = nullptr;

namespace schema {
using DynLibUtils::CModule;
using DynLibUtils::CVirtualTable;

namespace {

class CStubApplication final : public CTier1Application {
public:
	~CStubApplication() override { }

	bool Connect(CreateInterfaceFn) override { return true; }
	void Disconnect() override {}
	void* QueryInterface(const char*) override { return nullptr; }
	InitReturnVal_t Init() override { return INIT_OK; }
	void Shutdown() override {}
	void PreShutdown() override {}
	const AppSystemInfo_t* GetDependencies() override { return nullptr; }
	AppSystemTier_t GetTier() override { return APP_SYSTEM_TIER_OTHER; }
	void Reconnect(CreateInterfaceFn, const char*) override {}
	bool IsSingleton() override { return true; }
	AppSystemBuildType_t GetBuildType() override { return APP_SYSTEM_BUILD_UNKNOWN; }

	void AddSystem(IAppSystem*, const char*, AppSystemErrorPolicy_t) override {}
	void AddSystem(const char*, const char*, AppSystemErrorPolicy_t) override {}
	void AddSystem(IAppSystem*, const char*) override {}
	void RemoveSystem(IAppSystem*) override {}
	bool AddSystems(int, const AppSystemInfo_t**) override { return false; }
	void* FindSystem(const char*) override { return nullptr; }
	KeyValues* GetGameInfo() override { return nullptr; }
	AppSystemBuildType_t GetAppSystemBuildType() override { return APP_SYSTEM_BUILD_UNKNOWN; }
	const char* GetLanguage(LanguageType_t) override { return nullptr; }
	const char* GetModPath(int) override { return nullptr; }
	bool IsInToolsMode() override { return false; }
	bool IsConsoleApp() override { return false; }
	OpusRepacketizer* GetOpusRepacketizer() override { return nullptr; }
	bool IsInDeveloperMode() override { return false; }
	const char* GetExecutablePath() override { return nullptr; }
	const char* GetModGameSubdir() override { return nullptr; }
	KeyValues* GetApplicationInfo() override { return nullptr; }
	void* GetAppInstance() override { return nullptr; }
	const char* GetContentPath() override { return nullptr; }
	int GetAppSystemFlags() override { return 0; }
	CUtlString GetConsoleLogFilename() override { return {}; }
	void ChangeLogFileSuffix(const char*) override {}
	void AddSystemDontLoadStartupManifests(const char*, const char*) override {}
	const char* GetGameMode() override { return nullptr; }
	bool MountAddon(const char*) override { return false; }
	bool UnmountAddon(const char*) override { return false; }
	void GetMountedAddons(CUtlVector<CUtlString>&) override {}
	int GetMountedAddons(const char**, int) override { return 0; }
	bool GetAddonsDirectory(CUtlString&) override { return false; }
	bool GetAddonsContentDirectory(CUtlString&) override { return false; }
	bool IsFileInAddon(const char*) override { return false; }
	void GetAvailableAddons(CUtlVector<CUtlString>&, int) override {}
	bool GetAddonInfo(KeyValues*, const char*) override { return false; }
	bool IsRunningOnCustomerMachine() override { return false; }
	bool IsLowViolence() override { return false; }
	bool SetLowViolence(bool) override { return false; }
	bool SetInitializationPhase(int) override { return false; }
	int GetInitializationPhase() override { return 0; }
	const char* GetRestrictAddonsTo() override { return nullptr; }
	void SetAllowAddonChanges(bool) override {}
	void SetUGCAddonPathResolver(IUGCAddonPathResolver*) override {}
	CUtlString GetAddonNameFromID(uint64) override { return {}; }
	uint64 GetIDFromAddonName(const char*) override { return 0; }
	CUtlString GetFullAddonPathFromAddonName(const char*) override { return {}; }
	void GetAvailableAddonMaps(CUtlVector<CUtlString>&, const char*, bool) override {}
	void LoadStartupManifestGroup(const char*) override {}
	CUtlString GetAddonSourceFolder(const char*) override { return {}; }
	void OnStartupManifestGroupLoaded() override {}
	void AddStartupManifest(ResourceManifestDesc_t&) override {}
	CAppSystemDict* GetAppSystemDict() override { return nullptr; }
};

CStubApplication g_stubApp;

std::vector<CreateInterfaceFn> g_factories;
std::vector<std::pair<IAppSystem*, bool>> g_booted;

std::vector<std::pair<std::string, IAppSystem*>> g_factoryMap;

IAppSystem* RawFind(const char* name) {
	for (CreateInterfaceFn createInterface : g_factories) {
		int rc = 0;
		if (auto iface = static_cast<IAppSystem*>(createInterface(name, &rc))) {
			return iface;
		}
	}
	return nullptr;
}

void* CombinedFactory(const char* name, int* returnCode) {
	const std::string_view want(name);

	void* iface = nullptr;
	if (want == CVAR_INTERFACE_VERSION) {
		iface = g_pCVar;
	} else if (want == SCHEMASYSTEM_INTERFACE_VERSION) {
		iface = g_pSchemaSystem;
	} else if (want == APPLICATION_INTERFACE_VERSION) {
		iface = &g_stubApp;
	} else {
		for (auto& [n, p] : g_factoryMap) {
			if (n == want) {
				iface = p;
				break;
			}
		}
	}

	if (returnCode) {
		*returnCode = iface ? IFACE_OK : IFACE_FAILED;
	}

	return iface;
}

void* NetFactory(const char* name, int* returnCode) {
	void* iface = RawFind(name);
	if (!iface) {
		iface = &g_stubApp;
	}
	if (returnCode) {
		*returnCode = IFACE_OK;
	}
	return iface;
}

void NoopCvarChangeCallback(void*) {}
DynLibUtils::CVTHook<void, void*> g_cvarChangeHook;

void BootSystem(IAppSystem* sys, std::string_view name, CreateInterfaceFn factory, bool init) {
	sys->Connect(factory);
	if (init) {
		DBG("[boot] {:<28} Init={}", name, static_cast<int>(sys->Init()));
	} else {
		DBG("[boot] {:<28} connected", name);
	}
	g_booted.emplace_back(sys, init);
}

struct BootEntry { const char* iface; bool init; };
const BootEntry kAppSystems[] = {
	{ FILESYSTEM_INTERFACE_VERSION,					true },
	{ RESOURCESYSTEM_INTERFACE_VERSION,				true },
	{ "Source2ClientConfig001",						true },
	{ SOURCE2ENGINETOSERVER_INTERFACE_VERSION,		true },
	{ "GameSystem2HostHook",						true },
	{ "Source2ModTools001",							true },
	{ MATCHFRAMEWORK_INTERFACE_VERSION,				true },
	{ SOURCE2SERVERCONFIG_INTERFACE_VERSION,		true },
};

}

CNetworkSerializerCodeGenDatabase* ConnectAndBuildNetworkDatabase(const ModuleMap& mods) {
	for (const auto &gm: mods | std::views::values) {
		if (gm->func) {
			g_factories.push_back(gm->func);
		}
	}

	const auto serverIt = mods.find("server");
	const auto tier0It  = mods.find("tier0");
	if (serverIt == mods.end() || tier0It == mods.end() || !tier0It->second->func) {
		return nullptr;
	}

	CNetworkSerializerCodeGenDatabase* db = nullptr;

	if (IAppSystem* srv = RawFind(SOURCE2SERVER_INTERFACE_VERSION)) {
		BootSystem(srv, SOURCE2SERVER_INTERFACE_VERSION, &NetFactory, false);

		const CModule* server = &serverIt->second->module;
		const CEntityInstance* entity = server->GetVirtualTableByName("CBaseEntity").RCast<CEntityInstance*>();

		CVirtualTable entityVTable(&entity);
		const auto classInfo = entityVTable.CallMethod<const CNetworkSerializerClassInfo*>(0);
		db = classInfo->m_pDatabase;
	}

	const CreateInterfaceFn tier0Factory = tier0It->second->func;
	g_pCVar = static_cast<ICvar *>(tier0Factory(CVAR_INTERFACE_VERSION, nullptr));
	if (g_pCVar) {
		BootSystem(g_pCVar, CVAR_INTERFACE_VERSION, tier0Factory, true);
		g_cvarChangeHook.Hook<&ICvar::CallChangeCallback>(g_pCVar, &NoopCvarChangeCallback);
	}

	g_pSchemaSystem = static_cast<ISchemaSystem *>(RawFind(SCHEMASYSTEM_INTERFACE_VERSION));
	if (g_pSchemaSystem) {
		BootSystem(g_pSchemaSystem, SCHEMASYSTEM_INTERFACE_VERSION, &CombinedFactory, true);
	}

	for (const auto &[iface, init] : kAppSystems) {
		IAppSystem* p = RawFind(iface);
		if (!p) {
			DBG("[boot] {:<28} NOT FOUND", iface);
			continue;
		}

		g_factoryMap.emplace_back(iface, p);
		BootSystem(p, iface, &CombinedFactory, init);
	}

	return db;
}

void ShutdownAppSystems() {
	for (auto it = g_booted.rbegin(); it != g_booted.rend(); ++it) {
		IAppSystem* s = it->first;
		s->Disconnect();
	}

	g_booted.clear();
	g_cvarChangeHook.Clear();
}

ICvar* BootedCvarInterface() { return g_pCVar; }

}
