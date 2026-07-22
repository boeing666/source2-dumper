#pragma once

class CTeam : public CBaseEntity /*0x0*/  // sizeof 0x558, align 0x8 [vtable] (server) {MNetworkIncludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CBasePlayerController > > m_aPlayerControllers; // offset 0x4A0, size 0x18, align 8 | MNetworkEnable MNetworkAlias
    CNetworkUtlVectorBase< CHandle< CBasePlayerPawn > > m_aPlayers; // offset 0x4B8, size 0x18, align 8 | MNetworkEnable MNetworkAlias
    int32 m_iScore; // offset 0x4D0, size 0x4, align 4 | MNetworkEnable
    char[129] m_szTeamname; // offset 0x4D4, size 0x81, align 1 | MNetworkEnable
    char _pad_0555[0x3]; // offset 0x555
};
