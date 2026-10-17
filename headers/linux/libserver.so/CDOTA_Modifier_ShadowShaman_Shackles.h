#pragma once

class CDOTA_Modifier_ShadowShaman_Shackles : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    ParticleIndex_t nShackleFXIndex; // offset 0x1AA8, size 0x4, align 255
    float32 tick_interval; // offset 0x1AAC, size 0x4, align 4
    float32 total_damage; // offset 0x1AB0, size 0x4, align 4
    float32 channel_time; // offset 0x1AB4, size 0x4, align 4
    float32 heal_percentage; // offset 0x1AB8, size 0x4, align 4
    bool bApplyHeal; // offset 0x1ABC, size 0x1, align 1
    char _pad_1ABD[0x3]; // offset 0x1ABD
    float32 scepter_shock_pct; // offset 0x1AC0, size 0x4, align 4
    float32 scepter_shock_radius; // offset 0x1AC4, size 0x4, align 4
    float32 scepter_shock_interval; // offset 0x1AC8, size 0x4, align 4
    float32 ally_break_range; // offset 0x1ACC, size 0x4, align 4
    GameTime_t m_flNextShockTime; // offset 0x1AD0, size 0x4, align 255
    char _pad_1AD4[0x14]; // offset 0x1AD4
};
