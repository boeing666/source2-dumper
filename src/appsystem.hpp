#pragma once

#include <vector>

#include <dynlibutils/module.hpp>

class CNetworkSerializerCodeGenDatabase;

namespace schema {

// Variant A (SDK-only): drive CSource2Server::Connect through a factory backed by all loaded modules
// (+ no-op stubs for interfaces we can't provide) so the game itself runs ExecuteNetworkInitFuncs and
// builds the network codegen database. Then read it via CEntityInstance::GetSerializerClassInfo()
// (vtable slot 0) -> m_pDatabase. Uses only CreateInterface, DynLibUtils (CVirtualTable /
// GetVirtualTableByName) and SDK types. Returns the database or nullptr.
CNetworkSerializerCodeGenDatabase* ConnectAndBuildNetworkDatabase(std::vector<DynLibUtils::CModule>& mods);

} // namespace schema
