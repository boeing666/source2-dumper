#include "runtime/vscript.hpp"

#include <algorithm>
#include <cstring>
#include <format>
#include <print>
#include <string>
#include <unordered_set>

#include <igamesystem.h>
#include <igamesystemfactory.h>
#include <vscript/ivscript.h>

namespace schema {

// i am lazy to sync dota / deadlock repo with cs2
// dirty hack
abstract_class IVScriptGameSystem {
public:
	virtual void VScriptInit(bool bUnk) = 0;
};

class CVScriptGameSystem : public CBaseGameSystem, public IVScriptGameSystem {};

namespace {

std::string TypeName(ScriptDataType_t type) {
	return VariantFieldTypeName(static_cast<fieldtype_t>(type));
}

ScriptFunction ToFunction(const ScriptFunctionBinding_t& binding) {
	const ScriptFuncDescriptor_t& desc = binding.m_desc;

	ScriptFunction fn;
	fn.name = desc.m_pszScriptName ? desc.m_pszScriptName : "";
	fn.returnType = TypeName(desc.m_ReturnType);
	fn.description = desc.m_pszDescription ? desc.m_pszDescription : "";

	// parameter names are a buffer of consecutive null-terminated strings, absent when the first is empty
	const char* names = desc.m_pszParameterNames;
	for (int i = 0; i < desc.m_iParamCount && i < static_cast<int>(std::size(desc.m_Parameters)); ++i) {
		ScriptParam param;
		param.type = TypeName(desc.m_Parameters[i]);
		if (names && *names) {
			param.name = names;
			names += std::strlen(names) + 1;
		}
		fn.params.push_back(std::move(param));
	}
	return fn;
}

// Script VM that runs nothing and remembers everything the game registers into it.
class CRecordingScriptVM final : public IScriptVM {
public:
	ScriptApi& Api() { return _api; }

	void AddClass(const ScriptClassDesc_t* desc) {
		for (; desc && desc->m_pszClassname; desc = desc->m_pBaseDesc) {
			if (!_classes.insert(desc->m_pszClassname).second) {
				return; // its bases are already in too
			}

			ScriptClass cls;
			cls.name = desc->m_pszClassname;
			cls.scriptName = desc->m_pszScriptName ? desc->m_pszScriptName : "";
			cls.base = desc->m_pBaseDesc && desc->m_pBaseDesc->m_pszClassname ? desc->m_pBaseDesc->m_pszClassname : "";
			cls.description = desc->m_pszDescription ? desc->m_pszDescription : "";
			for (const ScriptFunctionBinding_t& binding : desc->m_FunctionBindings) {
				cls.functions.push_back(ToFunction(binding));
			}
			_api.classes.push_back(std::move(cls));
		}
	}

	bool Init() override { return true; }
	void Shutdown() override {}
	void DisableExecution() override {}
	ScriptLanguage_t GetLanguage() override { return SL_DEFAULT; }
	const char* GetLanguageName() override { return "recording"; }
	void* GetInternalVM() override { return nullptr; }
	void AddSearchPath(const char*) override {}
	void ClearTypeMap() override {}
	void EnableLocalDiskAccess() override {}
	bool ForwardConsoleCommand(const CCommandContext&, const CCommand&) override { return false; }
	bool Frame(float) override { return true; }

	ScriptStatus_t Run(const char*, bool) override { return SCRIPT_DONE; }
	HSCRIPT CompileScript(const char*, const char*) override { return nullptr; }
	void ReleaseScript(HSCRIPT) override {}
	ScriptStatus_t Run(HSCRIPT, HSCRIPT, bool) override { return SCRIPT_DONE; }
	ScriptStatus_t Run(HSCRIPT, bool) override { return SCRIPT_DONE; }

	HSCRIPT GetCurrentScope() override { return nullptr; }
	HSCRIPT CreateScope(const char*, HSCRIPT) override { return nullptr; }
	HSCRIPT ReferenceScope(HSCRIPT hScript) override { return hScript; }
	void ReleaseScope(HSCRIPT) override {}

	HSCRIPT LookupFunction(const char*, HSCRIPT, bool) override { return nullptr; }
	void ReleaseFunction(HSCRIPT) override {}
	ScriptStatus_t ExecuteFunction(HSCRIPT, ScriptVariant_t*, int, ScriptVariant_t*, HSCRIPT, bool) override { return SCRIPT_ERROR; }

	void RegisterFunction(ScriptFunctionBinding_t* pScriptFunction) override {
		if (pScriptFunction) {
			_api.functions.push_back(ToFunction(*pScriptFunction));
		}
	}

	bool RegisterScriptClass(ScriptClassDesc_t* pClassDesc) override {
		AddClass(pClassDesc);
		return true;
	}

	// The handle only has to be unique and non-null: the game binds it to a global name through SetValue.
	HSCRIPT RegisterInstance(ScriptClassDesc_t* pDesc, void*) override {
		AddClass(pDesc);
		_instanceClasses.push_back(pDesc && pDesc->m_pszClassname ? pDesc->m_pszClassname : "");
		return reinterpret_cast<HSCRIPT>(_instanceClasses.size());
	}

	void SetInstanceUniqeId(HSCRIPT, const char*) override {}
	void RemoveInstance(HSCRIPT) override {}
	void* GetInstanceValue(HSCRIPT, ScriptClassDesc_t*) override { return nullptr; }
	bool GenerateUniqueKey(const char*, char* pBuf, int nBufSize) override {
		if (pBuf && nBufSize > 0) {
			*pBuf = '\0';
		}
		return false;
	}

	bool ValueExists(HSCRIPT, const char*) override { return false; }

	bool SetValue(HSCRIPT, const char* pszKey, const char* pszValue) override {
		_api.constants.push_back({ pszKey ? pszKey : "", "cstring", pszValue ? pszValue : "" });
		return true;
	}

	bool SetValue(HSCRIPT, const char* pszKey, const ScriptVariant_t& value) override {
		const std::string key = pszKey ? pszKey : "";
		const auto handle = reinterpret_cast<uintptr_t>(value.m_hScript);
		if (value.m_type == FIELD_HSCRIPT && handle >= 1 && handle <= _instanceClasses.size()) {
			_api.instances.push_back({ key, _instanceClasses[handle - 1] });
			return true;
		}
		_api.constants.push_back({ key, TypeName(static_cast<ScriptDataType_t>(value.m_type)), ValueText(value) });
		return true;
	}

	bool SetValue(HSCRIPT, int, const ScriptVariant_t&) override { return true; }
	bool SetEnumValue(HSCRIPT, const char*, const char*, int, const char*) override { return true; }

	void CreateTable(ScriptVariant_t&) override {}
	bool IsTable(HSCRIPT) override { return false; }
	int GetNumTableEntries(HSCRIPT) override { return 0; }
	int GetNumElements(HSCRIPT) override { return 0; }
	int GetKeyValue(HSCRIPT, int, ScriptVariant_t*, ScriptVariant_t*) override { return -1; }
	bool CreateKeyValuesFromTable(HSCRIPT, const char*, void*, void*) override { return false; }

	bool GetValue(HSCRIPT, const char*, ScriptVariant_t*) override { return false; }
	bool GetValue(HSCRIPT, int, ScriptVariant_t*) override { return false; }
	bool GetScalarValue(HSCRIPT, ScriptVariant_t*) override { return false; }
	ScriptVariant_t CopyValue(ScriptVariant_t&) override { return {}; }
	void ReleaseValue(ScriptVariant_t&) override {}
	bool ClearValue(HSCRIPT, const char*) override { return false; }

	HSCRIPT CreateArray(ScriptVariant_t&) override { return nullptr; }
	bool IsArray(HSCRIPT) override { return false; }
	int GetArrayCount(HSCRIPT) override { return 0; }
	void ArrayAddToTail(HSCRIPT, const ScriptVariant_t&) override {}

	void WriteState(CUtlBuffer*) override {}
	void ReadState(CUtlBuffer*) override {}
	void CollectGarbage(const char*, bool) override {}
	void DumpState() override {}

	void SetOutputCallback(ScriptOutputFunc_t) override {}
	void SetErrorCallback(ScriptErrorFunc_t) override {}
	bool RaiseException(const char*) override { return false; }

	HSCRIPT GetRootTable() override { return nullptr; }
	HSCRIPT CopyHandle(HSCRIPT hScope) override { return hScope; }
#if defined(GAME_CS2)
	int LoadAndCompileScriptFile(const char*, const char*, HSCRIPT* pScript) override {
		if (pScript) {
			*pScript = nullptr;
		}
		return 0;
	}
#else
	HSCRIPT LoadAndCompileScriptFile(const char*, const char*) override { return nullptr; }
#endif
	void GetSourceId(HSCRIPT, char* pBuf, unsigned int nBufSize) override {
		if (pBuf && nBufSize) {
			*pBuf = '\0';
		}
	}
	bool AreHandlesEqual(HSCRIPT handle1, HSCRIPT handle2) override { return handle1 == handle2; }

private:
	static std::string ValueText(const ScriptVariant_t& value) {
		switch (value.m_type) {
		case FIELD_CSTRING: return value.m_pszString ? value.m_pszString : "";
		case FIELD_FLOAT32: return std::format("{}", value.m_float32);
		case FIELD_FLOAT64: return std::format("{}", value.m_float64);
		case FIELD_BOOLEAN: return value.m_bool ? "true" : "false";
		case FIELD_VECTOR:  {
			const Vector& v = value;
			return std::format("{} {} {}", v.x, v.y, v.z);
		}
		case FIELD_QANGLE:  {
			const QAngle& a = value;
			return std::format("{} {} {}", a.x, a.y, a.z);
		}
		case FIELD_UINT32:  return std::format("{}", value.m_uint32);
		case FIELD_INT64:   return std::format("{}", value.m_int64);
		case FIELD_UINT64:  return std::format("{}", value.m_uint64);
		default:            return std::format("{}", value.m_int32);
		}
	}

	ScriptApi _api;
	std::unordered_set<std::string> _classes;
	std::vector<std::string> _instanceClasses;
};

class CRecordingScriptManager final : public IScriptManager {
public:
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

	IScriptVM* CreateVM(ScriptLanguage_t) override { return &_vm; }
	void DestroyVM(IScriptVM*) override {}
	IScriptDebugger* GetDebugger() override { return nullptr; }

	CRecordingScriptVM& VM() { return _vm; }

private:
	CRecordingScriptVM _vm;
};

CRecordingScriptManager g_scriptManager;

#ifdef _WIN32
const std::string kFactoryName = std::format(".?AV?$CGameSystemReallocatingFactory@V{}@@V1@@@", VSCRIPT_GAME_SYSTEM);
#else
const std::string kFactoryName = std::format("30CGameSystemReallocatingFactoryI{}{}S0_E", std::strlen(VSCRIPT_GAME_SYSTEM), VSCRIPT_GAME_SYSTEM);
#endif

}

IScriptManager* RecordingScriptManager() {
	return &g_scriptManager;
}

ScriptApi CollectScriptApi(const ModuleMap& mods) {
	const auto it = mods.find("server");
	if (it == mods.end()) {
		return {};
	}

	// The factory's CreateGameSystem only allocates and constructs the system, so its vtable is enough.
	const void* factoryTable = it->second->module.GetVirtualTableByName(kFactoryName, true).GetPtr();
	if (!factoryTable) {
		std::println(stderr, "vscript: no {} factory", VSCRIPT_GAME_SYSTEM);
		return {};
	}
	auto* factory = reinterpret_cast<IGameSystemFactory*>(&factoryTable);

	auto* system = static_cast<CVScriptGameSystem*>(factory->CreateGameSystem());
	if (!system) {
		std::println(stderr, "vscript: {} factory created nothing", VSCRIPT_GAME_SYSTEM);
		return {};
	}

	static_cast<IVScriptGameSystem*>(system)->VScriptInit(false);

	ScriptApi api = std::move(g_scriptManager.VM().Api());
	std::ranges::sort(api.functions, {}, &ScriptFunction::name);
	std::ranges::sort(api.classes, {}, &ScriptClass::name);

	std::println("vscript: {} functions / {} instances / {} classes / {} constants",
	             api.functions.size(), api.instances.size(), api.classes.size(), api.constants.size());
	return api;
}

}
