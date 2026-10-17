#pragma once

class CDOTA_Modifier_Techies_SnareTrap_Slowed : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AAC]; // offset 0x0
    float32 damage; // offset 0x1AAC, size 0x4, align 4
    float32 damage_interval; // offset 0x1AB0, size 0x4, align 4
    float32 move_slow_pct; // offset 0x1AB4, size 0x4, align 4
    float32 cast_slow_pct; // offset 0x1AB8, size 0x4, align 4
    float32 effect_radius; // offset 0x1ABC, size 0x4, align 4
    bool m_bEscaped; // offset 0x1AC0, size 0x1, align 1
    char _pad_1AC1[0x3]; // offset 0x1AC1
    VectorWS vTetherOrigin; // offset 0x1AC4, size 0xC, align 4
};
