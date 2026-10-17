#pragma once

class CBasePlayerController : public C_BaseEntity /*0x0*/  // sizeof 0x968, align 0x8 [vtable] (client)
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
    char _pad_0830[0x4]; // offset 0x830
    CSplitScreenSlot m_nSplitScreenSlot; // offset 0x834, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hSplitOwner; // offset 0x838, size 0x4, align 4 | MNotSaved
    char _pad_083C[0x4]; // offset 0x83C
    CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // offset 0x840, size 0x18, align 8 | MNotSaved
    bool m_bIsHLTV; // offset 0x858, size 0x1, align 1
    char _pad_0859[0x3]; // offset 0x859
    PlayerConnectedState m_iConnected; // offset 0x85C, size 0x4, align 4 | MNotSaved
    PlayerConnectedState m_iMostConnected; // offset 0x860, size 0x4, align 4 | MNotSaved
    char[128] m_iszPlayerName; // offset 0x864, size 0x80, align 1 | MNotSaved
    char _pad_08E4[0xC]; // offset 0x8E4
    uint64 m_steamID; // offset 0x8F0, size 0x8, align 8 | MNotSaved
    bool m_bIsLocalPlayerController; // offset 0x8F8, size 0x1, align 1 | MNotSaved
    bool m_bNoClipEnabled; // offset 0x8F9, size 0x1, align 1
    char _pad_08FA[0x2]; // offset 0x8FA
    uint32 m_iDesiredFOV; // offset 0x8FC, size 0x4, align 4
    char _pad_0900[0x68]; // offset 0x900
};
