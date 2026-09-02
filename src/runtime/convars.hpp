#pragma once

#include <vector>

#include "core/game_module.hpp"
#include "runtime/convar_model.hpp"

namespace schema {

void CollectConVars(std::vector<ConVarInfo>& convars, std::vector<ConCommandInfo>& concommands);

}
