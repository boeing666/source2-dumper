#pragma once

class CDOTA_Modifier_Techies_SnareTrap_Slowed : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 damage; // offset 0x1A78, size 0x4, align 4
    float32 damage_interval; // offset 0x1A7C, size 0x4, align 4
    float32 move_slow_pct; // offset 0x1A80, size 0x4, align 4
    float32 cast_slow_pct; // offset 0x1A84, size 0x4, align 4
    float32 effect_radius; // offset 0x1A88, size 0x4, align 4
    bool m_bEscaped; // offset 0x1A8C, size 0x1, align 1
    char _pad_1A8D[0x3]; // offset 0x1A8D
    VectorWS vTetherOrigin; // offset 0x1A90, size 0xC, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
