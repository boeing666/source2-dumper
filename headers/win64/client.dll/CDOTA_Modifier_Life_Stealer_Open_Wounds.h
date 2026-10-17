#pragma once

class CDOTA_Modifier_Life_Stealer_Open_Wounds : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32[8] slow_steps; // offset 0x1AA8, size 0x20, align 4
    int32 heal_percent; // offset 0x1AC8, size 0x4, align 4
    int32 m_nDamageTracker; // offset 0x1ACC, size 0x4, align 4
    int32 damage_threshold; // offset 0x1AD0, size 0x4, align 4
    float32 spread_radius; // offset 0x1AD4, size 0x4, align 4
    int32 max_health_as_damage_pct; // offset 0x1AD8, size 0x4, align 4
    int32 attack_speed_on_target; // offset 0x1ADC, size 0x4, align 4
};
