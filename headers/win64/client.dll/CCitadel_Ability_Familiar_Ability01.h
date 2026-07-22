#pragma once

class CCitadel_Ability_Familiar_Ability01 : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1688, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x11F0]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecTargetsInCone; // offset 0x11F0, size 0x18, align 8 | MNetworkEnable
    char _pad_1208[0x480]; // offset 0x1208
};
