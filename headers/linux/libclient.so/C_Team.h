#pragma once

class C_Team : public C_BaseEntity /*0x0*/  // sizeof 0x828, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< CBasePlayerController > > m_aPlayerControllers; // offset 0x770, size 0x18, align 8
    C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > > m_aPlayers; // offset 0x788, size 0x18, align 8
    int32 m_iScore; // offset 0x7A0, size 0x4, align 4
    char[129] m_szTeamname; // offset 0x7A4, size 0x81, align 1
    char _pad_0825[0x3]; // offset 0x825
};
