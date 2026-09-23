#pragma once

class CBasePlayerController : public CBaseEntity /*0x0*/  // sizeof 0x7D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    uint64 m_nInButtonsWhichAreToggles; // offset 0x4B0, size 0x8, align 8 | MNotSaved
    uint32 m_nTickBase; // offset 0x4B8, size 0x4, align 4 | MNotSaved
    char _pad_04BC[0x24]; // offset 0x4BC
    CHandle< CBasePlayerPawn > m_hPawn; // offset 0x4E0, size 0x4, align 4
    bool m_bKnownTeamMismatch; // offset 0x4E4, size 0x1, align 1
    char _pad_04E5[0x7]; // offset 0x4E5
    CSplitScreenSlot m_nSplitScreenSlot; // offset 0x4EC, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hSplitOwner; // offset 0x4F0, size 0x4, align 4 | MNotSaved
    char _pad_04F4[0x4]; // offset 0x4F4
    CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // offset 0x4F8, size 0x18, align 8 | MNotSaved
    bool m_bIsHLTV; // offset 0x510, size 0x1, align 1
    char _pad_0511[0x3]; // offset 0x511
    PlayerConnectedState m_iConnected; // offset 0x514, size 0x4, align 4 | MNotSaved
    PlayerConnectedState m_iMostConnected; // offset 0x518, size 0x4, align 4 | MNotSaved
    char[128] m_iszPlayerName; // offset 0x51C, size 0x80, align 1 | MNotSaved
    char _pad_059C[0x4]; // offset 0x59C
    CUtlString m_szNetworkIDString; // offset 0x5A0, size 0x8, align 8 | MNotSaved
    float32 m_fLerpTime; // offset 0x5A8, size 0x4, align 4 | MNotSaved
    bool m_bLagCompensation; // offset 0x5AC, size 0x1, align 1 | MNotSaved
    bool m_bPredict; // offset 0x5AD, size 0x1, align 1 | MNotSaved
    char _pad_05AE[0x6]; // offset 0x5AE
    bool m_bIsLowViolence; // offset 0x5B4, size 0x1, align 1 | MNotSaved
    bool m_bGamePaused; // offset 0x5B5, size 0x1, align 1 | MNotSaved
    char _pad_05B6[0x13A]; // offset 0x5B6
    ChatIgnoreType_t m_iIgnoreGlobalChat; // offset 0x6F0, size 0x4, align 4 | MNotSaved
    float32 m_flLastPlayerTalkTime; // offset 0x6F4, size 0x4, align 4 | MKV3TransferSaveOpsForField
    float32 m_flLastEntitySteadyState; // offset 0x6F8, size 0x4, align 4 | MNotSaved
    int32 m_nAvailableEntitySteadyState; // offset 0x6FC, size 0x4, align 4 | MNotSaved
    bool m_bHasAnySteadyStateEnts; // offset 0x700, size 0x1, align 1 | MNotSaved
    char _pad_0701[0xF]; // offset 0x701
    uint64 m_steamID; // offset 0x710, size 0x8, align 8 | MNotSaved
    bool m_bNoClipEnabled; // offset 0x718, size 0x1, align 1
    char _pad_0719[0x3]; // offset 0x719
    uint32 m_iDesiredFOV; // offset 0x71C, size 0x4, align 4
    char _pad_0720[0xB8]; // offset 0x720
};
