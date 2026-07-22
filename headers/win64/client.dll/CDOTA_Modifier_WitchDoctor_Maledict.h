#pragma once

class CDOTA_Modifier_WitchDoctor_Maledict : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 m_iStartHealth; // offset 0x1A58, size 0x4, align 4
    float32 bonus_damage; // offset 0x1A5C, size 0x4, align 4
    float32 bonus_damage_threshold; // offset 0x1A60, size 0x4, align 4
    int32 ticks; // offset 0x1A64, size 0x4, align 4
    int32 iCurrentTick; // offset 0x1A68, size 0x4, align 4
    int32 health_restoration_reduction; // offset 0x1A6C, size 0x4, align 4
    float32 spread_radius; // offset 0x1A70, size 0x4, align 4
    float32 spread_pct; // offset 0x1A74, size 0x4, align 4
    char _pad_1A78[0x18]; // offset 0x1A78
};
