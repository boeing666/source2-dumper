#include "runtime/boot/app_system_group.hpp"
#include "runtime/boot/stub_application.hpp"
#include "runtime/vscript.hpp"

#include <algorithm>
#include <cstdio>
#include <print>
#include <ranges>
#include <vector>

#include "core/sdk.hpp"

namespace boot {

namespace {

struct ProvidedSystem {
	std::string_view name;
	IAppSystem* system;
};

std::vector<CreateInterfaceFn> g_moduleFactories;
std::vector<ProvidedSystem> g_provided;
CreateInterfaceFn g_deviceFactory = nullptr;
std::vector<IAppSystem*> g_booted;

void* FindBuiltin(std::string_view name) {
	if (name == CVAR_INTERFACE_VERSION) {
		return g_pCVar;
	}
	if (name == SCHEMASYSTEM_INTERFACE_VERSION) {
		return g_pSchemaSystem;
	}
	if (name == APPLICATION_INTERFACE_VERSION) {
		return StubApplication();
	}
	if (name == VSCRIPT_INTERFACE_VERSION) {
		return schema::RecordingScriptManager();
	}
	return nullptr;
}

void* FindProvided(const char* name) {
	if (const auto it = std::ranges::find(g_provided, std::string_view(name), &ProvidedSystem::name); it != g_provided.end()) {
		return it->system;
	}
	if (g_deviceFactory) {
		if (void* iface = g_deviceFactory(name, nullptr)) {
			return iface;
		}
	}
	// Secondary interfaces (ResourceHandleUtils001, MeshUtils001, NetworkMessagesVersion001, ...) are only
	// reachable through their owner's QueryInterface.
	for (const ProvidedSystem& provided : g_provided) {
		if (void* iface = provided.system->QueryInterface(name)) {
			return iface;
		}
	}
	return nullptr;
}

void* Answer(void* iface, int* returnCode, bool found) {
	if (returnCode) {
		*returnCode = found ? IFACE_OK : IFACE_FAILED;
	}
	return iface;
}

}

void AddModuleFactories(const schema::ModuleMap& mods) {
	for (const auto& gm : mods | std::views::values) {
		if (gm->func) {
			g_moduleFactories.push_back(gm->func);
		}
	}
}

IAppSystem* FindInModules(const char* name) {
	for (const CreateInterfaceFn create : g_moduleFactories) {
		int rc = 0;
		if (auto* iface = static_cast<IAppSystem*>(create(name, &rc))) {
			return iface;
		}
	}
	return nullptr;
}

void Provide(std::string_view name, IAppSystem* system) {
	g_provided.push_back({ .name = name, .system = system });
}

void ProvideDeviceFactory(CreateInterfaceFn factory) {
	g_deviceFactory = factory;
}

void* GroupFactory(const char* name, int* returnCode) {
	void* iface = FindBuiltin(name);
	if (!iface) {
		iface = FindProvided(name);
	}
	return Answer(iface, returnCode, iface != nullptr);
}

void* NetworkFactory(const char* name, int* returnCode) {
	void* iface = std::string_view(name) == VSCRIPT_INTERFACE_VERSION ? schema::RecordingScriptManager() : FindInModules(name);
	if (!iface) {
		iface = StubApplication();
	}
	return Answer(iface, returnCode, true);
}

void BootSystem(IAppSystem* system, std::string_view label, CreateInterfaceFn factory, bool init) {
	system->Connect(factory);
	if (init) {
		std::println(stderr, "[boot] {:<28} Init={}", label, static_cast<int>(system->Init()));
	} else {
		std::println(stderr, "[boot] {:<28} connected", label);
	}
	g_booted.push_back(system);
}

void ReconnectAll(const char* iface) {
	for (IAppSystem* system : g_booted) {
		system->Reconnect(&GroupFactory, iface);
	}
}

void DisconnectAll() {
	for (IAppSystem* system : g_booted | std::views::reverse) {
		system->Disconnect();
	}
	g_booted.clear();
}

}
