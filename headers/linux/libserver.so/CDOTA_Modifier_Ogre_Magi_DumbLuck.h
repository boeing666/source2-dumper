#pragma once

class CDOTA_Modifier_Ogre_Magi_DumbLuck : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 mana_per_str; // offset 0x1AF8, size 0x4, align 4
    float32 mana_regen_per_str; // offset 0x1AFC, size 0x4, align 4
    float32 bonus_strength; // offset 0x1B00, size 0x4, align 4
    float32 bonus_strength_gain; // offset 0x1B04, size 0x4, align 4
    int32 level_one_ability_points; // offset 0x1B08, size 0x4, align 4
    int32 level_two_ability_points; // offset 0x1B0C, size 0x4, align 4
    int32 required_level_reduction; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
};
