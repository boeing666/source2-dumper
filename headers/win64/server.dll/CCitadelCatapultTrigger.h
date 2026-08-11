#pragma once

class CCitadelCatapultTrigger : public CBaseTrigger /*0x0*/  // sizeof 0x8F8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    Vector m_vLaunchTarget; // offset 0x8E0, size 0xC, align 4 | MNetworkEnable
    float32 m_flLaunchSpeed; // offset 0x8EC, size 0x4, align 4 | MNetworkEnable
    CUtlSymbolLarge m_nameTarget; // offset 0x8F0, size 0x8, align 8
};
