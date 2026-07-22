#pragma once

class CBasePlayerController : public C_BaseEntity /*0x0*/  // sizeof 0x7E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F8]; // offset 0x0
    C_CommandContext m_CommandContext; // offset 0x5F8, size 0xA0, align 8 | MNotSaved
    uint64 m_nInButtonsWhichAreToggles; // offset 0x698, size 0x8, align 8 | MNotSaved
    uint32 m_nTickBase; // offset 0x6A0, size 0x4, align 4 | MNotSaved
    CHandle< C_BasePlayerPawn > m_hPawn; // offset 0x6A4, size 0x4, align 4
    bool m_bKnownTeamMismatch; // offset 0x6A8, size 0x1, align 1
    char _pad_06A9[0x3]; // offset 0x6A9
    CHandle< C_BasePlayerPawn > m_hPredictedPawn; // offset 0x6AC, size 0x4, align 4 | MNotSaved
    CSplitScreenSlot m_nSplitScreenSlot; // offset 0x6B0, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hSplitOwner; // offset 0x6B4, size 0x4, align 4 | MNotSaved
    CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // offset 0x6B8, size 0x18, align 8 | MNotSaved
    bool m_bIsHLTV; // offset 0x6D0, size 0x1, align 1
    char _pad_06D1[0x3]; // offset 0x6D1
    PlayerConnectedState m_iConnected; // offset 0x6D4, size 0x4, align 4 | MNotSaved
    PlayerConnectedState m_iMostConnected; // offset 0x6D8, size 0x4, align 4 | MNotSaved
    char[128] m_iszPlayerName; // offset 0x6DC, size 0x80, align 1 | MNotSaved
    char _pad_075C[0xC]; // offset 0x75C
    uint64 m_steamID; // offset 0x768, size 0x8, align 8 | MNotSaved
    bool m_bIsLocalPlayerController; // offset 0x770, size 0x1, align 1 | MNotSaved
    bool m_bNoClipEnabled; // offset 0x771, size 0x1, align 1
    char _pad_0772[0x2]; // offset 0x772
    uint32 m_iDesiredFOV; // offset 0x774, size 0x4, align 4
    char _pad_0778[0x68]; // offset 0x778
};
