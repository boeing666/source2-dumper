#pragma once

class CCitadel_Ability_Familiar_Attach : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1BA8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecTagAlongVisitedAllies; // offset 0x14A8, size 0x18, align 8
    CHandle< CBaseEntity > m_hLastAttachedTo; // offset 0x14C0, size 0x4, align 4
    char _pad_14C4[0x6E4]; // offset 0x14C4
};
