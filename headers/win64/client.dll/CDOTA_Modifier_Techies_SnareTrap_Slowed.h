#pragma once

class CDOTA_Modifier_Techies_SnareTrap_Slowed : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 damage; // offset 0x1A58, size 0x4, align 4
    float32 damage_interval; // offset 0x1A5C, size 0x4, align 4
    float32 move_slow_pct; // offset 0x1A60, size 0x4, align 4
    float32 cast_slow_pct; // offset 0x1A64, size 0x4, align 4
    float32 effect_radius; // offset 0x1A68, size 0x4, align 4
    bool m_bEscaped; // offset 0x1A6C, size 0x1, align 1
    char _pad_1A6D[0x3]; // offset 0x1A6D
    VectorWS vTetherOrigin; // offset 0x1A70, size 0xC, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
};
