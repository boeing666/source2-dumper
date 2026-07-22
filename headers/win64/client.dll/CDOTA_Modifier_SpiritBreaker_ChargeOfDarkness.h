#pragma once

class CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 movement_speed; // offset 0x1A58, size 0x4, align 4
    int32 min_movespeed_bonus_pct; // offset 0x1A5C, size 0x4, align 4
    float32 out_of_world_time; // offset 0x1A60, size 0x4, align 4
    float32 linger_time_min; // offset 0x1A64, size 0x4, align 4
    float32 linger_time_max; // offset 0x1A68, size 0x4, align 4
    float32 charge_for_max_linger; // offset 0x1A6C, size 0x4, align 4
    float32 windup_time; // offset 0x1A70, size 0x4, align 4
    float32 m_flCurrentMovespeedBonus; // offset 0x1A74, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A78, size 0x4, align 4
    bool m_bGestureStarted; // offset 0x1A7C, size 0x1, align 1
    char _pad_1A7D[0x3]; // offset 0x1A7D
};
