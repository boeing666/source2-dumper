#pragma once

class CDOTA_Modifier_Ogre_Magi_DumbLuck : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 mana_per_str; // offset 0x1A58, size 0x4, align 4
    float32 mana_regen_per_str; // offset 0x1A5C, size 0x4, align 4
    float32 bonus_strength; // offset 0x1A60, size 0x4, align 4
    float32 bonus_strength_gain; // offset 0x1A64, size 0x4, align 4
    int32 level_one_ability_points; // offset 0x1A68, size 0x4, align 4
    int32 level_two_ability_points; // offset 0x1A6C, size 0x4, align 4
    int32 required_level_reduction; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0x4]; // offset 0x1A74
};
