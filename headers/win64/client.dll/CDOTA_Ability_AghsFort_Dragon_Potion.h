#pragma once

class CDOTA_Ability_AghsFort_Dragon_Potion : public C_DOTA_Item /*0x0*/  // sizeof 0x778, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x758]; // offset 0x0
    int32 bonus_movement_speed; // offset 0x758, size 0x4, align 4
    int32 bonus_attack_damage; // offset 0x75C, size 0x4, align 4
    int32 bonus_attack_range; // offset 0x760, size 0x4, align 4
    int32 magic_resistance; // offset 0x764, size 0x4, align 4
    int32 model_scale; // offset 0x768, size 0x4, align 4
    int32 skin_number; // offset 0x76C, size 0x4, align 4
    bool flying_movement; // offset 0x770, size 0x1, align 1
    char _pad_0771[0x7]; // offset 0x771
};
