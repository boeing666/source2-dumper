#pragma once

class CCitadel_Ability_ShieldedSentry : public CCitadelBaseAbility /*0x0*/  // sizeof 0x16B0, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF98]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CNPC_SimpleAnimatingAI > > m_vecDeployedSentries; // offset 0xF98, size 0x18, align 8 | MNetworkEnable
    char _pad_0FB0[0x700]; // offset 0xFB0
};
