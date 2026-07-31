#pragma once

class CDOTA_Modifier_Life_Stealer_Open_Wounds : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32[8] slow_steps; // offset 0x1A78, size 0x20, align 4
    int32 heal_percent; // offset 0x1A98, size 0x4, align 4
    int32 m_nDamageTracker; // offset 0x1A9C, size 0x4, align 4
    int32 damage_threshold; // offset 0x1AA0, size 0x4, align 4
    float32 spread_radius; // offset 0x1AA4, size 0x4, align 4
    int32 max_health_as_damage_pct; // offset 0x1AA8, size 0x4, align 4
    int32 attack_speed_on_target; // offset 0x1AAC, size 0x4, align 4
};
