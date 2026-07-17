#pragma once

#include <vector>

#include "runtime/convar_model.hpp"

namespace schema {

void CollectConVars(std::vector<ConVarInfo>& convars, std::vector<ConCommandInfo>& concommands);

}
