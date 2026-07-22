#pragma once

class CDOTA_Modifier_ShadowShaman_Shackles : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    ParticleIndex_t nShackleFXIndex; // offset 0x1A58, size 0x4, align 255
    float32 tick_interval; // offset 0x1A5C, size 0x4, align 4
    float32 total_damage; // offset 0x1A60, size 0x4, align 4
    float32 channel_time; // offset 0x1A64, size 0x4, align 4
    float32 heal_percentage; // offset 0x1A68, size 0x4, align 4
    bool bApplyHeal; // offset 0x1A6C, size 0x1, align 1
    char _pad_1A6D[0x3]; // offset 0x1A6D
    float32 scepter_shock_pct; // offset 0x1A70, size 0x4, align 4
    float32 scepter_shock_radius; // offset 0x1A74, size 0x4, align 4
    float32 scepter_shock_interval; // offset 0x1A78, size 0x4, align 4
    float32 ally_break_range; // offset 0x1A7C, size 0x4, align 4
    char _pad_1A80[0x18]; // offset 0x1A80
};
