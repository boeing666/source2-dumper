#pragma once

class CBasePlayerController : public CBaseEntity /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    uint64 m_nInButtonsWhichAreToggles; // offset 0x4A0, size 0x8, align 8 | MNotSaved
    uint32 m_nTickBase; // offset 0x4A8, size 0x4, align 4 | MNotSaved
    char _pad_04AC[0x24]; // offset 0x4AC
    CHandle< CBasePlayerPawn > m_hPawn; // offset 0x4D0, size 0x4, align 4
    bool m_bKnownTeamMismatch; // offset 0x4D4, size 0x1, align 1
    char _pad_04D5[0x7]; // offset 0x4D5
    CSplitScreenSlot m_nSplitScreenSlot; // offset 0x4DC, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hSplitOwner; // offset 0x4E0, size 0x4, align 4 | MNotSaved
    char _pad_04E4[0x4]; // offset 0x4E4
    CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // offset 0x4E8, size 0x18, align 8 | MNotSaved
    bool m_bIsHLTV; // offset 0x500, size 0x1, align 1
    char _pad_0501[0x3]; // offset 0x501
    PlayerConnectedState m_iConnected; // offset 0x504, size 0x4, align 4 | MNotSaved
    PlayerConnectedState m_iMostConnected; // offset 0x508, size 0x4, align 4 | MNotSaved
    char[128] m_iszPlayerName; // offset 0x50C, size 0x80, align 1 | MNotSaved
    char _pad_058C[0x4]; // offset 0x58C
    CUtlString m_szNetworkIDString; // offset 0x590, size 0x8, align 8 | MNotSaved
    float32 m_fLerpTime; // offset 0x598, size 0x4, align 4 | MNotSaved
    bool m_bLagCompensation; // offset 0x59C, size 0x1, align 1 | MNotSaved
    bool m_bPredict; // offset 0x59D, size 0x1, align 1 | MNotSaved
    char _pad_059E[0x6]; // offset 0x59E
    bool m_bIsLowViolence; // offset 0x5A4, size 0x1, align 1 | MNotSaved
    bool m_bGamePaused; // offset 0x5A5, size 0x1, align 1 | MNotSaved
    char _pad_05A6[0x132]; // offset 0x5A6
    ChatIgnoreType_t m_iIgnoreGlobalChat; // offset 0x6D8, size 0x4, align 4 | MNotSaved
    float32 m_flLastPlayerTalkTime; // offset 0x6DC, size 0x4, align 4 | MKV3TransferSaveOpsForField
    float32 m_flLastEntitySteadyState; // offset 0x6E0, size 0x4, align 4 | MNotSaved
    int32 m_nAvailableEntitySteadyState; // offset 0x6E4, size 0x4, align 4 | MNotSaved
    bool m_bHasAnySteadyStateEnts; // offset 0x6E8, size 0x1, align 1 | MNotSaved
    char _pad_06E9[0xF]; // offset 0x6E9
    uint64 m_steamID; // offset 0x6F8, size 0x8, align 8 | MNotSaved
    bool m_bNoClipEnabled; // offset 0x700, size 0x1, align 1
    char _pad_0701[0x3]; // offset 0x701
    uint32 m_iDesiredFOV; // offset 0x704, size 0x4, align 4
    char _pad_0708[0xB0]; // offset 0x708
};
