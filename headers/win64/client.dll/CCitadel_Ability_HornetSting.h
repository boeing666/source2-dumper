#pragma once

class CCitadel_Ability_HornetSting : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1BD0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    int32 m_BounceCount; // offset 0x16E0, size 0x4, align 4
    bool m_bHitHero; // offset 0x16E4, size 0x1, align 1
    char _pad_16E5[0x3]; // offset 0x16E5
    CUtlVector< CHandle< C_BaseEntity > > m_vecValidBounceTargets; // offset 0x16E8, size 0x18, align 8
    char _pad_1700[0x4D0]; // offset 0x1700
};
