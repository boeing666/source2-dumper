#include "runtime/boot/stub_application.hpp"

#include "core/sdk.hpp"

namespace boot {

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
	KeyValues* GetGameInfo() override {
		if (!m_gameInfo) {
			m_gameInfo = new KeyValues("GameInfo");
		}
		return m_gameInfo;
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

private:
	KeyValues* m_gameInfo = nullptr;
};

CStubApplication g_stubApplication;

}

CTier1Application* StubApplication() {
	return &g_stubApplication;
}

}
