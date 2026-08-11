#pragma once

class CCitadel_Ability_Familiar_Attach : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1498, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF78]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecTagAlongVisitedAllies; // offset 0xF78, size 0x18, align 8 | MNetworkEnable
    CHandle< CBaseEntity > m_hLastAttachedTo; // offset 0xF90, size 0x4, align 4 | MNetworkEnable
    char _pad_0F94[0x504]; // offset 0xF94
};
