#pragma once

class CCitadel_Ability_HornetSting : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1BC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    int32 m_BounceCount; // offset 0x16D8, size 0x4, align 4
    bool m_bHitHero; // offset 0x16DC, size 0x1, align 1
    char _pad_16DD[0x3]; // offset 0x16DD
    CUtlVector< CHandle< C_BaseEntity > > m_vecValidBounceTargets; // offset 0x16E0, size 0x18, align 8
    char _pad_16F8[0x4D0]; // offset 0x16F8
};
