#pragma once

class CDOTA_Ability_Centaur_Stampede : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 duration; // offset 0x580, size 0x4, align 4
    int32 base_damage; // offset 0x584, size 0x4, align 4
    float32 strength_damage; // offset 0x588, size 0x4, align 4
    float32 slow_duration; // offset 0x58C, size 0x4, align 4
    float32 scepter_bonus_duration; // offset 0x590, size 0x4, align 4
    char _pad_0594[0x4]; // offset 0x594
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x598, size 0x18, align 8
    int32 m_nHeroesHit; // offset 0x5B0, size 0x4, align 4
    bool m_bHitInvisibleHero; // offset 0x5B4, size 0x1, align 1
    char _pad_05B5[0x3]; // offset 0x5B5
};
