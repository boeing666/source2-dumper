#pragma once

class CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 movement_speed; // offset 0x1A78, size 0x4, align 4
    int32 min_movespeed_bonus_pct; // offset 0x1A7C, size 0x4, align 4
    float32 out_of_world_time; // offset 0x1A80, size 0x4, align 4
    float32 linger_time_min; // offset 0x1A84, size 0x4, align 4
    float32 linger_time_max; // offset 0x1A88, size 0x4, align 4
    float32 charge_for_max_linger; // offset 0x1A8C, size 0x4, align 4
    float32 windup_time; // offset 0x1A90, size 0x4, align 4
    float32 m_flCurrentMovespeedBonus; // offset 0x1A94, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A98, size 0x4, align 4
    bool m_bGestureStarted; // offset 0x1A9C, size 0x1, align 1
    char _pad_1A9D[0x3]; // offset 0x1A9D
};
