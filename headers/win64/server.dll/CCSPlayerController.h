#pragma once

class CCSPlayerController : public CBasePlayerController /*0x0*/  // sizeof 0xAA8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7E0]; // offset 0x0
    CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // offset 0x7E0, size 0x8, align 8
    CCSPlayerController_InventoryServices* m_pInventoryServices; // offset 0x7E8, size 0x8, align 8
    CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // offset 0x7F0, size 0x8, align 8
    CCSPlayerController_DamageServices* m_pDamageServices; // offset 0x7F8, size 0x8, align 8
    uint32 m_iPing; // offset 0x800, size 0x4, align 4
    bool m_bHasCommunicationAbuseMute; // offset 0x804, size 0x1, align 1
    char _pad_0805[0x3]; // offset 0x805
    uint32 m_uiCommunicationMuteFlags; // offset 0x808, size 0x4, align 4
    char _pad_080C[0x4]; // offset 0x80C
    CUtlSymbolLarge m_szCrosshairCodes; // offset 0x810, size 0x8, align 8
    uint8 m_iPendingTeamNum; // offset 0x818, size 0x1, align 1
    char _pad_0819[0x3]; // offset 0x819
    GameTime_t m_flForceTeamTime; // offset 0x81C, size 0x4, align 255
    int32 m_iCompTeammateColor; // offset 0x820, size 0x4, align 4
    bool m_bEverPlayedOnTeam; // offset 0x824, size 0x1, align 1
    bool m_bAttemptedToGetColor; // offset 0x825, size 0x1, align 1
    char _pad_0826[0x2]; // offset 0x826
    int32 m_iTeammatePreferredColor; // offset 0x828, size 0x4, align 4
    bool m_bTeamChanged; // offset 0x82C, size 0x1, align 1
    bool m_bInSwitchTeam; // offset 0x82D, size 0x1, align 1
    bool m_bHasSeenJoinGame; // offset 0x82E, size 0x1, align 1
    bool m_bJustBecameSpectator; // offset 0x82F, size 0x1, align 1
    bool m_bSwitchTeamsOnNextRoundReset; // offset 0x830, size 0x1, align 1
    bool m_bRemoveAllItemsOnNextRoundReset; // offset 0x831, size 0x1, align 1
    char _pad_0832[0x2]; // offset 0x832
    GameTime_t m_flLastJoinTeamTime; // offset 0x834, size 0x4, align 255
    CUtlSymbolLarge m_szClan; // offset 0x838, size 0x8, align 8
    int32 m_iCoachingTeam; // offset 0x840, size 0x4, align 4
    char _pad_0844[0x4]; // offset 0x844
    uint64 m_nPlayerDominated; // offset 0x848, size 0x8, align 8
    uint64 m_nPlayerDominatingMe; // offset 0x850, size 0x8, align 8
    int32 m_iCompetitiveRanking; // offset 0x858, size 0x4, align 4
    int32 m_iCompetitiveWins; // offset 0x85C, size 0x4, align 4
    int8 m_iCompetitiveRankType; // offset 0x860, size 0x1, align 1
    char _pad_0861[0x3]; // offset 0x861
    int32 m_iCompetitiveRankingPredicted_Win; // offset 0x864, size 0x4, align 4
    int32 m_iCompetitiveRankingPredicted_Loss; // offset 0x868, size 0x4, align 4
    int32 m_iCompetitiveRankingPredicted_Tie; // offset 0x86C, size 0x4, align 4
    int32 m_nEndMatchNextMapVote; // offset 0x870, size 0x4, align 4
    uint16 m_unActiveQuestId; // offset 0x874, size 0x2, align 2
    char _pad_0876[0x2]; // offset 0x876
    uint32 m_rtActiveMissionPeriod; // offset 0x878, size 0x4, align 4
    QuestProgress::Reason m_nQuestProgressReason; // offset 0x87C, size 0x4, align 4
    uint32 m_unPlayerTvControlFlags; // offset 0x880, size 0x4, align 4
    char _pad_0884[0x2C]; // offset 0x884
    int32 m_iDraftIndex; // offset 0x8B0, size 0x4, align 4
    uint32 m_msQueuedModeDisconnectionTimestamp; // offset 0x8B4, size 0x4, align 4
    uint32 m_uiAbandonRecordedReason; // offset 0x8B8, size 0x4, align 4
    uint32 m_eNetworkDisconnectionReason; // offset 0x8BC, size 0x4, align 4
    bool m_bCannotBeKicked; // offset 0x8C0, size 0x1, align 1
    bool m_bEverFullyConnected; // offset 0x8C1, size 0x1, align 1
    bool m_bAbandonAllowsSurrender; // offset 0x8C2, size 0x1, align 1
    bool m_bAbandonOffersInstantSurrender; // offset 0x8C3, size 0x1, align 1
    bool m_bDisconnection1MinWarningPrinted; // offset 0x8C4, size 0x1, align 1
    bool m_bScoreReported; // offset 0x8C5, size 0x1, align 1
    char _pad_08C6[0x2]; // offset 0x8C6
    int32 m_nDisconnectionTick; // offset 0x8C8, size 0x4, align 4
    char _pad_08CC[0xC]; // offset 0x8CC
    bool m_bControllingBot; // offset 0x8D8, size 0x1, align 1
    bool m_bHasControlledBotThisRound; // offset 0x8D9, size 0x1, align 1
    bool m_bHasBeenControlledByPlayerThisRound; // offset 0x8DA, size 0x1, align 1
    char _pad_08DB[0x1]; // offset 0x8DB
    int32 m_nBotsControlledThisRound; // offset 0x8DC, size 0x4, align 4
    bool m_bCanControlObservedBot; // offset 0x8E0, size 0x1, align 1
    char _pad_08E1[0x3]; // offset 0x8E1
    CHandle< CCSPlayerPawn > m_hPlayerPawn; // offset 0x8E4, size 0x4, align 4
    CHandle< CCSObserverPawn > m_hObserverPawn; // offset 0x8E8, size 0x4, align 4
    int32 m_DesiredObserverMode; // offset 0x8EC, size 0x4, align 4
    CEntityHandle m_hDesiredObserverTarget; // offset 0x8F0, size 0x4, align 4
    bool m_bPawnIsAlive; // offset 0x8F4, size 0x1, align 1
    char _pad_08F5[0x3]; // offset 0x8F5
    uint32 m_iPawnHealth; // offset 0x8F8, size 0x4, align 4
    int32 m_iPawnArmor; // offset 0x8FC, size 0x4, align 4
    bool m_bPawnHasDefuser; // offset 0x900, size 0x1, align 1
    bool m_bPawnHasHelmet; // offset 0x901, size 0x1, align 1
    uint16 m_nPawnCharacterDefIndex; // offset 0x902, size 0x2, align 2
    int32 m_iPawnLifetimeStart; // offset 0x904, size 0x4, align 4
    int32 m_iPawnLifetimeEnd; // offset 0x908, size 0x4, align 4
    int32 m_iPawnBotDifficulty; // offset 0x90C, size 0x4, align 4
    CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn; // offset 0x910, size 0x4, align 4
    int32 m_iScore; // offset 0x914, size 0x4, align 4
    int32 m_iRoundScore; // offset 0x918, size 0x4, align 4
    int32 m_iRoundsWon; // offset 0x91C, size 0x4, align 4
    uint8[8] m_recentKillQueue; // offset 0x920, size 0x8, align 1
    uint8 m_nFirstKill; // offset 0x928, size 0x1, align 1
    uint8 m_nKillCount; // offset 0x929, size 0x1, align 1
    bool m_bMvpNoMusic; // offset 0x92A, size 0x1, align 1
    char _pad_092B[0x1]; // offset 0x92B
    int32 m_eMvpReason; // offset 0x92C, size 0x4, align 4
    int32 m_iMusicKitID; // offset 0x930, size 0x4, align 4
    int32 m_iMusicKitMVPs; // offset 0x934, size 0x4, align 4
    int32 m_iMVPs; // offset 0x938, size 0x4, align 4
    int32 m_nUpdateCounter; // offset 0x93C, size 0x4, align 4
    float32 m_flSmoothedPing; // offset 0x940, size 0x4, align 4
    char _pad_0944[0x4]; // offset 0x944
    IntervalTimer m_lastHeldVoteTimer; // offset 0x948, size 0x10, align 8
    char _pad_0958[0x8]; // offset 0x958
    bool m_bShowHints; // offset 0x960, size 0x1, align 1
    char _pad_0961[0x3]; // offset 0x961
    int32 m_iNextTimeCheck; // offset 0x964, size 0x4, align 4
    bool m_bJustDidTeamKill; // offset 0x968, size 0x1, align 1
    bool m_bPunishForTeamKill; // offset 0x969, size 0x1, align 1
    bool m_bGaveTeamDamageWarning; // offset 0x96A, size 0x1, align 1
    bool m_bGaveTeamDamageWarningThisRound; // offset 0x96B, size 0x1, align 1
    char _pad_096C[0x4]; // offset 0x96C
    float64 m_dblLastReceivedPacketPlatFloatTime; // offset 0x970, size 0x8, align 8
    GameTime_t m_LastTeamDamageWarningTime; // offset 0x978, size 0x4, align 255
    GameTime_t m_LastTimePlayerWasDisconnectedForPawnsRemove; // offset 0x97C, size 0x4, align 255
    uint32 m_nSuspiciousHitCount; // offset 0x980, size 0x4, align 4
    uint32 m_nNonSuspiciousHitStreak; // offset 0x984, size 0x4, align 4
    char _pad_0988[0xA1]; // offset 0x988
    bool m_bFireBulletsSeedSynchronized; // offset 0xA29, size 0x1, align 1
    char _pad_0A2A[0x7E]; // offset 0xA2A
};
