#pragma once

class CBasePlayerController : public C_BaseEntity /*0x0*/  // sizeof 0x960, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    C_CommandContext m_CommandContext; // offset 0x778, size 0xA0, align 8 | MNotSaved
    uint64 m_nInButtonsWhichAreToggles; // offset 0x818, size 0x8, align 8 | MNotSaved
    uint32 m_nTickBase; // offset 0x820, size 0x4, align 4 | MNotSaved
    CHandle< C_BasePlayerPawn > m_hPawn; // offset 0x824, size 0x4, align 4
    bool m_bKnownTeamMismatch; // offset 0x828, size 0x1, align 1
    char _pad_0829[0x3]; // offset 0x829
    CHandle< C_BasePlayerPawn > m_hPredictedPawn; // offset 0x82C, size 0x4, align 4 | MNotSaved
    CSplitScreenSlot m_nSplitScreenSlot; // offset 0x830, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hSplitOwner; // offset 0x834, size 0x4, align 4 | MNotSaved
    CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // offset 0x838, size 0x18, align 8 | MNotSaved
    bool m_bIsHLTV; // offset 0x850, size 0x1, align 1
    char _pad_0851[0x3]; // offset 0x851
    PlayerConnectedState m_iConnected; // offset 0x854, size 0x4, align 4 | MNotSaved
    PlayerConnectedState m_iMostConnected; // offset 0x858, size 0x4, align 4 | MNotSaved
    char[128] m_iszPlayerName; // offset 0x85C, size 0x80, align 1 | MNotSaved
    char _pad_08DC[0xC]; // offset 0x8DC
    uint64 m_steamID; // offset 0x8E8, size 0x8, align 8 | MNotSaved
    bool m_bIsLocalPlayerController; // offset 0x8F0, size 0x1, align 1 | MNotSaved
    bool m_bNoClipEnabled; // offset 0x8F1, size 0x1, align 1
    char _pad_08F2[0x2]; // offset 0x8F2
    uint32 m_iDesiredFOV; // offset 0x8F4, size 0x4, align 4
    char _pad_08F8[0x68]; // offset 0x8F8
};
