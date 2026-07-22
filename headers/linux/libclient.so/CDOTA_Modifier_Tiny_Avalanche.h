#pragma once

class CDOTA_Modifier_Tiny_Avalanche : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CUtlVector< C_DOTA_BaseNPC* > m_pHeroesHit; // offset 0x1A58, size 0x18, align 8
    float32 radius; // offset 0x1A70, size 0x4, align 4
    float32 total_duration; // offset 0x1A74, size 0x4, align 4
    float32 stun_duration; // offset 0x1A78, size 0x4, align 4
    int32 tick_count; // offset 0x1A7C, size 0x4, align 4
    int32 toss_damage_bonus_pct; // offset 0x1A80, size 0x4, align 4
    int32 m_damage; // offset 0x1A84, size 0x4, align 4
    int32 m_nTicks; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
