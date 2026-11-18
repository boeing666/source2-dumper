#pragma once

class CDOTA_Modifier_Furion_Money_Tree : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 gold_per_bag; // offset 0x1AF8, size 0x4, align 4
    float32 tick_interval; // offset 0x1AFC, size 0x4, align 4
    float32 tree_duration; // offset 0x1B00, size 0x4, align 4
    int32 min_throw_range; // offset 0x1B04, size 0x4, align 4
    int32 max_throw_range; // offset 0x1B08, size 0x4, align 4
    float32 gold_bag_duration; // offset 0x1B0C, size 0x4, align 4
    int32 bags_per_tick; // offset 0x1B10, size 0x4, align 4
    float32 hero_level_gold_multiplier; // offset 0x1B14, size 0x4, align 4
};
