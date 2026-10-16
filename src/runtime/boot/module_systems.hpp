#pragma once

#include <span>
#include <vector>

#include "core/game_module.hpp"

class IAppSystem;

namespace boot {

// One app system of an engine DLL whose Connect/Init runs that DLL's ConVar_Register.
struct ModuleSystem {
	const char* module;
	const char* iface;
	bool provide = true; // GroupFactory hands it out by iface
};

struct ResolvedModuleSystem {
	const ModuleSystem* entry;
	IAppSystem* system;
};

// Resolves the curated module systems and provides them up front (CAppSystemGroup::AddSystem), so every
// later Connect — the base systems' too — can reach them.
[[nodiscard]] std::vector<ResolvedModuleSystem> RegisterModuleSystems(const schema::ModuleMap& mods);

// Connects and initialises them in order; creates the render device after its manager.
void BootModuleSystems(std::span<const ResolvedModuleSystem> systems);

// Their worker threads (async filesystem, audio) must be stopped through Shutdown, or the DLLs' static
// destructors block at exit (Linux: pthread_cond_destroy on a condvar the threads still wait on).
void ShutdownModuleSystems();

}
