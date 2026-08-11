#pragma once

class CCitadel_Ability_HornetSting : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1310, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    int32 m_BounceCount; // offset 0xF70, size 0x4, align 4
    bool m_bHitHero; // offset 0xF74, size 0x1, align 1
    char _pad_0F75[0x3]; // offset 0xF75
    CUtlVector< CHandle< CBaseEntity > > m_vecValidBounceTargets; // offset 0xF78, size 0x18, align 8
    char _pad_0F90[0x380]; // offset 0xF90
};
