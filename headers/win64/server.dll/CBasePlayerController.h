#pragma once

class CBasePlayerController : public CBaseEntity /*0x0*/  // sizeof 0x7E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B8]; // offset 0x0
    uint64 m_nInButtonsWhichAreToggles; // offset 0x4B8, size 0x8, align 8 | MNotSaved
    uint32 m_nTickBase; // offset 0x4C0, size 0x4, align 4 | MNotSaved
    char _pad_04C4[0x24]; // offset 0x4C4
    CHandle< CBasePlayerPawn > m_hPawn; // offset 0x4E8, size 0x4, align 4
    bool m_bKnownTeamMismatch; // offset 0x4EC, size 0x1, align 1
    char _pad_04ED[0x7]; // offset 0x4ED
    CSplitScreenSlot m_nSplitScreenSlot; // offset 0x4F4, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hSplitOwner; // offset 0x4F8, size 0x4, align 4 | MNotSaved
    char _pad_04FC[0x4]; // offset 0x4FC
    CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // offset 0x500, size 0x18, align 8 | MNotSaved
    bool m_bIsHLTV; // offset 0x518, size 0x1, align 1
    char _pad_0519[0x3]; // offset 0x519
    PlayerConnectedState m_iConnected; // offset 0x51C, size 0x4, align 4 | MNotSaved
    PlayerConnectedState m_iMostConnected; // offset 0x520, size 0x4, align 4 | MNotSaved
    char[128] m_iszPlayerName; // offset 0x524, size 0x80, align 1 | MNotSaved
    char _pad_05A4[0x4]; // offset 0x5A4
    CUtlString m_szNetworkIDString; // offset 0x5A8, size 0x8, align 8 | MNotSaved
    float32 m_fLerpTime; // offset 0x5B0, size 0x4, align 4 | MNotSaved
    bool m_bLagCompensation; // offset 0x5B4, size 0x1, align 1 | MNotSaved
    bool m_bPredict; // offset 0x5B5, size 0x1, align 1 | MNotSaved
    char _pad_05B6[0x6]; // offset 0x5B6
    bool m_bIsLowViolence; // offset 0x5BC, size 0x1, align 1 | MNotSaved
    bool m_bGamePaused; // offset 0x5BD, size 0x1, align 1 | MNotSaved
    char _pad_05BE[0x14A]; // offset 0x5BE
    ChatIgnoreType_t m_iIgnoreGlobalChat; // offset 0x708, size 0x4, align 4 | MNotSaved
    float32 m_flLastPlayerTalkTime; // offset 0x70C, size 0x4, align 4 | MKV3TransferSaveOpsForField
    float32 m_flLastEntitySteadyState; // offset 0x710, size 0x4, align 4 | MNotSaved
    int32 m_nAvailableEntitySteadyState; // offset 0x714, size 0x4, align 4 | MNotSaved
    bool m_bHasAnySteadyStateEnts; // offset 0x718, size 0x1, align 1 | MNotSaved
    char _pad_0719[0xF]; // offset 0x719
    uint64 m_steamID; // offset 0x728, size 0x8, align 8 | MNotSaved
    bool m_bNoClipEnabled; // offset 0x730, size 0x1, align 1
    char _pad_0731[0x3]; // offset 0x731
    uint32 m_iDesiredFOV; // offset 0x734, size 0x4, align 4
    char _pad_0738[0xB0]; // offset 0x738
};
