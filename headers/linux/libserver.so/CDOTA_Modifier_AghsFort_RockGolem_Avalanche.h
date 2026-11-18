#pragma once

class CDOTA_Modifier_AghsFort_RockGolem_Avalanche : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CUtlVector< CDOTA_BaseNPC* > m_pHeroesHit; // offset 0x1AF8, size 0x18, align 8
    int32 radius; // offset 0x1B10, size 0x4, align 4
    float32 total_duration; // offset 0x1B14, size 0x4, align 4
    float32 stun_duration; // offset 0x1B18, size 0x4, align 4
    int32 tick_count; // offset 0x1B1C, size 0x4, align 4
    int32 m_damage; // offset 0x1B20, size 0x4, align 4
    int32 m_nTicks; // offset 0x1B24, size 0x4, align 4
    char _pad_1B28[0x18]; // offset 0x1B28
};
