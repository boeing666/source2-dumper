#pragma once

#include <string>
#include <unordered_set>
#include <vector>

#include <dynlibutils/module.hpp>

namespace schema {

// Networked field keys, each "Class::field", from the network codegen database the game builds during
// the AppSystem bootstrap (see appsystem.cpp / ConnectAndBuildNetworkDatabase). win64 only; returns
// empty elsewhere (the bootstrap is a no-op there).
std::unordered_set<std::string> CollectNetworkFields(std::vector<DynLibUtils::CModule>& mods);

} // namespace schema
