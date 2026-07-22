#pragma once

struct AbilityResource_t  // sizeof 0x20, align 0xFF [vtable trivial_dtor] (client) {MNetworkVarNames MNetworkVarNames}
{
    char _pad_0000[0x8]; // offset 0x0
    float32 m_flCurrentValue; // offset 0x8, size 0x4, align 4
    float32 m_flPrevRegenRate; // offset 0xC, size 0x4, align 4
    float32 m_flMaxValue; // offset 0x10, size 0x4, align 4
    GameTime_t m_flLatchTime; // offset 0x14, size 0x4, align 255 | MNetworkEnable
    float32 m_flLatchValue; // offset 0x18, size 0x4, align 4 | MNetworkEnable
    char _pad_001C[0x4]; // offset 0x1C
};
