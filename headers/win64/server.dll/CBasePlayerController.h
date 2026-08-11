#pragma once

class CBasePlayerController : public CBaseEntity /*0x0*/  // sizeof 0x7D0, align 0x8 [vtable] (server) {MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkUserGroupProxy MNetworkUserGroupProxy MNetworkIncludeByUserGroup MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    uint64 m_nInButtonsWhichAreToggles; // offset 0x4A8, size 0x8, align 8 | MNotSaved
    uint32 m_nTickBase; // offset 0x4B0, size 0x4, align 4 | MNetworkEnable MNetworkPriority MNetworkUserGroup MNotSaved
    char _pad_04B4[0x24]; // offset 0x4B4
    CHandle< CBasePlayerPawn > m_hPawn; // offset 0x4D8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bKnownTeamMismatch; // offset 0x4DC, size 0x1, align 1 | MNetworkEnable
    char _pad_04DD[0x3]; // offset 0x4DD
    CSplitScreenSlot m_nSplitScreenSlot; // offset 0x4E0, size 0x4, align 4 | MNotSaved
    CHandle< CBasePlayerController > m_hSplitOwner; // offset 0x4E4, size 0x4, align 4 | MNotSaved
    CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // offset 0x4E8, size 0x18, align 8 | MNotSaved
    bool m_bIsHLTV; // offset 0x500, size 0x1, align 1
    char _pad_0501[0x3]; // offset 0x501
    PlayerConnectedState m_iConnected; // offset 0x504, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback MNotSaved
    char[128] m_iszPlayerName; // offset 0x508, size 0x80, align 1 | MNetworkEnable MNetworkChangeCallback MNotSaved
    CUtlString m_szNetworkIDString; // offset 0x588, size 0x8, align 8 | MNotSaved
    float32 m_fLerpTime; // offset 0x590, size 0x4, align 4 | MNotSaved
    bool m_bLagCompensation; // offset 0x594, size 0x1, align 1 | MNotSaved
    bool m_bPredict; // offset 0x595, size 0x1, align 1 | MNotSaved
    char _pad_0596[0x6]; // offset 0x596
    bool m_bIsLowViolence; // offset 0x59C, size 0x1, align 1 | MNotSaved
    bool m_bGamePaused; // offset 0x59D, size 0x1, align 1 | MNotSaved
    char _pad_059E[0x14A]; // offset 0x59E
    ChatIgnoreType_t m_iIgnoreGlobalChat; // offset 0x6E8, size 0x4, align 4 | MNotSaved
    float32 m_flLastPlayerTalkTime; // offset 0x6EC, size 0x4, align 4 | MKV3TransferSaveOpsForField
    float32 m_flLastEntitySteadyState; // offset 0x6F0, size 0x4, align 4 | MNotSaved
    int32 m_nAvailableEntitySteadyState; // offset 0x6F4, size 0x4, align 4 | MNotSaved
    bool m_bHasAnySteadyStateEnts; // offset 0x6F8, size 0x1, align 1 | MNotSaved
    char _pad_06F9[0xF]; // offset 0x6F9
    uint64 m_steamID; // offset 0x708, size 0x8, align 8 | MNetworkEnable MNetworkEncoder MNetworkChangeCallback MNotSaved
    bool m_bNoClipEnabled; // offset 0x710, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0711[0x3]; // offset 0x711
    uint32 m_iDesiredFOV; // offset 0x714, size 0x4, align 4 | MNetworkEnable
    char _pad_0718[0xB8]; // offset 0x718
};
