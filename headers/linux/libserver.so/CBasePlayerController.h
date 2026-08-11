#pragma once

class CBasePlayerController : public CBaseEntity /*0x0*/  // sizeof 0xAA8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x790]; // offset 0x0
    uint64 m_nInButtonsWhichAreToggles; // offset 0x790, size 0x8, align 8 | MNotSaved
    uint32 m_nTickBase; // offset 0x798, size 0x4, align 4 | MNotSaved
    char _pad_079C[0x24]; // offset 0x79C
    CHandle< CBasePlayerPawn > m_hPawn; // offset 0x7C0, size 0x4, align 4
    bool m_bKnownTeamMismatch; // offset 0x7C4, size 0x1, align 1
    char _pad_07C5[0x3]; // offset 0x7C5
    CSplitScreenSlot m_nSplitScreenSlot; // offset 0x7C8, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hSplitOwner; // offset 0x7CC, size 0x4, align 4 | MNotSaved
    CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // offset 0x7D0, size 0x18, align 8 | MNotSaved
    bool m_bIsHLTV; // offset 0x7E8, size 0x1, align 1
    char _pad_07E9[0x3]; // offset 0x7E9
    PlayerConnectedState m_iConnected; // offset 0x7EC, size 0x4, align 4 | MNotSaved
    PlayerConnectedState m_iMostConnected; // offset 0x7F0, size 0x4, align 4 | MNotSaved
    char[128] m_iszPlayerName; // offset 0x7F4, size 0x80, align 1 | MNotSaved
    char _pad_0874[0x4]; // offset 0x874
    CUtlString m_szNetworkIDString; // offset 0x878, size 0x8, align 8 | MNotSaved
    float32 m_fLerpTime; // offset 0x880, size 0x4, align 4 | MNotSaved
    bool m_bLagCompensation; // offset 0x884, size 0x1, align 1 | MNotSaved
    bool m_bPredict; // offset 0x885, size 0x1, align 1 | MNotSaved
    char _pad_0886[0x6]; // offset 0x886
    bool m_bIsLowViolence; // offset 0x88C, size 0x1, align 1 | MNotSaved
    bool m_bGamePaused; // offset 0x88D, size 0x1, align 1 | MNotSaved
    char _pad_088E[0x132]; // offset 0x88E
    ChatIgnoreType_t m_iIgnoreGlobalChat; // offset 0x9C0, size 0x4, align 4 | MNotSaved
    float32 m_flLastPlayerTalkTime; // offset 0x9C4, size 0x4, align 4 | MKV3TransferSaveOpsForField
    float32 m_flLastEntitySteadyState; // offset 0x9C8, size 0x4, align 4 | MNotSaved
    int32 m_nAvailableEntitySteadyState; // offset 0x9CC, size 0x4, align 4 | MNotSaved
    bool m_bHasAnySteadyStateEnts; // offset 0x9D0, size 0x1, align 1 | MNotSaved
    char _pad_09D1[0xF]; // offset 0x9D1
    uint64 m_steamID; // offset 0x9E0, size 0x8, align 8 | MNotSaved
    bool m_bNoClipEnabled; // offset 0x9E8, size 0x1, align 1
    char _pad_09E9[0x3]; // offset 0x9E9
    uint32 m_iDesiredFOV; // offset 0x9EC, size 0x4, align 4
    char _pad_09F0[0xB8]; // offset 0x9F0
};
