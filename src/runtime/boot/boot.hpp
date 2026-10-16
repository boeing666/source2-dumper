#pragma once

#include "core/game_module.hpp"

class CNetworkSerializerCodeGenDatabase;

namespace boot {

// Boots the engine offline: Source2Server Connect (builds the network codegen database), cvar, schema
// system, the base app systems, then the curated module systems so every DLL registers its console
// entries. Returns the server's network database, null when server/tier0 are missing (nothing booted).
[[nodiscard]] CNetworkSerializerCodeGenDatabase* BootAppSystems(const schema::ModuleMap& mods);

// Shuts the module systems down, then disconnects everything in reverse boot order.
void ShutdownAppSystems();

}
