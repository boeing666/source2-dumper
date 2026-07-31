#pragma once

class CDOTA_Modifier_Furion_Money_Tree : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 gold_per_bag; // offset 0x1A78, size 0x4, align 4
    float32 tick_interval; // offset 0x1A7C, size 0x4, align 4
    float32 tree_duration; // offset 0x1A80, size 0x4, align 4
    int32 min_throw_range; // offset 0x1A84, size 0x4, align 4
    int32 max_throw_range; // offset 0x1A88, size 0x4, align 4
    float32 gold_bag_duration; // offset 0x1A8C, size 0x4, align 4
    int32 bags_per_tick; // offset 0x1A90, size 0x4, align 4
    float32 hero_level_gold_multiplier; // offset 0x1A94, size 0x4, align 4
};
