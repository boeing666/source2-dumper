#pragma once

class CDOTA_Modifier_Furion_Money_Tree : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 gold_per_bag; // offset 0x1AA8, size 0x4, align 4
    float32 tick_interval; // offset 0x1AAC, size 0x4, align 4
    float32 tree_duration; // offset 0x1AB0, size 0x4, align 4
    int32 min_throw_range; // offset 0x1AB4, size 0x4, align 4
    int32 max_throw_range; // offset 0x1AB8, size 0x4, align 4
    float32 gold_bag_duration; // offset 0x1ABC, size 0x4, align 4
    int32 bags_per_tick; // offset 0x1AC0, size 0x4, align 4
    float32 hero_level_gold_multiplier; // offset 0x1AC4, size 0x4, align 4
};
