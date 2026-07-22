#pragma once

struct ScalingPowerupDefinition_t  // sizeof 0x18, align 0x8 [vtable trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    EModifierValue m_eModifierValue; // offset 0x8, size 0x4, align 4
    float32 m_valueMin; // offset 0xC, size 0x4, align 4
    float32 m_valueMax; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
};
