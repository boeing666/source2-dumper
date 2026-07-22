#pragma once

class CCitadelCatapultTrigger : public C_BaseTrigger /*0x0*/  // sizeof 0xA98, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xA7C]; // offset 0x0
    Vector m_vLaunchTarget; // offset 0xA7C, size 0xC, align 4 | MNetworkEnable
    float32 m_flLaunchSpeed; // offset 0xA88, size 0x4, align 4 | MNetworkEnable
    char _pad_0A8C[0x4]; // offset 0xA8C
    CUtlSymbolLarge m_nameTarget; // offset 0xA90, size 0x8, align 8
};
