#pragma once

#include <string_view>

#include "core/game_module.hpp"

class IAppSystem;

namespace boot {

using CreateInterfaceFn = schema::CreateInterfaceFn;

// The part of CAppSystemGroup the engine would provide: interface lookup for Connect, and the list of
// booted systems for reconnect and teardown.

// Every loaded module's CreateInterface, searched in load order.
void AddModuleFactories(const schema::ModuleMap& mods);
[[nodiscard]] IAppSystem* FindInModules(const char* name);

// Systems GroupFactory hands out by interface name (the name must outlive the boot, e.g. a literal).
void Provide(std::string_view name, IAppSystem* system);
// The factory IRenderDeviceMgr::CreateDevice returned (RenderDevice003, RenderHardwareConfig002, ...).
void ProvideDeviceFactory(CreateInterfaceFn factory);

// Connect factory of the boot: cvar / schema / application / vscript, then provided systems, the render
// device, and finally each provided system's QueryInterface. nullptr on a miss.
void* GroupFactory(const char* name, int* returnCode);
// Connect factory for Source2Server (network database): any loaded module, the stub application on a
// miss — the server dereferences whatever it gets back.
void* NetworkFactory(const char* name, int* returnCode);

// Connects (and, with init, initialises) a system and remembers it for ReconnectAll / DisconnectAll.
void BootSystem(IAppSystem* system, std::string_view label, CreateInterfaceFn factory, bool init);
void ReconnectAll(const char* iface);
void DisconnectAll();

}
