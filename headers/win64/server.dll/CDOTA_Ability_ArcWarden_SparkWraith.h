#pragma once

class CDOTA_Ability_ArcWarden_SparkWraith : public CDOTABaseAbility /*0x0*/  // sizeof 0x598, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 duration; // offset 0x580, size 0x4, align 4
    float32 activation_delay; // offset 0x584, size 0x4, align 4
    float32 wraith_vision_duration; // offset 0x588, size 0x4, align 4
    float32 wraith_vision_radius; // offset 0x58C, size 0x4, align 4
    float32 spark_damage; // offset 0x590, size 0x4, align 4
    int32 creep_damage_bonus_pct; // offset 0x594, size 0x4, align 4
};
