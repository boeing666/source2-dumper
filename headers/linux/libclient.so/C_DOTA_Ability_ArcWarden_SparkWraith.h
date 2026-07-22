#pragma once

class C_DOTA_Ability_ArcWarden_SparkWraith : public C_DOTABaseAbility /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 duration; // offset 0x824, size 0x4, align 4
    float32 activation_delay; // offset 0x828, size 0x4, align 4
    float32 wraith_vision_duration; // offset 0x82C, size 0x4, align 4
    float32 wraith_vision_radius; // offset 0x830, size 0x4, align 4
    float32 spark_damage; // offset 0x834, size 0x4, align 4
    int32 creep_damage_bonus_pct; // offset 0x838, size 0x4, align 4
    char _pad_083C[0x4]; // offset 0x83C
};
