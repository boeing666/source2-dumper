#pragma once

class CCitadel_Ability_TestHero_SummonSoldier : public CCitadelBaseAbility /*0x0*/  // sizeof 0x17C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecTargetsInCone; // offset 0x14A8, size 0x18, align 8
    char _pad_14C0[0x300]; // offset 0x14C0
};
