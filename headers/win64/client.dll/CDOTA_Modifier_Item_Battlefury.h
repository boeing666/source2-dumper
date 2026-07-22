#pragma once

class CDOTA_Modifier_Item_Battlefury : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_damage; // offset 0x1A58, size 0x4, align 4
    float32 bonus_health_regen; // offset 0x1A5C, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1A60, size 0x4, align 4
    int32 cleave_damage_percent; // offset 0x1A64, size 0x4, align 4
    int32 cleave_damage_percent_creep; // offset 0x1A68, size 0x4, align 4
    float32 cleave_starting_width; // offset 0x1A6C, size 0x4, align 4
    float32 cleave_ending_width; // offset 0x1A70, size 0x4, align 4
    float32 cleave_distance; // offset 0x1A74, size 0x4, align 4
    int32 upgraded_cleave_bonus; // offset 0x1A78, size 0x4, align 4
    int32 upgraded_damage_bonus; // offset 0x1A7C, size 0x4, align 4
    int32 quelling_bonus; // offset 0x1A80, size 0x4, align 4
    int32 quelling_bonus_ranged; // offset 0x1A84, size 0x4, align 4
};
