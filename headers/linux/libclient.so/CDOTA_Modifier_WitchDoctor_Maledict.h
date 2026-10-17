#pragma once

class CDOTA_Modifier_WitchDoctor_Maledict : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 m_iStartHealth; // offset 0x1AA8, size 0x4, align 4
    float32 bonus_damage; // offset 0x1AAC, size 0x4, align 4
    float32 bonus_damage_threshold; // offset 0x1AB0, size 0x4, align 4
    int32 ticks; // offset 0x1AB4, size 0x4, align 4
    int32 iCurrentTick; // offset 0x1AB8, size 0x4, align 4
    int32 health_restoration_reduction; // offset 0x1ABC, size 0x4, align 4
    float32 spread_radius; // offset 0x1AC0, size 0x4, align 4
    float32 spread_pct; // offset 0x1AC4, size 0x4, align 4
    char _pad_1AC8[0x18]; // offset 0x1AC8
};
