#pragma once

class CDOTA_Modifier_Item_Battlefury : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_damage; // offset 0x1AF8, size 0x4, align 4
    float32 bonus_health_regen; // offset 0x1AFC, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1B00, size 0x4, align 4
    int32 cleave_damage_percent; // offset 0x1B04, size 0x4, align 4
    int32 cleave_damage_percent_creep; // offset 0x1B08, size 0x4, align 4
    float32 cleave_starting_width; // offset 0x1B0C, size 0x4, align 4
    float32 cleave_ending_width; // offset 0x1B10, size 0x4, align 4
    float32 cleave_distance; // offset 0x1B14, size 0x4, align 4
    int32 upgraded_cleave_bonus; // offset 0x1B18, size 0x4, align 4
    int32 upgraded_damage_bonus; // offset 0x1B1C, size 0x4, align 4
    int32 quelling_bonus; // offset 0x1B20, size 0x4, align 4
    int32 quelling_bonus_ranged; // offset 0x1B24, size 0x4, align 4
};
