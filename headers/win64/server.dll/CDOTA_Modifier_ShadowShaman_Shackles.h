#pragma once

class CDOTA_Modifier_ShadowShaman_Shackles : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    ParticleIndex_t nShackleFXIndex; // offset 0x1A78, size 0x4, align 255
    float32 tick_interval; // offset 0x1A7C, size 0x4, align 4
    float32 total_damage; // offset 0x1A80, size 0x4, align 4
    float32 channel_time; // offset 0x1A84, size 0x4, align 4
    float32 heal_percentage; // offset 0x1A88, size 0x4, align 4
    bool bApplyHeal; // offset 0x1A8C, size 0x1, align 1
    char _pad_1A8D[0x3]; // offset 0x1A8D
    float32 scepter_shock_pct; // offset 0x1A90, size 0x4, align 4
    float32 scepter_shock_radius; // offset 0x1A94, size 0x4, align 4
    float32 scepter_shock_interval; // offset 0x1A98, size 0x4, align 4
    float32 ally_break_range; // offset 0x1A9C, size 0x4, align 4
    GameTime_t m_flNextShockTime; // offset 0x1AA0, size 0x4, align 255
    char _pad_1AA4[0x14]; // offset 0x1AA4
};
