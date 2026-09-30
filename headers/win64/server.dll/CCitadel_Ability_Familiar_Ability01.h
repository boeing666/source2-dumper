#pragma once

class CCitadel_Ability_Familiar_Ability01 : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1B08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14C0]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecTargetsInCone; // offset 0x14C0, size 0x18, align 8
    char _pad_14D8[0x630]; // offset 0x14D8
};
