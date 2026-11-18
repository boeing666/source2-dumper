#pragma once

class CDOTA_Modifier_ShadowShaman_Shackles : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    ParticleIndex_t nShackleFXIndex; // offset 0x1AF8, size 0x4, align 255
    float32 tick_interval; // offset 0x1AFC, size 0x4, align 4
    float32 total_damage; // offset 0x1B00, size 0x4, align 4
    float32 channel_time; // offset 0x1B04, size 0x4, align 4
    float32 heal_percentage; // offset 0x1B08, size 0x4, align 4
    bool bApplyHeal; // offset 0x1B0C, size 0x1, align 1
    char _pad_1B0D[0x3]; // offset 0x1B0D
    float32 scepter_shock_pct; // offset 0x1B10, size 0x4, align 4
    float32 scepter_shock_radius; // offset 0x1B14, size 0x4, align 4
    float32 scepter_shock_interval; // offset 0x1B18, size 0x4, align 4
    float32 ally_break_range; // offset 0x1B1C, size 0x4, align 4
    char _pad_1B20[0x18]; // offset 0x1B20
};
