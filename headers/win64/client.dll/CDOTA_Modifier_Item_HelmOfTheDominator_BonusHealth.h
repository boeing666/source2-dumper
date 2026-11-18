#pragma once

class CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 health_min; // offset 0x1AF8, size 0x4, align 4
    int32 new_max; // offset 0x1AFC, size 0x4, align 4
    int32 health_bonus; // offset 0x1B00, size 0x4, align 4
    int32 model_scale; // offset 0x1B04, size 0x4, align 4
    int32 creep_bonus_damage; // offset 0x1B08, size 0x4, align 4
    int32 creep_bonus_hp_regen; // offset 0x1B0C, size 0x4, align 4
    int32 creep_bonus_mp_regen; // offset 0x1B10, size 0x4, align 4
    int32 creep_bonus_armor; // offset 0x1B14, size 0x4, align 4
    float32 creep_damage_taken_cooldown; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
