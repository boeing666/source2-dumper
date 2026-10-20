#pragma once

class CCitadel_Ability_ShieldedSentry : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1E88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14D0]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CNPC_ShieldedSentry > > m_vecDeployedSentries; // offset 0x14D0, size 0x18, align 8
    char _pad_14E8[0x9A0]; // offset 0x14E8
};
