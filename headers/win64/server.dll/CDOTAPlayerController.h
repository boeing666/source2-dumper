#pragma once

class CDOTAPlayerController : public CBasePlayerController /*0x0*/  // sizeof 0x980, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7C0]; // offset 0x0
    int32 m_iMinimapMove; // offset 0x7C0, size 0x4, align 4
    int32[2] m_iCursor; // offset 0x7C4, size 0x8, align 4
    int32 m_iSpectatorClickBehavior; // offset 0x7CC, size 0x4, align 4
    float32 m_flAspectRatio; // offset 0x7D0, size 0x4, align 4
    CHandle< CBaseEntity > m_hSpectatorQueryUnit; // offset 0x7D4, size 0x4, align 4
    int32 m_iStatsPanel; // offset 0x7D8, size 0x4, align 4
    int32 m_iShopPanel; // offset 0x7DC, size 0x4, align 4
    ShopItemViewMode_t m_iShopViewMode; // offset 0x7E0, size 0x4, align 4
    int32 m_iStatsDropdownCategory; // offset 0x7E4, size 0x4, align 4
    int32 m_iStatsDropdownSort; // offset 0x7E8, size 0x4, align 4
    char[64] m_szShopString; // offset 0x7EC, size 0x40, align 1
    bool m_bInShowCaseMode; // offset 0x82C, size 0x1, align 1
    char _pad_082D[0x3]; // offset 0x82D
    float32 m_flCameraZoomAmount; // offset 0x830, size 0x4, align 4
    int32 m_iHighPriorityScore; // offset 0x834, size 0x4, align 4
    float32 m_flUnfilteredFrameTime; // offset 0x838, size 0x4, align 4
    bool m_bUsingAssistedCameraOperator; // offset 0x83C, size 0x1, align 1
    bool m_bUsingCameraMan; // offset 0x83D, size 0x1, align 1
    char _pad_083E[0x2]; // offset 0x83E
    int32 m_nPlayerAssistFlags; // offset 0x840, size 0x4, align 4
    float32 m_flHighPriorityScoreTimeStamp; // offset 0x844, size 0x4, align 4
    float32 m_flExecuteOrdersLagCompensation; // offset 0x848, size 0x4, align 4
    int32 m_iMusicStatus; // offset 0x84C, size 0x4, align 4
    float32[3] m_flMusicOperatorVals; // offset 0x850, size 0xC, align 4
    int32[4] m_iMusicOperatorVals; // offset 0x85C, size 0x10, align 4
    char _pad_086C[0x4]; // offset 0x86C
    CountdownTimer m_MusicRestTime; // offset 0x870, size 0x18, align 8
    CHandle< CBaseEntity > m_hKillCamUnit; // offset 0x888, size 0x4, align 4
    VectorWS m_vecCrosshairTracePos; // offset 0x88C, size 0xC, align 4
    CEntityIndex m_iCrosshairEntity; // offset 0x898, size 0x4, align 4
    PlayerID_t m_nPlayerID; // offset 0x89C, size 0x4, align 255
    CHandle< CBaseEntity > m_hAssignedHero; // offset 0x8A0, size 0x4, align 4
    char _pad_08A4[0xC]; // offset 0x8A4
    bool m_bTeleportRequiresHalt; // offset 0x8B0, size 0x1, align 1
    bool m_bChannelRequiresHalt; // offset 0x8B1, size 0x1, align 1
    char _pad_08B2[0x2E]; // offset 0x8B2
    bool m_bInteractionChannelsRequiresHalt; // offset 0x8E0, size 0x1, align 1
    char _pad_08E1[0x3]; // offset 0x8E1
    int32 m_nServerOrderSequenceNumber; // offset 0x8E4, size 0x4, align 4
    float32 m_flLastOrderTime; // offset 0x8E8, size 0x4, align 4
    float32 m_flLastKnownActiveTime; // offset 0x8EC, size 0x4, align 4
    uint32 m_nLastOrderLatency; // offset 0x8F0, size 0x4, align 4
    GameTime_t m_flLastReconnectTime; // offset 0x8F4, size 0x4, align 255
    GameTime_t m_fLastSuggestionTime; // offset 0x8F8, size 0x4, align 255
    char _pad_08FC[0x1C]; // offset 0x8FC
    bool m_bWantsRandomHero; // offset 0x918, size 0x1, align 1
    bool m_bFullyJoinedServer; // offset 0x919, size 0x1, align 1
    char _pad_091A[0x2]; // offset 0x91A
    int32 m_nCheatDetectOrderReferenceCommandNumber; // offset 0x91C, size 0x4, align 4
    PlayerID_t m_iSwapPreferencePlayerID; // offset 0x920, size 0x4, align 255
    uint32 m_nCoachListenMask; // offset 0x924, size 0x4, align 4
    int32 m_nCachedCoachedTeam; // offset 0x928, size 0x4, align 4
    float32[2] m_flLastChatWheelTime; // offset 0x92C, size 0x8, align 4
    float32[2] m_flLastChatWheelAudioTime; // offset 0x934, size 0x8, align 4
    float32[2] m_flLastChatWheelAllChatAudioTime; // offset 0x93C, size 0x8, align 4
    float32 m_flLastChatWheelSprayTime; // offset 0x944, size 0x4, align 4
    float32 m_flLastChatWheelLongCooldownTime; // offset 0x948, size 0x4, align 4
    float32 m_flLastPingTime; // offset 0x94C, size 0x4, align 4
    float32 m_flPingAllowance; // offset 0x950, size 0x4, align 4
    float32 m_flLastMapLineTime; // offset 0x954, size 0x4, align 4
    float32 m_flMapLineAllowance; // offset 0x958, size 0x4, align 4
    float32 m_flLastWaypointPathPingTime; // offset 0x95C, size 0x4, align 4
    float32 m_flWaypointPathPingAllowance; // offset 0x960, size 0x4, align 4
    float32 m_flLastVersusBehaviorTime; // offset 0x964, size 0x4, align 4
    float32 m_flVersusBehaviorAllowance; // offset 0x968, size 0x4, align 4
    uint8[10] m_pOrderRetirementHistory; // offset 0x96C, size 0xA, align 1
    uint16 m_nOrderRetirementSum; // offset 0x976, size 0x2, align 2
    int32 m_nOrderRetirementLastTick; // offset 0x978, size 0x4, align 4
    float32 m_flLastReportedMissedSnapshotRate; // offset 0x97C, size 0x4, align 4
};
