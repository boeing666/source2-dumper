#pragma once

class CDOTA_Modifier_Furion_Money_Tree : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
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
    CHandle< CDOTA_TempTree > m_hTree; // offset 0x1A98, size 0x4, align 4
    int32 nTargetHeroLevel; // offset 0x1A9C, size 0x4, align 4
    bool m_bInitialized; // offset 0x1AA0, size 0x1, align 1
    char _pad_1AA1[0x3]; // offset 0x1AA1
    CHandle< CBaseEntity > m_hObstruction; // offset 0x1AA4, size 0x4, align 4
    GameTime_t m_timeLastGoldBagSpawn; // offset 0x1AA8, size 0x4, align 255
    char _pad_1AAC[0x4]; // offset 0x1AAC
};
