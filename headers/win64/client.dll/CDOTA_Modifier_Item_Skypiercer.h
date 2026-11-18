#pragma once

class CDOTA_Modifier_Item_Skypiercer : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_strength; // offset 0x1AF8, size 0x4, align 4
    float32 bonus_armor; // offset 0x1AFC, size 0x4, align 4
    float32 bonus_health_regen; // offset 0x1B00, size 0x4, align 4
    int32 hp_regen_amp; // offset 0x1B04, size 0x4, align 4
    int32 slow_resistance; // offset 0x1B08, size 0x4, align 4
    float32 bonus_evasion; // offset 0x1B0C, size 0x4, align 4
    float32 buff_cooldown_acceleration_pct; // offset 0x1B10, size 0x4, align 4
    float32 close_radius; // offset 0x1B14, size 0x4, align 4
    bool m_bEnemyClose; // offset 0x1B18, size 0x1, align 1
    char _pad_1B19[0x3]; // offset 0x1B19
    float32 m_flInterval; // offset 0x1B1C, size 0x4, align 4
};
