#pragma once

class CBasePlayerController : public C_BaseEntity /*0x0*/  // sizeof 0x7F0, align 0x8 [vtable] (client) {MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkUserGroupProxy MNetworkUserGroupProxy MNetworkIncludeByUserGroup MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkReplayCompatField}
{
public:
    char _pad_0000[0x5F8]; // offset 0x0
    C_CommandContext m_CommandContext; // offset 0x5F8, size 0xB8, align 255 | MNotSaved
    uint64 m_nInButtonsWhichAreToggles; // offset 0x6B0, size 0x8, align 8 | MNotSaved
    uint32 m_nTickBase; // offset 0x6B8, size 0x4, align 4 | MNetworkEnable MNetworkPriority MNetworkUserGroup MNotSaved
    CHandle< C_BasePlayerPawn > m_hPawn; // offset 0x6BC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bKnownTeamMismatch; // offset 0x6C0, size 0x1, align 1 | MNetworkEnable
    char _pad_06C1[0x3]; // offset 0x6C1
    CHandle< C_BasePlayerPawn > m_hPredictedPawn; // offset 0x6C4, size 0x4, align 4 | MNotSaved
    CSplitScreenSlot m_nSplitScreenSlot; // offset 0x6C8, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hSplitOwner; // offset 0x6CC, size 0x4, align 4 | MNotSaved
    CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // offset 0x6D0, size 0x18, align 8 | MNotSaved
    bool m_bIsHLTV; // offset 0x6E8, size 0x1, align 1
    char _pad_06E9[0x3]; // offset 0x6E9
    PlayerConnectedState m_iConnected; // offset 0x6EC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback MNotSaved
    char[128] m_iszPlayerName; // offset 0x6F0, size 0x80, align 1 | MNetworkEnable MNetworkChangeCallback MNotSaved
    char _pad_0770[0x8]; // offset 0x770
    uint64 m_steamID; // offset 0x778, size 0x8, align 8 | MNetworkEnable MNetworkEncoder MNetworkChangeCallback MNotSaved
    bool m_bIsLocalPlayerController; // offset 0x780, size 0x1, align 1 | MNotSaved
    bool m_bNoClipEnabled; // offset 0x781, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0782[0x2]; // offset 0x782
    uint32 m_iDesiredFOV; // offset 0x784, size 0x4, align 4 | MNetworkEnable
    char _pad_0788[0x68]; // offset 0x788
};
