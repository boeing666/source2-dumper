#pragma once

#include "core/game_module.hpp"

class CNetworkSerializerCodeGenDatabase;
class ICvar;

namespace schema {

ICvar* BootedCvarInterface();

CNetworkSerializerCodeGenDatabase* ConnectAndBuildNetworkDatabase(const ModuleMap& mods);

void ShutdownAppSystems();

}
