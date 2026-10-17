#pragma once

class CBasePlayerController : public CBaseEntity /*0x0*/  // sizeof 0xA98, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    uint64 m_nInButtonsWhichAreToggles; // offset 0x780, size 0x8, align 8 | MNotSaved
    uint32 m_nTickBase; // offset 0x788, size 0x4, align 4 | MNotSaved
    char _pad_078C[0x24]; // offset 0x78C
    CHandle< CBasePlayerPawn > m_hPawn; // offset 0x7B0, size 0x4, align 4
    bool m_bKnownTeamMismatch; // offset 0x7B4, size 0x1, align 1
    char _pad_07B5[0x7]; // offset 0x7B5
    CSplitScreenSlot m_nSplitScreenSlot; // offset 0x7BC, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hSplitOwner; // offset 0x7C0, size 0x4, align 4 | MNotSaved
    char _pad_07C4[0x4]; // offset 0x7C4
    CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // offset 0x7C8, size 0x18, align 8 | MNotSaved
    bool m_bIsHLTV; // offset 0x7E0, size 0x1, align 1
    char _pad_07E1[0x3]; // offset 0x7E1
    PlayerConnectedState m_iConnected; // offset 0x7E4, size 0x4, align 4 | MNotSaved
    PlayerConnectedState m_iMostConnected; // offset 0x7E8, size 0x4, align 4 | MNotSaved
    char[128] m_iszPlayerName; // offset 0x7EC, size 0x80, align 1 | MNotSaved
    char _pad_086C[0x4]; // offset 0x86C
    CUtlString m_szNetworkIDString; // offset 0x870, size 0x8, align 8 | MNotSaved
    float32 m_fLerpTime; // offset 0x878, size 0x4, align 4 | MNotSaved
    bool m_bLagCompensation; // offset 0x87C, size 0x1, align 1 | MNotSaved
    bool m_bPredict; // offset 0x87D, size 0x1, align 1 | MNotSaved
    char _pad_087E[0x6]; // offset 0x87E
    bool m_bIsLowViolence; // offset 0x884, size 0x1, align 1 | MNotSaved
    bool m_bGamePaused; // offset 0x885, size 0x1, align 1 | MNotSaved
    char _pad_0886[0x132]; // offset 0x886
    ChatIgnoreType_t m_iIgnoreGlobalChat; // offset 0x9B8, size 0x4, align 4 | MNotSaved
    float32 m_flLastPlayerTalkTime; // offset 0x9BC, size 0x4, align 4 | MKV3TransferSaveOpsForField
    float32 m_flLastEntitySteadyState; // offset 0x9C0, size 0x4, align 4 | MNotSaved
    int32 m_nAvailableEntitySteadyState; // offset 0x9C4, size 0x4, align 4 | MNotSaved
    bool m_bHasAnySteadyStateEnts; // offset 0x9C8, size 0x1, align 1 | MNotSaved
    char _pad_09C9[0xF]; // offset 0x9C9
    uint64 m_steamID; // offset 0x9D8, size 0x8, align 8 | MNotSaved
    bool m_bNoClipEnabled; // offset 0x9E0, size 0x1, align 1
    char _pad_09E1[0x3]; // offset 0x9E1
    uint32 m_iDesiredFOV; // offset 0x9E4, size 0x4, align 4
    char _pad_09E8[0xB0]; // offset 0x9E8
};
