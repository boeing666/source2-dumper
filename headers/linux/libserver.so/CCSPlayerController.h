#pragma once

class CCSPlayerController : public CBasePlayerController /*0x0*/  // sizeof 0xD80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAB8]; // offset 0x0
    CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // offset 0xAB8, size 0x8, align 8
    CCSPlayerController_InventoryServices* m_pInventoryServices; // offset 0xAC0, size 0x8, align 8
    CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // offset 0xAC8, size 0x8, align 8
    CCSPlayerController_DamageServices* m_pDamageServices; // offset 0xAD0, size 0x8, align 8
    uint32 m_iPing; // offset 0xAD8, size 0x4, align 4
    bool m_bHasCommunicationAbuseMute; // offset 0xADC, size 0x1, align 1
    char _pad_0ADD[0x3]; // offset 0xADD
    uint32 m_uiCommunicationMuteFlags; // offset 0xAE0, size 0x4, align 4
    char _pad_0AE4[0x4]; // offset 0xAE4
    CUtlSymbolLarge m_szCrosshairCodes; // offset 0xAE8, size 0x8, align 8
    uint8 m_iPendingTeamNum; // offset 0xAF0, size 0x1, align 1
    char _pad_0AF1[0x3]; // offset 0xAF1
    GameTime_t m_flForceTeamTime; // offset 0xAF4, size 0x4, align 255
    int32 m_iCompTeammateColor; // offset 0xAF8, size 0x4, align 4
    bool m_bEverPlayedOnTeam; // offset 0xAFC, size 0x1, align 1
    bool m_bAttemptedToGetColor; // offset 0xAFD, size 0x1, align 1
    char _pad_0AFE[0x2]; // offset 0xAFE
    int32 m_iTeammatePreferredColor; // offset 0xB00, size 0x4, align 4
    bool m_bTeamChanged; // offset 0xB04, size 0x1, align 1
    bool m_bInSwitchTeam; // offset 0xB05, size 0x1, align 1
    bool m_bHasSeenJoinGame; // offset 0xB06, size 0x1, align 1
    bool m_bJustBecameSpectator; // offset 0xB07, size 0x1, align 1
    bool m_bSwitchTeamsOnNextRoundReset; // offset 0xB08, size 0x1, align 1
    bool m_bRemoveAllItemsOnNextRoundReset; // offset 0xB09, size 0x1, align 1
    char _pad_0B0A[0x2]; // offset 0xB0A
    GameTime_t m_flLastJoinTeamTime; // offset 0xB0C, size 0x4, align 255
    CUtlSymbolLarge m_szClan; // offset 0xB10, size 0x8, align 8
    int32 m_iCoachingTeam; // offset 0xB18, size 0x4, align 4
    char _pad_0B1C[0x4]; // offset 0xB1C
    uint64 m_nPlayerDominated; // offset 0xB20, size 0x8, align 8
    uint64 m_nPlayerDominatingMe; // offset 0xB28, size 0x8, align 8
    int32 m_iCompetitiveRanking; // offset 0xB30, size 0x4, align 4
    int32 m_iCompetitiveWins; // offset 0xB34, size 0x4, align 4
    int8 m_iCompetitiveRankType; // offset 0xB38, size 0x1, align 1
    char _pad_0B39[0x3]; // offset 0xB39
    int32 m_iCompetitiveRankingPredicted_Win; // offset 0xB3C, size 0x4, align 4
    int32 m_iCompetitiveRankingPredicted_Loss; // offset 0xB40, size 0x4, align 4
    int32 m_iCompetitiveRankingPredicted_Tie; // offset 0xB44, size 0x4, align 4
    int32 m_nEndMatchNextMapVote; // offset 0xB48, size 0x4, align 4
    uint16 m_unActiveQuestId; // offset 0xB4C, size 0x2, align 2
    char _pad_0B4E[0x2]; // offset 0xB4E
    uint32 m_rtActiveMissionPeriod; // offset 0xB50, size 0x4, align 4
    QuestProgress::Reason m_nQuestProgressReason; // offset 0xB54, size 0x4, align 4
    uint32 m_unPlayerTvControlFlags; // offset 0xB58, size 0x4, align 4
    char _pad_0B5C[0x2C]; // offset 0xB5C
    int32 m_iDraftIndex; // offset 0xB88, size 0x4, align 4
    uint32 m_msQueuedModeDisconnectionTimestamp; // offset 0xB8C, size 0x4, align 4
    uint32 m_uiAbandonRecordedReason; // offset 0xB90, size 0x4, align 4
    uint32 m_eNetworkDisconnectionReason; // offset 0xB94, size 0x4, align 4
    bool m_bCannotBeKicked; // offset 0xB98, size 0x1, align 1
    bool m_bEverFullyConnected; // offset 0xB99, size 0x1, align 1
    bool m_bAbandonAllowsSurrender; // offset 0xB9A, size 0x1, align 1
    bool m_bAbandonOffersInstantSurrender; // offset 0xB9B, size 0x1, align 1
    bool m_bDisconnection1MinWarningPrinted; // offset 0xB9C, size 0x1, align 1
    bool m_bScoreReported; // offset 0xB9D, size 0x1, align 1
    char _pad_0B9E[0x2]; // offset 0xB9E
    int32 m_nDisconnectionTick; // offset 0xBA0, size 0x4, align 4
    char _pad_0BA4[0xC]; // offset 0xBA4
    bool m_bControllingBot; // offset 0xBB0, size 0x1, align 1
    bool m_bHasControlledBotThisRound; // offset 0xBB1, size 0x1, align 1
    bool m_bHasBeenControlledByPlayerThisRound; // offset 0xBB2, size 0x1, align 1
    char _pad_0BB3[0x1]; // offset 0xBB3
    int32 m_nBotsControlledThisRound; // offset 0xBB4, size 0x4, align 4
    bool m_bCanControlObservedBot; // offset 0xBB8, size 0x1, align 1
    char _pad_0BB9[0x3]; // offset 0xBB9
    CHandle< CCSPlayerPawn > m_hPlayerPawn; // offset 0xBBC, size 0x4, align 4
    CHandle< CCSObserverPawn > m_hObserverPawn; // offset 0xBC0, size 0x4, align 4
    int32 m_DesiredObserverMode; // offset 0xBC4, size 0x4, align 4
    CEntityHandle m_hDesiredObserverTarget; // offset 0xBC8, size 0x4, align 4
    bool m_bPawnIsAlive; // offset 0xBCC, size 0x1, align 1
    char _pad_0BCD[0x3]; // offset 0xBCD
    uint32 m_iPawnHealth; // offset 0xBD0, size 0x4, align 4
    int32 m_iPawnArmor; // offset 0xBD4, size 0x4, align 4
    bool m_bPawnHasDefuser; // offset 0xBD8, size 0x1, align 1
    bool m_bPawnHasHelmet; // offset 0xBD9, size 0x1, align 1
    uint16 m_nPawnCharacterDefIndex; // offset 0xBDA, size 0x2, align 2
    int32 m_iPawnLifetimeStart; // offset 0xBDC, size 0x4, align 4
    int32 m_iPawnLifetimeEnd; // offset 0xBE0, size 0x4, align 4
    int32 m_iPawnBotDifficulty; // offset 0xBE4, size 0x4, align 4
    CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn; // offset 0xBE8, size 0x4, align 4
    int32 m_iScore; // offset 0xBEC, size 0x4, align 4
    int32 m_iRoundScore; // offset 0xBF0, size 0x4, align 4
    int32 m_iRoundsWon; // offset 0xBF4, size 0x4, align 4
    uint8[8] m_recentKillQueue; // offset 0xBF8, size 0x8, align 1
    uint8 m_nFirstKill; // offset 0xC00, size 0x1, align 1
    uint8 m_nKillCount; // offset 0xC01, size 0x1, align 1
    bool m_bMvpNoMusic; // offset 0xC02, size 0x1, align 1
    char _pad_0C03[0x1]; // offset 0xC03
    int32 m_eMvpReason; // offset 0xC04, size 0x4, align 4
    int32 m_iMusicKitID; // offset 0xC08, size 0x4, align 4
    int32 m_iMusicKitMVPs; // offset 0xC0C, size 0x4, align 4
    int32 m_iMVPs; // offset 0xC10, size 0x4, align 4
    int32 m_nUpdateCounter; // offset 0xC14, size 0x4, align 4
    float32 m_flSmoothedPing; // offset 0xC18, size 0x4, align 4
    char _pad_0C1C[0x4]; // offset 0xC1C
    IntervalTimer m_lastHeldVoteTimer; // offset 0xC20, size 0x10, align 8
    char _pad_0C30[0x8]; // offset 0xC30
    bool m_bShowHints; // offset 0xC38, size 0x1, align 1
    char _pad_0C39[0x3]; // offset 0xC39
    int32 m_iNextTimeCheck; // offset 0xC3C, size 0x4, align 4
    bool m_bJustDidTeamKill; // offset 0xC40, size 0x1, align 1
    bool m_bPunishForTeamKill; // offset 0xC41, size 0x1, align 1
    bool m_bGaveTeamDamageWarning; // offset 0xC42, size 0x1, align 1
    bool m_bGaveTeamDamageWarningThisRound; // offset 0xC43, size 0x1, align 1
    char _pad_0C44[0x4]; // offset 0xC44
    float64 m_dblLastReceivedPacketPlatFloatTime; // offset 0xC48, size 0x8, align 8
    GameTime_t m_LastTeamDamageWarningTime; // offset 0xC50, size 0x4, align 255
    GameTime_t m_LastTimePlayerWasDisconnectedForPawnsRemove; // offset 0xC54, size 0x4, align 255
    uint32 m_nSuspiciousHitCount; // offset 0xC58, size 0x4, align 4
    uint32 m_nNonSuspiciousHitStreak; // offset 0xC5C, size 0x4, align 4
    char _pad_0C60[0xA1]; // offset 0xC60
    bool m_bFireBulletsSeedSynchronized; // offset 0xD01, size 0x1, align 1
    char _pad_0D02[0x7E]; // offset 0xD02
};
