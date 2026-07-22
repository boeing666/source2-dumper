#pragma once

class CDOTA_Ability_AghsFort_Dragon_Potion : public C_DOTA_Item /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x8CC]; // offset 0x0
    int32 bonus_movement_speed; // offset 0x8CC, size 0x4, align 4
    int32 bonus_attack_damage; // offset 0x8D0, size 0x4, align 4
    int32 bonus_attack_range; // offset 0x8D4, size 0x4, align 4
    int32 magic_resistance; // offset 0x8D8, size 0x4, align 4
    int32 model_scale; // offset 0x8DC, size 0x4, align 4
    int32 skin_number; // offset 0x8E0, size 0x4, align 4
    bool flying_movement; // offset 0x8E4, size 0x1, align 1
    char _pad_08E5[0x3]; // offset 0x8E5
};
