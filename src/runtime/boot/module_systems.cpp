#include "runtime/boot/module_systems.hpp"
#include "runtime/boot/app_system_group.hpp"

#include <cstdio>
#include <format>
#include <print>
#include <ranges>
#include <string_view>

#include <dynlibutils/virtual.hpp>
#include "core/sdk.hpp"

namespace boot {

namespace {

// Every engine DLL links tier0_perproject: its static ConVars/ConCommands reach ICvar only when the
// DLL's own ConVar_Register runs, from Connect (materialsystem2, soundsystem) or Init (the rest) of one
// of its app systems. Listed in tier / GetDependencies() order, each Connect+Init back to back so later
// systems connect against initialised dependencies. Only one RenderDeviceMgr001 is provided: it also
// creates the device.
//
// Not booted (cannot Init offline):
// - rendersystemvulkan: its r_renderdoc_capture_window_vulkan is not FCVAR_LINKED_CONCOMMAND, so it
//   collides with rendersystemempty/dx11 -> Plat_FatalError (the engine only ever loads one backend).
// - assetpreview: AssetPreviewSystem_001::Init derefs g_pAssetSystem (assetsystem.dll, not shipped).
// - toolframework2 / helpsystem / propertyeditor: Qt tools; Connect/Init hit a Qt fatal (no
//   QApplication / platform plugin) -> abort or a blocking error message loop.
// Left out on purpose: vconcomm (VConComm001::Init registers 2 concommands but also opens a VConsole
// TCP listener on 0.0.0.0:29000).
constexpr ModuleSystem kModuleSystems[] = {
	{ .module = "tier0",               .iface = "VProcessUtils002" },
	{ .module = "filesystem_stdio",    .iface = "VAsyncFileSystem2_001" },
	{ .module = "localize",            .iface = "Localize_001" },
	{ .module = "imemanager",          .iface = "IMEManager001" },
	{ .module = "inputsystem",         .iface = "InputSystemVersion001" },
	{ .module = "inputsystem",         .iface = "InputStackSystemVersion001" },
	{ .module = "steamaudio",          .iface = "SteamAudio001" },
	{ .module = "soundsystem",         .iface = "SoundSystem001" },
	{ .module = "soundsystem",         .iface = "SoundOpSystem001" },
	{ .module = "vphysics2",           .iface = "VPhysics2_Interface_001" },
	{ .module = "v8system",            .iface = "Source2V8System001" },
	{ .module = "vscript",             .iface = "VScriptManager010" },
	{ .module = "networksystem",       .iface = "NetworkSystemVersion001" },
	{ .module = "rendersystemempty",   .iface = RENDER_DEVICE_MGR_INTERFACE_VERSION },
	{ .module = "rendersystemempty",   .iface = "RenderUtils_001" },
	{ .module = "rendersystemdx11",    .iface = RENDER_DEVICE_MGR_INTERFACE_VERSION, .provide = false },
	// Before materialsystem2: on Linux FontManager_001::Init renders through pango text services, which
	// must already be connected (else its null g_pFullFileSystem faults reading panorama/fonts/fonts.conf).
	{ .module = "panorama_text_pango", .iface = "PanoramaTextServices001" },
	{ .module = "materialsystem2",     .iface = "VMaterialSystem2_001" },
	{ .module = "materialsystem2",     .iface = "FontManager_001" },
	{ .module = "materialsystem2",     .iface = "TextLayout_001" },
	{ .module = "materialsystem2",     .iface = "MaterialUtils_001" },
	{ .module = "materialsystem2",     .iface = "PostProcessingSystem_001" },
	{ .module = "animationsystem",     .iface = "AnimationSystem_001" },
	{ .module = "navsystem",           .iface = "NavSystem001" },
	{ .module = "pulse_system",        .iface = "IPulseSystem_001" },
	{ .module = "meshsystem",          .iface = "MeshSystem001" },
	{ .module = "scenesystem",         .iface = "SceneSystem_002" },
	{ .module = "particles",           .iface = "ParticleSystemMgr003" },
	{ .module = "worldrenderer",       .iface = "WorldRendererMgr001" },
	{ .module = "physicsbuilder",      .iface = "PhysicsBuilderMgr001" },
	{ .module = "scenefilecache",      .iface = "ResponseRulesCache001" },
	{ .module = "scenefilecache",      .iface = "SceneFileCache002" },
	{ .module = "visbuilder",          .iface = "VisBuilder_001" },
	{ .module = "panorama",            .iface = "PanoramaUIEngine001" },
	{ .module = "panoramauiclient",    .iface = "PanoramaUIClient001" },
	{ .module = "resourcecompiler",    .iface = "ResourceCompilerSystem001" }, // Init fails (tools deps missing) after ConVar_Register
};

// IRenderDeviceMgr::CreateDevice(int adapter, int flags, int dxLevel): IAppSystem (0-10) + 7 adapter/mode
// queries. Called by slot because only the main SDK branch declares the interface (dota's lacks it).
constexpr int kCreateDeviceSlot = 18;
constexpr int kDxLevel = 110; // lower is a fatal "Don't support DXLevel < 110"

constexpr const char* kDeviceInterfaces[] = {
	RENDER_DEVICE_INTERFACE_VERSION,
	RENDER_HARDWARECONFIG_INTERFACE_VERSION,
	"VRenderDeviceSetupV001",
};

std::vector<IAppSystem*> g_initialised;

bool IsRenderDeviceManager(const ModuleSystem& entry) {
	return entry.provide && std::string_view(entry.iface) == RENDER_DEVICE_MGR_INTERFACE_VERSION;
}

// What the engine does right after the render backend's Init: create the device, then hand its interfaces
// to the systems that connected before it existed (the backend's own g_pRenderHardwareConfig, ...). The
// empty backend creates no GPU device and no window.
void CreateRenderDevice(IAppSystem* deviceManager) {
	const auto deviceFactory = DynLibUtils::CVirtualTable(deviceManager)
		.CallMethod<CreateInterfaceFn, void*, int, int, int>(kCreateDeviceSlot, deviceManager, 0, 0, kDxLevel);
	ProvideDeviceFactory(deviceFactory);

	for (const char* iface : kDeviceInterfaces) {
		ReconnectAll(iface);
	}
}

}

std::vector<ResolvedModuleSystem> RegisterModuleSystems(const schema::ModuleMap& mods) {
	std::vector<ResolvedModuleSystem> resolved;
	for (const ModuleSystem& entry : kModuleSystems) {
		const auto it = mods.find(entry.module);
		auto* system = (it != mods.end() && it->second->func) ? static_cast<IAppSystem*>(it->second->func(entry.iface, nullptr)) : nullptr;
		if (!system) {
			std::println(stderr, "[boot] {:<28} NOT FOUND in {}", entry.iface, entry.module);
			continue;
		}
		if (entry.provide) {
			Provide(entry.iface, system);
		}
		resolved.push_back({ .entry = &entry, .system = system });
	}
	return resolved;
}

void BootModuleSystems(std::span<const ResolvedModuleSystem> systems) {
	for (const auto& [entry, system] : systems) {
		BootSystem(system, std::format("{}:{}", entry->module, entry->iface), &GroupFactory, true);
		g_initialised.push_back(system);
		schema::SnapshotConsoleOwners(g_pCVar, entry->module);

		if (IsRenderDeviceManager(*entry)) {
			CreateRenderDevice(system);
		}
	}
}

void ShutdownModuleSystems() {
	for (IAppSystem* system : g_initialised | std::views::reverse) {
		system->Shutdown();
	}
	g_initialised.clear();
}

}
