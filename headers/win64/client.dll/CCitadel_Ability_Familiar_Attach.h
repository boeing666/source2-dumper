#pragma once

class CCitadel_Ability_Familiar_Attach : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1700, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11E0]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecTagAlongVisitedAllies; // offset 0x11E0, size 0x18, align 8 | MNetworkEnable
    CHandle< C_BaseEntity > m_hLastAttachedTo; // offset 0x11F8, size 0x4, align 4 | MNetworkEnable
    char _pad_11FC[0x504]; // offset 0x11FC
};
