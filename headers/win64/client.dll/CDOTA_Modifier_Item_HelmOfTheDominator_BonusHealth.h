#pragma once

class CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 health_min; // offset 0x1A58, size 0x4, align 4
    int32 new_max; // offset 0x1A5C, size 0x4, align 4
    int32 health_bonus; // offset 0x1A60, size 0x4, align 4
    int32 model_scale; // offset 0x1A64, size 0x4, align 4
    int32 creep_bonus_damage; // offset 0x1A68, size 0x4, align 4
    int32 creep_bonus_hp_regen; // offset 0x1A6C, size 0x4, align 4
    int32 creep_bonus_mp_regen; // offset 0x1A70, size 0x4, align 4
    int32 creep_bonus_armor; // offset 0x1A74, size 0x4, align 4
    float32 creep_damage_taken_cooldown; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
};
