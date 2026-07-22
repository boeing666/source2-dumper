#pragma once

class CTeam : public CBaseEntity /*0x0*/  // sizeof 0x560, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CBasePlayerController > > m_aPlayerControllers; // offset 0x4A8, size 0x18, align 8
    CNetworkUtlVectorBase< CHandle< CBasePlayerPawn > > m_aPlayers; // offset 0x4C0, size 0x18, align 8
    int32 m_iScore; // offset 0x4D8, size 0x4, align 4
    char[129] m_szTeamname; // offset 0x4DC, size 0x81, align 1
    char _pad_055D[0x3]; // offset 0x55D
};
