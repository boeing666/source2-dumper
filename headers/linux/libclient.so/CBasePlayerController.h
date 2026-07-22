#pragma once

class CBasePlayerController : public C_BaseEntity /*0x0*/  // sizeof 0x978, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    C_CommandContext m_CommandContext; // offset 0x788, size 0xA8, align 8 | MNotSaved
    uint64 m_nInButtonsWhichAreToggles; // offset 0x830, size 0x8, align 8 | MNotSaved
    uint32 m_nTickBase; // offset 0x838, size 0x4, align 4 | MNotSaved
    CHandle< C_BasePlayerPawn > m_hPawn; // offset 0x83C, size 0x4, align 4
    bool m_bKnownTeamMismatch; // offset 0x840, size 0x1, align 1
    char _pad_0841[0x3]; // offset 0x841
    CHandle< C_BasePlayerPawn > m_hPredictedPawn; // offset 0x844, size 0x4, align 4 | MNotSaved
    CSplitScreenSlot m_nSplitScreenSlot; // offset 0x848, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hSplitOwner; // offset 0x84C, size 0x4, align 4 | MNotSaved
    CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // offset 0x850, size 0x18, align 8 | MNotSaved
    bool m_bIsHLTV; // offset 0x868, size 0x1, align 1
    char _pad_0869[0x3]; // offset 0x869
    PlayerConnectedState m_iConnected; // offset 0x86C, size 0x4, align 4 | MNotSaved
    PlayerConnectedState m_iMostConnected; // offset 0x870, size 0x4, align 4 | MNotSaved
    char[128] m_iszPlayerName; // offset 0x874, size 0x80, align 1 | MNotSaved
    char _pad_08F4[0xC]; // offset 0x8F4
    uint64 m_steamID; // offset 0x900, size 0x8, align 8 | MNotSaved
    bool m_bIsLocalPlayerController; // offset 0x908, size 0x1, align 1 | MNotSaved
    bool m_bNoClipEnabled; // offset 0x909, size 0x1, align 1
    char _pad_090A[0x2]; // offset 0x90A
    uint32 m_iDesiredFOV; // offset 0x90C, size 0x4, align 4
    char _pad_0910[0x68]; // offset 0x910
};
