#pragma once

class CDOTA_Ability_AghsFort_Dragon_Potion : public CDOTA_Item /*0x0*/  // sizeof 0x948, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x92C]; // offset 0x0
    int32 bonus_movement_speed; // offset 0x92C, size 0x4, align 4
    int32 bonus_attack_damage; // offset 0x930, size 0x4, align 4
    int32 bonus_attack_range; // offset 0x934, size 0x4, align 4
    int32 magic_resistance; // offset 0x938, size 0x4, align 4
    int32 model_scale; // offset 0x93C, size 0x4, align 4
    int32 skin_number; // offset 0x940, size 0x4, align 4
    bool flying_movement; // offset 0x944, size 0x1, align 1
    char _pad_0945[0x3]; // offset 0x945
};
