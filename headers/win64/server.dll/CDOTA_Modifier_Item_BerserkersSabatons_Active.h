#pragma once

class CDOTA_Modifier_Item_BerserkersSabatons_Active : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 unholy_bonus_damage; // offset 0x1AF8, size 0x4, align 4
    int32 unholy_bonus_strength; // offset 0x1AFC, size 0x4, align 4
    int32 unholy_bonus_armor; // offset 0x1B00, size 0x4, align 4
    int32 unholy_bonus_slow_resistance; // offset 0x1B04, size 0x4, align 4
    int32 unholy_health_drain_per_second; // offset 0x1B08, size 0x4, align 4
    float32 unholy_health_drain_pct_per_second; // offset 0x1B0C, size 0x4, align 4
    int32 phase_movement_speed; // offset 0x1B10, size 0x4, align 4
    int32 phase_movement_speed_range; // offset 0x1B14, size 0x4, align 4
    int32 m_nStrengthTicks; // offset 0x1B18, size 0x4, align 4
    float32 m_flTickInterval; // offset 0x1B1C, size 0x4, align 4
};
