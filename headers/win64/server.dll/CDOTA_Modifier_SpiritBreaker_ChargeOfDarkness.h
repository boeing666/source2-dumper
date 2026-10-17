#pragma once

class CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 movement_speed; // offset 0x1AA8, size 0x4, align 4
    int32 min_movespeed_bonus_pct; // offset 0x1AAC, size 0x4, align 4
    float32 out_of_world_time; // offset 0x1AB0, size 0x4, align 4
    float32 linger_time_min; // offset 0x1AB4, size 0x4, align 4
    float32 linger_time_max; // offset 0x1AB8, size 0x4, align 4
    float32 charge_for_max_linger; // offset 0x1ABC, size 0x4, align 4
    float32 windup_time; // offset 0x1AC0, size 0x4, align 4
    float32 m_flCurrentMovespeedBonus; // offset 0x1AC4, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AC8, size 0x4, align 4
    bool m_bGestureStarted; // offset 0x1ACC, size 0x1, align 1
    char _pad_1ACD[0x3]; // offset 0x1ACD
};
