#pragma once

class CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 movement_speed; // offset 0x1AF8, size 0x4, align 4
    int32 min_movespeed_bonus_pct; // offset 0x1AFC, size 0x4, align 4
    float32 out_of_world_time; // offset 0x1B00, size 0x4, align 4
    float32 linger_time_min; // offset 0x1B04, size 0x4, align 4
    float32 linger_time_max; // offset 0x1B08, size 0x4, align 4
    float32 charge_for_max_linger; // offset 0x1B0C, size 0x4, align 4
    float32 windup_time; // offset 0x1B10, size 0x4, align 4
    float32 m_flCurrentMovespeedBonus; // offset 0x1B14, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1B18, size 0x4, align 4
    bool m_bGestureStarted; // offset 0x1B1C, size 0x1, align 1
    char _pad_1B1D[0x3]; // offset 0x1B1D
};
