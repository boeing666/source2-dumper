#pragma once

#include "core/game_module.hpp"
#include "runtime/vscript_model.hpp"

class IScriptManager;

namespace schema {

// Script manager handed to the server for VSCRIPT_INTERFACE_VERSION; its VM records what the game registers.
IScriptManager* RecordingScriptManager();

// Starts the game's VScript game system against the recording VM and returns the native script API.
ScriptApi CollectScriptApi(const ModuleMap& mods);

}
