#include "appsystem.hpp"
#include "json_writer.hpp"

#include <cstdio>
#include <cstring>
#include <string>
#include <utility>
#include <vector>

#include <dynlibutils/module.hpp>
#include <dynlibutils/virtual.hpp>
#include <appframework/iappsystem.h>
#include <entity2/entityinstance.h>
#include <filesystem.h>
#include <icvar.h>
#include <networksystem/inetworkserializer.h>
#include <tier1/convar.h>

#if defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <tlhelp32.h>
#endif

#define DBG(...) do { std::fprintf(stderr, __VA_ARGS__); std::fflush(stderr); } while (0)

#include "eiface.h"

// interfaces.h only declares this tier3 global (extern); its definition normally lives in the tier1
// appframework we don't link. We own it here: ConnectAndBuildNetworkDatabase sets it, DumpAll uses it
// to Disconnect the server cleanly at the end.
ISource2Server* g_pSource2Server = nullptr;

#if defined(_WIN32)
#include <tier1/tier1.h>

// CTier1Application's destructor is pure-virtual with no body in the SDK header. Defining it in C++
// would make MSVC emit CTier1Application's *base* vtable, which drags in the entire tier1 app-framework
// (ConVar registration, ConnectTier1Libraries, ~20 game-side accessors) that we don't link. We never
// destroy the stub, so the symbol only needs to *exist*: alias it to an empty function via the linker,
// which does not emit the vtable.
extern "C" void s2dumper_tier1app_dtor() {}
#pragma comment(linker, "/alternatename:??1CTier1Application@@UEAA@XZ=s2dumper_tier1app_dtor")
#endif

namespace schema {
using DynLibUtils::CModule;
using DynLibUtils::CVirtualTable;
using CreateInterfaceFn = void* (*)(const char*, int*);

#if defined(_WIN32)

// During Connect the game asks our factory for a bunch of interfaces. A few of them live in no module
// we loaded. We can't answer with null: Connect stores the pointer and later calls virtual methods on
// it, so null would crash. Instead we hand out one shared object that implements the application
// interface, CTier1Application (kept in sync with the game in the SDK). Every method just returns a
// harmless default, which is all Connect needs to run to completion. Using the real typed class means
// its vtable has the same methods — and, crucially, the same length — the game expects (measured: the
// game calls up to slot 35 on VApplication001, well past IAppSystem's 11 methods).
class CStubApplication final : public CTier1Application {
public:
	~CStubApplication() override {}

	// IAppSystem
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

	// CTier1Application / IApplication
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

static CStubApplication g_stubApp;

// CreateInterface of every loaded module (RawFind locates an interface in whichever module exports it).
static std::vector<CreateInterfaceFn> g_factories;

static void* RawFind(const char* name) {
	for (CreateInterfaceFn createInterface : g_factories) {
		int rc = 0;
		if (void* iface = createInterface(name, &rc)) {
			return iface;
		}
	}
	return nullptr;
}

// DumpSource2's AppSystemFactory + g_factoryMap: cvar/schema/app are hardcoded, every other interface
// resolves to a system already brought up (by exact interface-version string), or nullptr. A system
// handles a nullptr dependency by skipping it; a stub or an over-broad "return any loaded module's
// interface" factory instead makes it store a not-ready object at Connect and deref it at Init -> crash.
static void* g_cvarIface = nullptr;
static void* g_schemaIface = nullptr;
static std::vector<std::pair<std::string, void*>> g_factoryMap;

// Source2Server001->Connect runs ConnectInterfaces, which stores each g_p* and later derefs some (e.g.
// g_pHostUtils from HostUtils001); a null there faults (server+0xD14046). The convar boot needs null on
// a miss (a stub breaks other systems' Init), so we only hand out the stub for misses while the server's
// own Connect runs — exactly enough for it to build the codegen DB.
static bool g_stubMisses = false;

// A large stub object: first 8 bytes = CStubApplication's vtable (so method calls hit our no-op thunks),
// the rest is slack so ConnectInterfaces writing fields into a stubbed service (e.g. g_pHostUtils) lands
// in the buffer instead of overflowing a bare vtable pointer.
alignas(16) static char g_bigStub[16384];

static void* StubObject() {
	*reinterpret_cast<void**>(g_bigStub) = *reinterpret_cast<void**>(&g_stubApp);
	return g_bigStub;
}

static void* CombinedFactory(const char* name, int* returnCode) {
	if (returnCode) {
		*returnCode = IFACE_OK;
	}
	if (std::strcmp(name, "VEngineCvar007") == 0)   { return g_cvarIface; }
	if (std::strcmp(name, "SchemaSystem_001") == 0) { return g_schemaIface; }
	if (std::strcmp(name, "VApplication001") == 0)  { return StubObject(); }
	for (auto& [n, p] : g_factoryMap) {
		if (n == name) {
			return p;
		}
	}
	return g_stubMisses ? StubObject() : nullptr;
}

// Factory for the standalone net-DB phase (the original working path): return the real interface from
// whatever module exports it, or the stub on a miss. Because misses get a stub (not our sparse-map
// nullptr), ConnectInterfaces sees real, writable service objects and its registration writes land in
// real memory — so Source2Server001->Connect completes and ExecuteNetworkInitFuncs builds the DB.
static void* NetFactory(const char* name, int* returnCode) {
	if (returnCode) {
		*returnCode = IFACE_OK;
	}
	if (void* p = RawFind(name)) {
		return p;
	}
	return StubObject();
}

// No-op replacement for ICvar::CallChangeCallback (vtable slot 14 = IAppSystem's 11 methods + FindConVar
// /FindFirstConVar/FindNextConVar). Suppresses convar change-callbacks during boot; the real ones
// recursively load appsystems (e.g. scenesystem) that aren't up yet and crash.
static void NoopCvarChangeCallback(void*) {}

static void PatchCvarChangeCallback(void* cvar) {
	void** vtbl = *reinterpret_cast<void***>(cvar);
	DWORD old = 0;
	if (VirtualProtect(&vtbl[14], sizeof(void*), PAGE_READWRITE, &old)) {
		vtbl[14] = reinterpret_cast<void*>(&NoopCvarChangeCallback);
		VirtualProtect(&vtbl[14], sizeof(void*), old, &old);
	}
}

// The server's Init spins up background game-system threads that fault shortly after (a lazily-init'd
// game system we don't set up). Suspend every other thread once the boot is done so the main thread can
// finish reading data + writing output before DumpAll's final TerminateProcess.
static void SuspendOtherThreads() {
	const DWORD me = GetCurrentThreadId();
	const DWORD pid = GetCurrentProcessId();
	HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
	if (snap == INVALID_HANDLE_VALUE) {
		return;
	}
	THREADENTRY32 te{};
	te.dwSize = sizeof(te);
	int n = 0;
	for (BOOL ok = Thread32First(snap, &te); ok; ok = Thread32Next(snap, &te)) {
		if (te.th32OwnerProcessID == pid && te.th32ThreadID != me) {
			if (HANDLE h = OpenThread(THREAD_SUSPEND_RESUME, FALSE, te.th32ThreadID)) {
				SuspendThread(h);
				CloseHandle(h);
				++n;
			}
		}
	}
	CloseHandle(snap);
	DBG("[boot] suspended %d game threads\n", n);
}

// Bring one app system up (DumpSource2 InitializeAppSystems): register its interface in the factory map
// BEFORE Connect (so it can resolve its own interfaces), Connect, then Init if requested.
static void BringUp(const char* iface, bool init) {
	void* p = RawFind(iface);
	if (!p) {
		DBG("[boot] %-28s NOT FOUND\n", iface);
		return;
	}
	g_factoryMap.emplace_back(iface, p);
	auto* as = static_cast<IAppSystem*>(p);
	as->Connect(&CombinedFactory);
	if (init) {
		DBG("[boot] %-28s Init=%d\n", iface, (int)as->Init());
	} else {
		DBG("[boot] %-28s connected\n", iface);
	}
}

// DumpSource2 g_appSystems order, up to and including the server. Later connect=false systems only exist
// to dump their own schemas (which we do separately), so we stop at the server. Server uses the Config
// interface, exactly like DumpSource2 (Source2ServerConfig001, not Source2Server001).
struct BootEntry { const char* iface; bool init; };
static const BootEntry kAppSystems[] = {
	{ "VFileSystem017",           true },   // filesystem_stdio
	{ "ResourceSystem013",        true },   // resourcesystem
	{ "Source2ClientConfig001",   true },   // client
	{ "Source2EngineToServer001", true },   // engine2
	{ "GameSystem2HostHook",      true },   // host
	{ "Source2ModTools001",       true },   // modtools
	{ "MATCHFRAMEWORK_001",       true },   // matchmaking (CS2)
	{ "Source2ServerConfig001",   true },   // server (Config interface; its Init registers convars)
};

CNetworkSerializerCodeGenDatabase* ConnectAndBuildNetworkDatabase(std::vector<CModule>& mods) {
	CModule* server = nullptr;
	CreateInterfaceFn tier0Fac = nullptr;

	const std::string serverFile = std::string(MODULE_PREFIX) + "server" + MODULE_EXT;
	const std::string tier0File = std::string(MODULE_PREFIX) + "tier0" + MODULE_EXT;
	g_factories.clear();
	g_factoryMap.clear();

	for (auto& m : mods) {
		auto f = m.GetFunctionByName("CreateInterface").RCast<CreateInterfaceFn>();
		if (f) {
			g_factories.push_back(f);
		}
		if (m.GetName() == serverFile) {
			server = &m;
		}
		if (m.GetName() == tier0File) {
			tier0Fac = f;
		}
	}
	if (!server || !tier0Fac) {
		return nullptr;
	}

	// PHASE 1 — net codegen DB. Standalone, before anything else is booted (its original working state):
	// Source2Server001->Connect with the real-or-stub NetFactory builds the DB; read it via CBaseEntity's
	// GetSerializerClassInfo. (Doing this after the convar boot faults: other systems being up changes
	// server->Connect's path, and CreateInterface("Source2Server001") itself lazily inits game systems.)
	CNetworkSerializerCodeGenDatabase* db = nullptr;
	if (void* srv = RawFind("Source2Server001")) {
		static_cast<IAppSystem*>(srv)->Connect(&NetFactory);
		auto ent = server->GetVirtualTableByName("CBaseEntity").RCast<CEntityInstance*>();
		CVirtualTable entVt(&ent);
		const CNetworkSerializerClassInfo* ci = entVt.CallMethod<const CNetworkSerializerClassInfo*>(0);
		db = ci ? ci->m_pDatabase : nullptr;
		DBG("[db] serializer DB = %p\n", (void*)db);
	}

	// PHASE 2 — convars. DumpSource2 boot: core cvar/schema (+ CallChangeCallback patch), then the app
	// systems; the server's Config-interface Init registers all convars/concommands into the cvar system.
	g_cvarIface = tier0Fac("VEngineCvar007", nullptr);
	if (g_cvarIface) {
		static_cast<IAppSystem*>(g_cvarIface)->Connect(tier0Fac);
		DBG("[boot] VEngineCvar007   Init=%d\n", (int)static_cast<IAppSystem*>(g_cvarIface)->Init());
	}
	g_schemaIface = RawFind("SchemaSystem_001");
	if (g_schemaIface) {
		static_cast<IAppSystem*>(g_schemaIface)->Connect(&CombinedFactory);
		DBG("[boot] SchemaSystem_001  Init=%d\n", (int)static_cast<IAppSystem*>(g_schemaIface)->Init());
	}
	if (g_cvarIface) {
		PatchCvarChangeCallback(g_cvarIface);
	}

	void* serverObj = nullptr;
	for (const BootEntry& e : kAppSystems) {
		void* p = RawFind(e.iface);
		if (!p) {
			DBG("[boot] %-28s NOT FOUND\n", e.iface);
			continue;
		}
		g_factoryMap.emplace_back(e.iface, p);
		static_cast<IAppSystem*>(p)->Connect(&CombinedFactory);
		if (std::strcmp(e.iface, "Source2ServerConfig001") == 0) {
			serverObj = p;
		}
		if (e.init) {
			DBG("[boot] %-28s Init=%d\n", e.iface, (int)static_cast<IAppSystem*>(p)->Init());
		} else {
			DBG("[boot] %-28s connected\n", e.iface);
		}
	}

	g_pSource2Server = static_cast<ISource2Server*>(serverObj);

	// Freeze the game-system background threads so the rest of DumpAll (net read, site write) runs without
	// them faulting. DumpAll ends with TerminateProcess, which tears everything down.
	SuspendOtherThreads();
	DBG("[boot] done, returning db=%p\n", (void*)db);
	return db;
}

// ---- convar / concommand collection (DumpSource2 technique, reimplemented via ICvar virtuals) -------
// FCVAR bit -> name (flag values are SDK facts).
static const std::pair<uint64_t, const char*> kFcvarFlags[] = {
	{ FCVAR_LINKED_CONCOMMAND, "linked_concommand" }, { FCVAR_DEVELOPMENTONLY, "developmentonly" },
	{ FCVAR_GAMEDLL, "gamedll" }, { FCVAR_CLIENTDLL, "clientdll" }, { FCVAR_HIDDEN, "hidden" },
	{ FCVAR_PROTECTED, "protected" }, { FCVAR_SPONLY, "sponly" }, { FCVAR_REFERENCE, "reference" },
	{ FCVAR_UNLOGGED, "unlogged" }, { FCVAR_INITIAL_SETVALUE, "initial_setvalue" },
	{ FCVAR_REPLICATED, "replicated" }, { FCVAR_CHEAT, "cheat" }, { FCVAR_PER_USER, "per_user" },
	{ FCVAR_DEMO, "demo" }, { FCVAR_DONTRECORD, "dontrecord" },
	{ FCVAR_PERFORMING_CALLBACKS, "performing_callbacks" }, { FCVAR_RELEASE, "release" },
	{ FCVAR_MENUBAR_ITEM, "menubar_item" }, { FCVAR_COMMANDLINE_ENFORCED, "commandline_enforced" },
	{ FCVAR_NOT_CONNECTED, "not_connected" }, { FCVAR_VCONSOLE_FUZZY_MATCHING, "vconsole_fuzzy_matching" },
	{ FCVAR_SERVER_CAN_EXECUTE, "server_can_execute" }, { FCVAR_CLIENT_CAN_EXECUTE, "client_can_execute" },
	{ FCVAR_SERVER_CANNOT_QUERY, "server_cannot_query" }, { FCVAR_VCONSOLE_SET_FOCUS, "vconsole_set_focus" },
	{ FCVAR_CLIENTCMD_CAN_EXECUTE, "clientcmd_can_execute" }, { FCVAR_EXECUTE_PER_TICK, "execute_per_tick" },
	{ FCVAR_DEFENSIVE, "defensive" },
};

static std::vector<std::string> DecodeFcvar(uint64_t flags) {
	std::vector<std::string> out;
	for (const auto& [bit, name] : kFcvarFlags) {
		if (flags & bit) {
			out.emplace_back(name);
		}
	}
	return out;
}

static std::string CvarValueStr(EConVarType type, const CVValue_t* v) {
	if (!v) {
		return {};
	}
	switch (type) {
		case EConVarType_Bool:    return v->m_bValue ? "true" : "false";
		case EConVarType_Int16:   return std::to_string(v->m_i16Value);
		case EConVarType_UInt16:  return std::to_string(v->m_u16Value);
		case EConVarType_Int32:   return std::to_string(v->m_i32Value);
		case EConVarType_UInt32:  return std::to_string(v->m_u32Value);
		case EConVarType_Int64:   return std::to_string(v->m_i64Value);
		case EConVarType_UInt64:  return std::to_string(v->m_u64Value);
		case EConVarType_Float32: return std::to_string(v->m_fl32Value);
		case EConVarType_Float64: return std::to_string(v->m_fl64Value);
		case EConVarType_String:  return v->m_StringValue.Get() ? v->m_StringValue.Get() : "";
		default:                  return {};
	}
}

void CollectConVars(std::vector<ConVarInfo>& convars, std::vector<ConCommandInfo>& concommands) {
	auto* cvar = static_cast<ICvar*>(g_cvarIface);
	if (!cvar) {
		return;
	}
	for (ConVarRef r = cvar->FindFirstConVar(); r.IsValidRef(); r = cvar->FindNextConVar(r)) {
		ConVarData* d = cvar->GetConVarData(r);
		if (!d || !d->GetName()) {
			continue;
		}
		const EConVarType t = d->GetType();
		ConVarInfo ci;
		ci.name = d->GetName();
		ci.type = (t > EConVarType_Invalid && t < EConVarType_MAX && d->GetDataTypeName()) ? d->GetDataTypeName() : "";
		ci.help = d->GetHelpText() ? d->GetHelpText() : "";
		ci.flagsRaw = d->GetFlags();
		ci.flags = DecodeFcvar(ci.flagsRaw);
		if (d->HasDefaultValue()) { ci.defaultValue = CvarValueStr(t, d->DefaultValue()); }
		if (d->HasMinValue())     { ci.minValue = CvarValueStr(t, d->MinValue()); }
		if (d->HasMaxValue())     { ci.maxValue = CvarValueStr(t, d->MaxValue()); }
		convars.push_back(std::move(ci));
	}
	for (ConCommandRef r = cvar->FindFirstConCommand(); r.IsValidRef(); r = cvar->FindNextConCommand(r)) {
		ConCommandData* d = cvar->GetConCommandData(r);
		if (!d || !d->GetName()) {
			continue;
		}
		ConCommandInfo cc;
		cc.name = d->GetName();
		cc.help = d->GetHelpText() ? d->GetHelpText() : "";
		cc.flagsRaw = d->GetFlags();
		cc.flags = DecodeFcvar(cc.flagsRaw);
		concommands.push_back(std::move(cc));
	}
	std::printf("convars: %zu / concommands: %zu\n", convars.size(), concommands.size());
}

#else  // !_WIN32

CNetworkSerializerCodeGenDatabase* ConnectAndBuildNetworkDatabase(std::vector<CModule>&) { return nullptr; }
void CollectConVars(std::vector<ConVarInfo>&, std::vector<ConCommandInfo>&) {}

#endif

} // namespace schema
