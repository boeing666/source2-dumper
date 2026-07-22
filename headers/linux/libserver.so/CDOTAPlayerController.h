#pragma once

class CDOTAPlayerController : public CBasePlayerController /*0x0*/  // sizeof 0xC60, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAA0]; // offset 0x0
    int32 m_iMinimapMove; // offset 0xAA0, size 0x4, align 4
    int32[2] m_iCursor; // offset 0xAA4, size 0x8, align 4
    int32 m_iSpectatorClickBehavior; // offset 0xAAC, size 0x4, align 4
    float32 m_flAspectRatio; // offset 0xAB0, size 0x4, align 4
    CHandle< CBaseEntity > m_hSpectatorQueryUnit; // offset 0xAB4, size 0x4, align 4
    int32 m_iStatsPanel; // offset 0xAB8, size 0x4, align 4
    int32 m_iShopPanel; // offset 0xABC, size 0x4, align 4
    ShopItemViewMode_t m_iShopViewMode; // offset 0xAC0, size 0x4, align 4
    int32 m_iStatsDropdownCategory; // offset 0xAC4, size 0x4, align 4
    int32 m_iStatsDropdownSort; // offset 0xAC8, size 0x4, align 4
    char[64] m_szShopString; // offset 0xACC, size 0x40, align 1
    bool m_bInShowCaseMode; // offset 0xB0C, size 0x1, align 1
    char _pad_0B0D[0x3]; // offset 0xB0D
    float32 m_flCameraZoomAmount; // offset 0xB10, size 0x4, align 4
    int32 m_iHighPriorityScore; // offset 0xB14, size 0x4, align 4
    float32 m_flUnfilteredFrameTime; // offset 0xB18, size 0x4, align 4
    bool m_bUsingAssistedCameraOperator; // offset 0xB1C, size 0x1, align 1
    bool m_bUsingCameraMan; // offset 0xB1D, size 0x1, align 1
    char _pad_0B1E[0x2]; // offset 0xB1E
    int32 m_nPlayerAssistFlags; // offset 0xB20, size 0x4, align 4
    float32 m_flHighPriorityScoreTimeStamp; // offset 0xB24, size 0x4, align 4
    float32 m_flExecuteOrdersLagCompensation; // offset 0xB28, size 0x4, align 4
    int32 m_iMusicStatus; // offset 0xB2C, size 0x4, align 4
    float32[3] m_flMusicOperatorVals; // offset 0xB30, size 0xC, align 4
    int32[4] m_iMusicOperatorVals; // offset 0xB3C, size 0x10, align 4
    char _pad_0B4C[0x4]; // offset 0xB4C
    CountdownTimer m_MusicRestTime; // offset 0xB50, size 0x18, align 8
    CHandle< CBaseEntity > m_hKillCamUnit; // offset 0xB68, size 0x4, align 4
    VectorWS m_vecCrosshairTracePos; // offset 0xB6C, size 0xC, align 4
    CEntityIndex m_iCrosshairEntity; // offset 0xB78, size 0x4, align 4
    PlayerID_t m_nPlayerID; // offset 0xB7C, size 0x4, align 255
    CHandle< CBaseEntity > m_hAssignedHero; // offset 0xB80, size 0x4, align 4
    char _pad_0B84[0xC]; // offset 0xB84
    bool m_bTeleportRequiresHalt; // offset 0xB90, size 0x1, align 1
    bool m_bChannelRequiresHalt; // offset 0xB91, size 0x1, align 1
    char _pad_0B92[0x2E]; // offset 0xB92
    bool m_bInteractionChannelsRequiresHalt; // offset 0xBC0, size 0x1, align 1
    char _pad_0BC1[0x3]; // offset 0xBC1
    int32 m_nServerOrderSequenceNumber; // offset 0xBC4, size 0x4, align 4
    float32 m_flLastOrderTime; // offset 0xBC8, size 0x4, align 4
    float32 m_flLastKnownActiveTime; // offset 0xBCC, size 0x4, align 4
    uint32 m_nLastOrderLatency; // offset 0xBD0, size 0x4, align 4
    GameTime_t m_flLastReconnectTime; // offset 0xBD4, size 0x4, align 255
    GameTime_t m_fLastSuggestionTime; // offset 0xBD8, size 0x4, align 255
    char _pad_0BDC[0x1C]; // offset 0xBDC
    bool m_bWantsRandomHero; // offset 0xBF8, size 0x1, align 1
    bool m_bFullyJoinedServer; // offset 0xBF9, size 0x1, align 1
    char _pad_0BFA[0x2]; // offset 0xBFA
    int32 m_nCheatDetectOrderReferenceCommandNumber; // offset 0xBFC, size 0x4, align 4
    PlayerID_t m_iSwapPreferencePlayerID; // offset 0xC00, size 0x4, align 255
    uint32 m_nCoachListenMask; // offset 0xC04, size 0x4, align 4
    int32 m_nCachedCoachedTeam; // offset 0xC08, size 0x4, align 4
    float32[2] m_flLastChatWheelTime; // offset 0xC0C, size 0x8, align 4
    float32[2] m_flLastChatWheelAudioTime; // offset 0xC14, size 0x8, align 4
    float32[2] m_flLastChatWheelAllChatAudioTime; // offset 0xC1C, size 0x8, align 4
    float32 m_flLastChatWheelSprayTime; // offset 0xC24, size 0x4, align 4
    float32 m_flLastChatWheelLongCooldownTime; // offset 0xC28, size 0x4, align 4
    float32 m_flLastPingTime; // offset 0xC2C, size 0x4, align 4
    float32 m_flPingAllowance; // offset 0xC30, size 0x4, align 4
    float32 m_flLastMapLineTime; // offset 0xC34, size 0x4, align 4
    float32 m_flMapLineAllowance; // offset 0xC38, size 0x4, align 4
    float32 m_flLastWaypointPathPingTime; // offset 0xC3C, size 0x4, align 4
    float32 m_flWaypointPathPingAllowance; // offset 0xC40, size 0x4, align 4
    float32 m_flLastVersusBehaviorTime; // offset 0xC44, size 0x4, align 4
    float32 m_flVersusBehaviorAllowance; // offset 0xC48, size 0x4, align 4
    uint8[10] m_pOrderRetirementHistory; // offset 0xC4C, size 0xA, align 1
    uint16 m_nOrderRetirementSum; // offset 0xC56, size 0x2, align 2
    int32 m_nOrderRetirementLastTick; // offset 0xC58, size 0x4, align 4
    float32 m_flLastReportedMissedSnapshotRate; // offset 0xC5C, size 0x4, align 4
};
