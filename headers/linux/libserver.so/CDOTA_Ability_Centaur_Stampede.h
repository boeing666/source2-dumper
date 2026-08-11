#pragma once

class CDOTA_Ability_Centaur_Stampede : public CDOTABaseAbility /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 duration; // offset 0x85C, size 0x4, align 4
    int32 base_damage; // offset 0x860, size 0x4, align 4
    float32 strength_damage; // offset 0x864, size 0x4, align 4
    float32 slow_duration; // offset 0x868, size 0x4, align 4
    float32 scepter_bonus_duration; // offset 0x86C, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x870, size 0x18, align 8
    int32 m_nHeroesHit; // offset 0x888, size 0x4, align 4
    bool m_bHitInvisibleHero; // offset 0x88C, size 0x1, align 1
    char _pad_088D[0x3]; // offset 0x88D
};
