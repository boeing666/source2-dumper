#pragma once

class CCitadel_Ability_Familiar_Ability01 : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1428, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF90]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecTargetsInCone; // offset 0xF90, size 0x18, align 8 | MNetworkEnable
    char _pad_0FA8[0x480]; // offset 0xFA8
};
