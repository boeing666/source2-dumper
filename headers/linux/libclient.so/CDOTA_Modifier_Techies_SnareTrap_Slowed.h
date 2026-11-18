#pragma once

class CDOTA_Modifier_Techies_SnareTrap_Slowed : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 damage; // offset 0x1AF8, size 0x4, align 4
    float32 damage_interval; // offset 0x1AFC, size 0x4, align 4
    float32 move_slow_pct; // offset 0x1B00, size 0x4, align 4
    float32 cast_slow_pct; // offset 0x1B04, size 0x4, align 4
    float32 effect_radius; // offset 0x1B08, size 0x4, align 4
    bool m_bEscaped; // offset 0x1B0C, size 0x1, align 1
    char _pad_1B0D[0x3]; // offset 0x1B0D
    VectorWS vTetherOrigin; // offset 0x1B10, size 0xC, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
