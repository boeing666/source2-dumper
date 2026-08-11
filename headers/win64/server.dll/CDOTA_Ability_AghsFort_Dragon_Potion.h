#pragma once

class CDOTA_Ability_AghsFort_Dragon_Potion : public CDOTA_Item /*0x0*/  // sizeof 0x678, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x658]; // offset 0x0
    int32 bonus_movement_speed; // offset 0x658, size 0x4, align 4
    int32 bonus_attack_damage; // offset 0x65C, size 0x4, align 4
    int32 bonus_attack_range; // offset 0x660, size 0x4, align 4
    int32 magic_resistance; // offset 0x664, size 0x4, align 4
    int32 model_scale; // offset 0x668, size 0x4, align 4
    int32 skin_number; // offset 0x66C, size 0x4, align 4
    bool flying_movement; // offset 0x670, size 0x1, align 1
    char _pad_0671[0x7]; // offset 0x671
};
