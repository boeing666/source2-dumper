#pragma once

class CDOTA_Modifier_Furion_Money_Tree : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (server)
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
    CHandle< CDOTA_TempTree > m_hTree; // offset 0x1AC8, size 0x4, align 4
    int32 nTargetHeroLevel; // offset 0x1ACC, size 0x4, align 4
    bool m_bInitialized; // offset 0x1AD0, size 0x1, align 1
    char _pad_1AD1[0x3]; // offset 0x1AD1
    CHandle< CBaseEntity > m_hObstruction; // offset 0x1AD4, size 0x4, align 4
    GameTime_t m_timeLastGoldBagSpawn; // offset 0x1AD8, size 0x4, align 255
    char _pad_1ADC[0x4]; // offset 0x1ADC
};
