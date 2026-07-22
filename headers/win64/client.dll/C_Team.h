#pragma once

class C_Team : public C_BaseEntity /*0x0*/  // sizeof 0x6A8, align 0x8 [vtable] (client) {MNetworkIncludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< CBasePlayerController > > m_aPlayerControllers; // offset 0x5F0, size 0x18, align 8 | MNetworkEnable MNetworkAlias
    C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > > m_aPlayers; // offset 0x608, size 0x18, align 8 | MNetworkEnable MNetworkAlias
    int32 m_iScore; // offset 0x620, size 0x4, align 4 | MNetworkEnable
    char[129] m_szTeamname; // offset 0x624, size 0x81, align 1 | MNetworkEnable
    char _pad_06A5[0x3]; // offset 0x6A5
};
