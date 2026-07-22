#pragma once

class C_DOTA_Ability_ArcWarden_SparkWraith : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 duration; // offset 0x6A8, size 0x4, align 4
    float32 activation_delay; // offset 0x6AC, size 0x4, align 4
    float32 wraith_vision_duration; // offset 0x6B0, size 0x4, align 4
    float32 wraith_vision_radius; // offset 0x6B4, size 0x4, align 4
    float32 spark_damage; // offset 0x6B8, size 0x4, align 4
    int32 creep_damage_bonus_pct; // offset 0x6BC, size 0x4, align 4
};
