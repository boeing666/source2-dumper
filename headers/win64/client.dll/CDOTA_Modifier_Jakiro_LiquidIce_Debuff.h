#pragma once

class CDOTA_Modifier_Jakiro_LiquidIce_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 damage; // offset 0x1A78, size 0x4, align 4
    float32 pct_health_damage; // offset 0x1A7C, size 0x4, align 4
    int32 movement_slow; // offset 0x1A80, size 0x4, align 4
    int32 slow_attack_speed_pct; // offset 0x1A84, size 0x4, align 4
    float32 tick_rate; // offset 0x1A88, size 0x4, align 4
    int32 bonus_instance_damage_from_other_abilities; // offset 0x1A8C, size 0x4, align 4
};
