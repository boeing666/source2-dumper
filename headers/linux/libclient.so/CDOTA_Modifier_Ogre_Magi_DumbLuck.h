#pragma once

class CDOTA_Modifier_Ogre_Magi_DumbLuck : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 mana_per_str; // offset 0x1A78, size 0x4, align 4
    float32 mana_regen_per_str; // offset 0x1A7C, size 0x4, align 4
    float32 bonus_strength; // offset 0x1A80, size 0x4, align 4
    float32 bonus_strength_gain; // offset 0x1A84, size 0x4, align 4
    int32 level_one_ability_points; // offset 0x1A88, size 0x4, align 4
    int32 level_two_ability_points; // offset 0x1A8C, size 0x4, align 4
    int32 required_level_reduction; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
};
