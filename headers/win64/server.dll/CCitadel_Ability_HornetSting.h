#pragma once

class CCitadel_Ability_HornetSting : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1990, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    int32 m_BounceCount; // offset 0x14A0, size 0x4, align 4
    bool m_bHitHero; // offset 0x14A4, size 0x1, align 1
    char _pad_14A5[0x3]; // offset 0x14A5
    CUtlVector< CHandle< CBaseEntity > > m_vecValidBounceTargets; // offset 0x14A8, size 0x18, align 8
    char _pad_14C0[0x4D0]; // offset 0x14C0
};
