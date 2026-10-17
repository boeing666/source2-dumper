#pragma once

class CDOTA_Modifier_Item_Battlefury : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_damage; // offset 0x1AA8, size 0x4, align 4
    float32 bonus_health_regen; // offset 0x1AAC, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1AB0, size 0x4, align 4
    int32 cleave_damage_percent; // offset 0x1AB4, size 0x4, align 4
    int32 cleave_damage_percent_creep; // offset 0x1AB8, size 0x4, align 4
    float32 cleave_starting_width; // offset 0x1ABC, size 0x4, align 4
    float32 cleave_ending_width; // offset 0x1AC0, size 0x4, align 4
    float32 cleave_distance; // offset 0x1AC4, size 0x4, align 4
    int32 upgraded_cleave_bonus; // offset 0x1AC8, size 0x4, align 4
    int32 upgraded_damage_bonus; // offset 0x1ACC, size 0x4, align 4
    int32 quelling_bonus; // offset 0x1AD0, size 0x4, align 4
    int32 quelling_bonus_ranged; // offset 0x1AD4, size 0x4, align 4
};
