#pragma once

class CBasePlayerController : public C_BaseEntity /*0x0*/  // sizeof 0x7F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x608]; // offset 0x0
    C_CommandContext m_CommandContext; // offset 0x608, size 0xA8, align 8 | MNotSaved
    uint64 m_nInButtonsWhichAreToggles; // offset 0x6B0, size 0x8, align 8 | MNotSaved
    uint32 m_nTickBase; // offset 0x6B8, size 0x4, align 4 | MNotSaved
    CHandle< C_BasePlayerPawn > m_hPawn; // offset 0x6BC, size 0x4, align 4
    bool m_bKnownTeamMismatch; // offset 0x6C0, size 0x1, align 1
    char _pad_06C1[0x3]; // offset 0x6C1
    CHandle< C_BasePlayerPawn > m_hPredictedPawn; // offset 0x6C4, size 0x4, align 4 | MNotSaved
    CSplitScreenSlot m_nSplitScreenSlot; // offset 0x6C8, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hSplitOwner; // offset 0x6CC, size 0x4, align 4 | MNotSaved
    CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // offset 0x6D0, size 0x18, align 8 | MNotSaved
    bool m_bIsHLTV; // offset 0x6E8, size 0x1, align 1
    char _pad_06E9[0x3]; // offset 0x6E9
    PlayerConnectedState m_iConnected; // offset 0x6EC, size 0x4, align 4 | MNotSaved
    PlayerConnectedState m_iMostConnected; // offset 0x6F0, size 0x4, align 4 | MNotSaved
    char[128] m_iszPlayerName; // offset 0x6F4, size 0x80, align 1 | MNotSaved
    char _pad_0774[0xC]; // offset 0x774
    uint64 m_steamID; // offset 0x780, size 0x8, align 8 | MNotSaved
    bool m_bIsLocalPlayerController; // offset 0x788, size 0x1, align 1 | MNotSaved
    bool m_bNoClipEnabled; // offset 0x789, size 0x1, align 1
    char _pad_078A[0x2]; // offset 0x78A
    uint32 m_iDesiredFOV; // offset 0x78C, size 0x4, align 4
    char _pad_0790[0x68]; // offset 0x790
};
