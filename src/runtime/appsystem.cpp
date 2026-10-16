#include "runtime/appsystem.hpp"
#include "runtime/vscript.hpp"

#include <cstdio>
#include <format>
#include <print>
#include <string>
#include <string_view>
#include <unordered_set>
#include <utility>
#include <vector>

#include <dynlibutils/module.hpp>
#include <dynlibutils/virtual.hpp>
#include <dynlibutils/vthook.hpp>
#include "core/sdk.hpp"

#include <ranges>

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

#if SDK_MAIN_BRANCH
	IAppSystem* AddSystem(IAppSystem*, const char*) override { return nullptr; }
	IAppSystem* AddSystem(const char*, const char*, AppSystemErrorPolicy_t) override { return nullptr; }
	IAppSystem* AddSystem(PlatModule_t, const char*, AppSystemErrorPolicy_t) override { return nullptr; }
	void RemoveSystem(IAppSystem*) override {}
	bool AddSystems(int, const AppSystemInfo_t*) override { return false; }
#else
	void AddSystem(IAppSystem*, const char*, AppSystemErrorPolicy_t) override {}
	void AddSystem(const char*, const char*, AppSystemErrorPolicy_t) override {}
	void AddSystem(IAppSystem*, const char*) override {}
	void RemoveSystem(IAppSystem*) override {}
	bool AddSystems(int, const AppSystemInfo_t**) override { return false; }
#endif
	void* FindSystem(const char*) override { return nullptr; }
	// Empty gameinfo: SceneSystem_002::Init reads it unconditionally (KeyValues::GetInt on the result).
	KeyValues* GetGameInfo() override {
		static KeyValues* gameInfo = new KeyValues("GameInfo");
		return gameInfo;
	}
	AppSystemBuildType_t GetAppSystemBuildType() override { return APP_SYSTEM_BUILD_UNKNOWN; }
	const char* GetLanguage(LanguageType_t) override { return nullptr; }
#if SDK_MAIN_BRANCH
	const char* GetSubLanguage(LanguageType_t) override { return nullptr; }
#else
	const char* GetModPath(int) override { return nullptr; }
#endif
	bool IsInToolsMode() override { return false; }
	bool IsConsoleApp() override { return false; }
#if SDK_MAIN_BRANCH
	CAppSystemDict::WindowSize_t* GetWindowSizeOverride() override { return nullptr; }
#else
	OpusRepacketizer* GetOpusRepacketizer() override { return nullptr; }
#endif
	bool IsInDeveloperMode() override { return false; }
	const char* GetExecutablePath() override { return nullptr; }
	const char* GetModGameSubdir() override { return nullptr; }
	KeyValues* GetApplicationInfo() override { return nullptr; }
	void* GetAppInstance() override { return nullptr; }
	const char* GetContentPath() override { return nullptr; }
	int GetAppSystemFlags() override { return 0; }
	CUtlString GetConsoleLogFilename() override { return {}; }
	void ChangeLogFileSuffix(const char*) override {}
#if SDK_MAIN_BRANCH
	IAppSystem* AddSystemDontLoadStartupManifests(const char*, const char*) override { return nullptr; }
	int GetGameMode() override { return 0; }
#else
	void AddSystemDontLoadStartupManifests(const char*, const char*) override {}
	const char* GetGameMode() override { return nullptr; }
#endif
	bool MountAddon(const char*) override { return false; }
	bool UnmountAddon(const char*) override { return false; }
	void GetMountedAddons(CUtlVector<CUtlString>&) override {}
	int GetMountedAddons(const char**, int) override { return 0; }
#if SDK_MAIN_BRANCH
	bool GetAddonsDirectory(CBufferString&) override { return false; }
	bool GetAddonsContentDirectory(CBufferString&) override { return false; }
#else
	bool GetAddonsDirectory(CUtlString&) override { return false; }
	bool GetAddonsContentDirectory(CUtlString&) override { return false; }
#endif
	bool IsFileInAddon(const char*) override { return false; }
	void GetAvailableAddons(CUtlVector<CUtlString>&, int) override {}
#if SDK_MAIN_BRANCH
	bool GetAddonInfo(KeyValues3*, const char*) override { return false; }
	bool IsRunningOnCustomerMachine() override { return false; }
	bool IsPerforceWorkspace() override { return false; }
	bool IsLowViolence() override { return false; }
	void SetLowViolence(bool) override {}
	void SetInitializationPhase(int) override {}
#else
	bool GetAddonInfo(KeyValues*, const char*) override { return false; }
	bool IsRunningOnCustomerMachine() override { return false; }
	bool IsLowViolence() override { return false; }
	bool SetLowViolence(bool) override { return false; }
	bool SetInitializationPhase(int) override { return false; }
#endif
	int GetInitializationPhase() override { return 0; }
	const char* GetRestrictAddonsTo() override { return nullptr; }
	void SetAllowAddonChanges(bool) override {}
	void SetUGCAddonPathResolver(IUGCAddonPathResolver*) override {}
#if SDK_MAIN_BRANCH
	CUtlString GetFullAddonPathFromID(uint64) override { return {}; }
#else
	CUtlString GetAddonNameFromID(uint64) override { return {}; }
#endif
	uint64 GetIDFromAddonName(const char*) override { return 0; }
	CUtlString GetFullAddonPathFromAddonName(const char*) override { return {}; }
	void GetAvailableAddonMaps(CUtlVector<CUtlString>&, const char*, bool) override {}
	void LoadStartupManifestGroup(const char*) override {}
	CUtlString GetAddonSourceFolder(const char*) override { return {}; }
	void OnStartupManifestGroupLoaded() override {}
#if SDK_MAIN_BRANCH
	void unk061(void*) override {}
	CAppSystemDict* GetAppSystemDict() override { return nullptr; }
#else
	void AddStartupManifest(ResourceManifestDesc_t&) override {}
	CAppSystemDict* GetAppSystemDict() override { return nullptr; }

	// cs2-only vfunc (absent on dota/deadlock SDK branches), so no `override`.
	virtual bool IsPerforceWorkspace() { return false; }
#endif
};

CStubApplication g_stubApp;

std::vector<CreateInterfaceFn> g_factories;
std::vector<std::pair<IAppSystem*, bool>> g_booted;
// Module-stage systems that Init'ed; they own worker threads (async filesystem, audio) that must be
// stopped through Shutdown, or their DLLs' static destructors block at exit (Linux pthread_cond_destroy).
std::vector<IAppSystem*> g_moduleBooted;

std::vector<std::pair<std::string, IAppSystem*>> g_factoryMap;

// Factory returned by IRenderDeviceMgr::CreateDevice: RenderDevice003, RenderHardwareConfig002, VRenderDeviceSetupV001.
CreateInterfaceFn g_deviceFactory = nullptr;

// IRenderDeviceMgr::CreateDevice(int adapter, int flags, int dxLevel): IAppSystem (0-10) + 7 adapter/mode
// queries. Called by slot because only the main SDK branch declares the interface (dota's lacks it).
constexpr int kCreateDeviceSlot = 18;

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
	} else if (want == VSCRIPT_INTERFACE_VERSION) {
		iface = RecordingScriptManager();
	} else {
		for (auto& [n, p] : g_factoryMap) {
			if (n == want) {
				iface = p;
				break;
			}
		}
		if (!iface && g_deviceFactory) {
			iface = g_deviceFactory(name, nullptr);
		}
		// CAppSystemGroup fallback: secondary interfaces (ResourceHandleUtils001, MeshUtils001,
		// NetworkMessagesVersion001, ...) are only reachable through their owner's QueryInterface.
		for (auto it = g_factoryMap.begin(); !iface && it != g_factoryMap.end(); ++it) {
			iface = it->second->QueryInterface(name);
		}
	}

	if (returnCode) {
		*returnCode = iface ? IFACE_OK : IFACE_FAILED;
	}

	return iface;
}

void* NetFactory(const char* name, int* returnCode) {
	void* iface = std::string_view(name) == VSCRIPT_INTERFACE_VERSION ? RecordingScriptManager() : RawFind(name);
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

// Every engine DLL links tier0_perproject: its static ConVars/ConCommands only reach ICvar when the
// DLL's own ConVar_Register runs, from Connect (materialsystem2, soundsystem) or Init (the rest) of
// one of its app systems. Booted in tier/GetDependencies() order, each Connect+Init back to back so
// later systems connect against initialised dependencies. `provide` = the CombinedFactory answer for
// that interface name (only one RenderDeviceMgr001 may serve dependents; it also creates the device).
//
// Not booted (cannot Init offline):
// - rendersystemvulkan: its r_renderdoc_capture_window_vulkan is not FCVAR_LINKED_CONCOMMAND, so it
//   collides with rendersystemempty/dx11 -> Plat_FatalError (the engine only ever loads one backend).
// - assetpreview: AssetPreviewSystem_001::Init derefs g_pAssetSystem (assetsystem.dll, not shipped).
// - toolframework2 / helpsystem / propertyeditor: Qt tools; Connect/Init hit a Qt fatal (no
//   QApplication / platform plugin) -> abort or a blocking error message loop.
// Left out on purpose: vconcomm (VConComm001::Init registers 2 concommands but also opens a VConsole
// TCP listener on 0.0.0.0:29000).
struct ModuleBootEntry { const char* module; const char* iface; bool provide = true; };
// dota2's Linux build (older engine) faults in resourcesystem at varying points of these Inits
// (vphysics2, steamaudio, ...), so it keeps the base boot only.
#if defined(GAME_DOTA2) && !defined(_WIN32)
constexpr bool kBootModuleSystems = false;
#else
constexpr bool kBootModuleSystems = true;
#endif

const ModuleBootEntry kModuleSystems[] = {
	{ "tier0",					"VProcessUtils002" },
	{ "filesystem_stdio",		"VAsyncFileSystem2_001" },
	{ "localize",				"Localize_001" },
	{ "imemanager",				"IMEManager001" },
	{ "inputsystem",			"InputSystemVersion001" },
	{ "inputsystem",			"InputStackSystemVersion001" },
	{ "steamaudio",				"SteamAudio001" },
	{ "soundsystem",			"SoundSystem001" },
	{ "soundsystem",			"SoundOpSystem001" },
	{ "vphysics2",				"VPhysics2_Interface_001" },
	{ "v8system",				"Source2V8System001" },
	{ "vscript",				"VScriptManager010" },
	{ "networksystem",			"NetworkSystemVersion001" },
	{ "rendersystemempty",		RENDER_DEVICE_MGR_INTERFACE_VERSION },
	{ "rendersystemempty",		"RenderUtils_001" },
	{ "rendersystemdx11",		RENDER_DEVICE_MGR_INTERFACE_VERSION, false },
	// Before materialsystem2: on Linux FontManager_001::Init renders through pango text services, which
	// must already be connected (else its null g_pFullFileSystem faults reading panorama/fonts/fonts.conf).
	{ "panorama_text_pango",	"PanoramaTextServices001" },
	{ "materialsystem2",		"VMaterialSystem2_001" },
	{ "materialsystem2",		"FontManager_001" },
	{ "materialsystem2",		"TextLayout_001" },
	{ "materialsystem2",		"MaterialUtils_001" },
	{ "materialsystem2",		"PostProcessingSystem_001" },
	{ "animationsystem",		"AnimationSystem_001" },
	{ "navsystem",				"NavSystem001" },
	{ "pulse_system",			"IPulseSystem_001" },
	{ "meshsystem",				"MeshSystem001" },
	{ "scenesystem",			"SceneSystem_002" },
	{ "particles",				"ParticleSystemMgr003" },
	{ "worldrenderer",			"WorldRendererMgr001" },
	{ "physicsbuilder",			"PhysicsBuilderMgr001" },
	{ "scenefilecache",			"ResponseRulesCache001" },
	{ "scenefilecache",			"SceneFileCache002" },
	{ "visbuilder",				"VisBuilder_001" },
	{ "panorama",				"PanoramaUIEngine001" },
	{ "panoramauiclient",		"PanoramaUIClient001" },
	{ "resourcecompiler",		"ResourceCompilerSystem001" },	// Init fails (tools deps missing) after ConVar_Register
};

}

static std::string ModuleOf(const ModuleMap& mods, const char* iface, const void* system) {
	for (const auto& [name, gm] : mods) {
		if (gm->func && gm->func(iface, nullptr) == system) {
			return name;
		}
	}
	return {};
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
		const std::string owner = ModuleOf(mods, SOURCE2SERVER_INTERFACE_VERSION, srv);
		BootSystem(srv, SOURCE2SERVER_INTERFACE_VERSION, &NetFactory, false);
		SnapshotConsoleOwners(g_pCVar, owner);

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
		SnapshotConsoleOwners(g_pCVar, "tier0");
	}

	g_pSchemaSystem = static_cast<ISchemaSystem *>(RawFind(SCHEMASYSTEM_INTERFACE_VERSION));
	if (g_pSchemaSystem) {
		const std::string owner = ModuleOf(mods, SCHEMASYSTEM_INTERFACE_VERSION, g_pSchemaSystem);
		BootSystem(g_pSchemaSystem, SCHEMASYSTEM_INTERFACE_VERSION, &CombinedFactory, true);
		SnapshotConsoleOwners(g_pCVar, owner);
	}

	// Register module systems up front (like CAppSystemGroup::AddSystem) so every Connect below,
	// including the kAppSystems ones (ResourceSystem013 wants VAsyncFileSystem2_001), resolves them.
	std::vector<std::pair<const ModuleBootEntry*, IAppSystem*>> moduleSystems;
	for (const ModuleBootEntry& e : kModuleSystems) {
		if (!kBootModuleSystems) {
			break;
		}
		const auto it = mods.find(e.module);
		auto* p = (it != mods.end() && it->second->func) ? static_cast<IAppSystem*>(it->second->func(e.iface, nullptr)) : nullptr;
		if (!p) {
			DBG("[boot] {:<28} NOT FOUND in {}", e.iface, e.module);
			continue;
		}
		if (e.provide) {
			g_factoryMap.emplace_back(e.iface, p);
		}
		moduleSystems.emplace_back(&e, p);
	}

	for (const auto &[iface, init] : kAppSystems) {
		IAppSystem* p = RawFind(iface);
		if (!p) {
			DBG("[boot] {:<28} NOT FOUND", iface);
			continue;
		}

		g_factoryMap.emplace_back(iface, p);

		const std::string owner = ModuleOf(mods, iface, p);
		BootSystem(p, iface, &CombinedFactory, init);
		SnapshotConsoleOwners(g_pCVar, owner);
	}

	for (const auto& [e, p] : moduleSystems) {
		BootSystem(p, std::format("{}:{}", e->module, e->iface), &CombinedFactory, true);
		g_moduleBooted.push_back(p);
		SnapshotConsoleOwners(g_pCVar, e->module);

		// What the engine does right after the render backend's Init: create the device, then hand its
		// interfaces to the systems that connected before it existed (rendersystemempty's own
		// g_pRenderHardwareConfig, ...). Empty backend: no GPU device, no window.
		if (e->provide && !g_deviceFactory && std::string_view(e->iface) == RENDER_DEVICE_MGR_INTERFACE_VERSION) {
			g_deviceFactory = CVirtualTable(p).CallMethod<CreateInterfaceFn, void*, int, int, int>(kCreateDeviceSlot, p, 0, 0, 110);
			for (const char* devIface : { RENDER_DEVICE_INTERFACE_VERSION, RENDER_HARDWARECONFIG_INTERFACE_VERSION, "VRenderDeviceSetupV001" }) {
				for (const auto& sys : g_booted | std::views::keys) {
					sys->Reconnect(&CombinedFactory, devIface);
				}
			}
		}
	}

	SnapshotConsoleOwners(g_pCVar, "tier0");

	return db;
}

void ShutdownAppSystems() {
	for (auto it = g_moduleBooted.rbegin(); it != g_moduleBooted.rend(); ++it) {
		(*it)->Shutdown();
	}
	g_moduleBooted.clear();

	for (auto it = g_booted.rbegin(); it != g_booted.rend(); ++it) {
		IAppSystem* s = it->first;
		s->Disconnect();
	}

	g_booted.clear();
	g_cvarChangeHook.Clear();
}

ICvar* BootedCvarInterface() { return g_pCVar; }

}
