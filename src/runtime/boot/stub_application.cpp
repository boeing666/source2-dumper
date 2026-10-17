#include "runtime/boot/stub_application.hpp"

#include "core/sdk.hpp"

namespace boot {

namespace {

// Mirrors the engine's IApplication vtable directly instead of deriving from the SDK's declaration: the
// dota SDK branch still describes the old layout (no AddSystem(PlatModule_t), GetModPath, ...) while every
// shipped game now uses this one. Only the slot order and the by-value CUtlString returns matter to the
// caller, so branch-specific parameter types are opaque pointers here.
class CStubApplication final : public IAppSystem {
public:
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

	// IApplication
	virtual ~CStubApplication() {}
	virtual IAppSystem* AddSystem(IAppSystem*, const char*) { return nullptr; }
	virtual IAppSystem* AddSystem(const char*, const char*, int /* AppSystemErrorPolicy_t */) { return nullptr; }
	virtual IAppSystem* AddSystem(void* /* PlatModule_t */, const char*, int) { return nullptr; }
	virtual void RemoveSystem(IAppSystem*) {}
	virtual bool AddSystems(int, const void* /* AppSystemInfo_t* */) { return false; }
	virtual void* FindSystem(const char*) { return nullptr; }
	virtual KeyValues* GetGameInfo() {
		if (!m_gameInfo) {
			m_gameInfo = new KeyValues("GameInfo");
		}
		return m_gameInfo;
	}
	virtual AppSystemBuildType_t GetAppSystemBuildType() { return APP_SYSTEM_BUILD_UNKNOWN; }
	virtual const char* GetLanguage(int /* LanguageType_t */) { return nullptr; }
	virtual const char* GetSubLanguage(int) { return nullptr; }
	virtual bool IsInToolsMode() { return false; }
	virtual bool IsConsoleApp() { return false; }
	virtual void* GetWindowSizeOverride() { return nullptr; }
	virtual bool IsInDeveloperMode() { return false; }
	virtual const char* GetExecutablePath() { return nullptr; }
	virtual const char* GetModGameSubdir() { return nullptr; }
	virtual KeyValues* GetApplicationInfo() { return nullptr; }
	virtual void* GetAppInstance() { return nullptr; }
	virtual const char* GetContentPath() { return nullptr; }
	virtual int GetAppSystemFlags() { return 0; }
	virtual CUtlString GetConsoleLogFilename() { return {}; }
	virtual void ChangeLogFileSuffix(const char*) {}
	virtual IAppSystem* AddSystemDontLoadStartupManifests(const char*, const char*) { return nullptr; }
	virtual int GetGameMode() { return 0; }
	virtual bool MountAddon(const char*) { return false; }
	virtual bool UnmountAddon(const char*) { return false; }
	virtual void GetMountedAddons(void* /* CUtlVector<CUtlString>& */) {}
	virtual int GetMountedAddons(const char**, int) { return 0; }
	virtual bool GetAddonsDirectory(void* /* CBufferString& */) { return false; }
	virtual bool GetAddonsContentDirectory(void*) { return false; }
	virtual bool IsFileInAddon(const char*) { return false; }
	virtual void GetAvailableAddons(void* /* CUtlVector<CUtlString>& */, int) {}
	virtual bool GetAddonInfo(void* /* KeyValues3* */, const char*) { return false; }
	virtual bool IsRunningOnCustomerMachine() { return false; }
	virtual bool IsPerforceWorkspace() { return false; }
	virtual bool IsLowViolence() { return false; }
	virtual void SetLowViolence(bool) {}
	virtual void SetInitializationPhase(int) {}
	virtual int GetInitializationPhase() { return 0; }
	virtual const char* GetRestrictAddonsTo() { return nullptr; }
	virtual void SetAllowAddonChanges(bool) {}
	virtual void SetUGCAddonPathResolver(void* /* IUGCAddonPathResolver* */) {}
	virtual CUtlString GetFullAddonPathFromID(uint64) { return {}; }
	virtual uint64 GetIDFromAddonName(const char*) { return 0; }
	virtual CUtlString GetFullAddonPathFromAddonName(const char*) { return {}; }
	virtual void GetAvailableAddonMaps(void* /* CUtlVector<CUtlString>& */, const char*, bool) {}
	virtual void LoadStartupManifestGroup(const char*) {}
	virtual CUtlString GetAddonSourceFolder(const char*) { return {}; }
	virtual void OnStartupManifestGroupLoaded() {}
	virtual void unk061(void*) {}
	virtual void* GetAppSystemDict() { return nullptr; }

private:
	KeyValues* m_gameInfo = nullptr;
};

CStubApplication g_stubApplication;

}

IAppSystem* StubApplication() {
	return &g_stubApplication;
}

}
