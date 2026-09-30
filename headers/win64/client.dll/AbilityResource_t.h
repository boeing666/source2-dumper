#pragma once

struct AbilityResource_t  // sizeof 0x40, align 0xFF [vtable trivial_dtor] (client)
{
    char _pad_0000[0x8]; // offset 0x0
    float32 m_flCurrentValue; // offset 0x8, size 0x4, align 4
    float32 m_flPrevRegenRate; // offset 0xC, size 0x4, align 4
    float32 m_flMaxValue; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x24]; // offset 0x14
    GameTime_t m_flLatchTime; // offset 0x38, size 0x4, align 255
    float32 m_flLatchValue; // offset 0x3C, size 0x4, align 4
};
