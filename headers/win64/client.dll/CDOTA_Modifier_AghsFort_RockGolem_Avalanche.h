#pragma once

class CDOTA_Modifier_AghsFort_RockGolem_Avalanche : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CUtlVector< C_DOTA_BaseNPC* > m_pHeroesHit; // offset 0x1AA8, size 0x18, align 8
    int32 radius; // offset 0x1AC0, size 0x4, align 4
    float32 total_duration; // offset 0x1AC4, size 0x4, align 4
    float32 stun_duration; // offset 0x1AC8, size 0x4, align 4
    int32 tick_count; // offset 0x1ACC, size 0x4, align 4
    int32 m_damage; // offset 0x1AD0, size 0x4, align 4
    int32 m_nTicks; // offset 0x1AD4, size 0x4, align 4
};
