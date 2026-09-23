#pragma once

class CCSPlayerController : public CBasePlayerController /*0x0*/  // sizeof 0xD90, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAC0]; // offset 0x0
    CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // offset 0xAC0, size 0x8, align 8
    CCSPlayerController_InventoryServices* m_pInventoryServices; // offset 0xAC8, size 0x8, align 8
    CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // offset 0xAD0, size 0x8, align 8
    CCSPlayerController_DamageServices* m_pDamageServices; // offset 0xAD8, size 0x8, align 8
    uint32 m_iPing; // offset 0xAE0, size 0x4, align 4
    bool m_bHasCommunicationAbuseMute; // offset 0xAE4, size 0x1, align 1
    char _pad_0AE5[0x3]; // offset 0xAE5
    uint32 m_uiCommunicationMuteFlags; // offset 0xAE8, size 0x4, align 4
    char _pad_0AEC[0x4]; // offset 0xAEC
    CUtlSymbolLarge m_szCrosshairCodes; // offset 0xAF0, size 0x8, align 8
    uint8 m_iPendingTeamNum; // offset 0xAF8, size 0x1, align 1
    char _pad_0AF9[0x3]; // offset 0xAF9
    GameTime_t m_flForceTeamTime; // offset 0xAFC, size 0x4, align 255
    int32 m_iCompTeammateColor; // offset 0xB00, size 0x4, align 4
    bool m_bEverPlayedOnTeam; // offset 0xB04, size 0x1, align 1
    bool m_bAttemptedToGetColor; // offset 0xB05, size 0x1, align 1
    char _pad_0B06[0x2]; // offset 0xB06
    int32 m_iTeammatePreferredColor; // offset 0xB08, size 0x4, align 4
    bool m_bTeamChanged; // offset 0xB0C, size 0x1, align 1
    bool m_bInSwitchTeam; // offset 0xB0D, size 0x1, align 1
    bool m_bHasSeenJoinGame; // offset 0xB0E, size 0x1, align 1
    bool m_bJustBecameSpectator; // offset 0xB0F, size 0x1, align 1
    bool m_bSwitchTeamsOnNextRoundReset; // offset 0xB10, size 0x1, align 1
    bool m_bRemoveAllItemsOnNextRoundReset; // offset 0xB11, size 0x1, align 1
    char _pad_0B12[0x2]; // offset 0xB12
    GameTime_t m_flLastJoinTeamTime; // offset 0xB14, size 0x4, align 255
    CUtlSymbolLarge m_szClan; // offset 0xB18, size 0x8, align 8
    uint32 m_unClanId32bit; // offset 0xB20, size 0x4, align 4
    int32 m_iCoachingTeam; // offset 0xB24, size 0x4, align 4
    uint64 m_nPlayerDominated; // offset 0xB28, size 0x8, align 8
    uint64 m_nPlayerDominatingMe; // offset 0xB30, size 0x8, align 8
    int32 m_iCompetitiveRanking; // offset 0xB38, size 0x4, align 4
    int32 m_iCompetitiveWins; // offset 0xB3C, size 0x4, align 4
    int8 m_iCompetitiveRankType; // offset 0xB40, size 0x1, align 1
    char _pad_0B41[0x3]; // offset 0xB41
    int32 m_iCompetitiveRankingPredicted_Win; // offset 0xB44, size 0x4, align 4
    int32 m_iCompetitiveRankingPredicted_Loss; // offset 0xB48, size 0x4, align 4
    int32 m_iCompetitiveRankingPredicted_Tie; // offset 0xB4C, size 0x4, align 4
    int32 m_nEndMatchNextMapVote; // offset 0xB50, size 0x4, align 4
    uint16 m_unActiveQuestId; // offset 0xB54, size 0x2, align 2
    char _pad_0B56[0x2]; // offset 0xB56
    uint32 m_rtActiveMissionPeriod; // offset 0xB58, size 0x4, align 4
    QuestProgress::Reason m_nQuestProgressReason; // offset 0xB5C, size 0x4, align 4
    uint32 m_unPlayerTvControlFlags; // offset 0xB60, size 0x4, align 4
    char _pad_0B64[0x2C]; // offset 0xB64
    int32 m_iDraftIndex; // offset 0xB90, size 0x4, align 4
    uint32 m_msQueuedModeDisconnectionTimestamp; // offset 0xB94, size 0x4, align 4
    uint32 m_uiAbandonRecordedReason; // offset 0xB98, size 0x4, align 4
    uint32 m_eNetworkDisconnectionReason; // offset 0xB9C, size 0x4, align 4
    bool m_bCannotBeKicked; // offset 0xBA0, size 0x1, align 1
    bool m_bEverFullyConnected; // offset 0xBA1, size 0x1, align 1
    bool m_bAbandonAllowsSurrender; // offset 0xBA2, size 0x1, align 1
    bool m_bAbandonOffersInstantSurrender; // offset 0xBA3, size 0x1, align 1
    bool m_bDisconnection1MinWarningPrinted; // offset 0xBA4, size 0x1, align 1
    bool m_bScoreReported; // offset 0xBA5, size 0x1, align 1
    char _pad_0BA6[0x2]; // offset 0xBA6
    int32 m_nDisconnectionTick; // offset 0xBA8, size 0x4, align 4
    char _pad_0BAC[0xC]; // offset 0xBAC
    bool m_bControllingBot; // offset 0xBB8, size 0x1, align 1
    bool m_bHasControlledBotThisRound; // offset 0xBB9, size 0x1, align 1
    bool m_bHasBeenControlledByPlayerThisRound; // offset 0xBBA, size 0x1, align 1
    char _pad_0BBB[0x1]; // offset 0xBBB
    int32 m_nBotsControlledThisRound; // offset 0xBBC, size 0x4, align 4
    bool m_bCanControlObservedBot; // offset 0xBC0, size 0x1, align 1
    char _pad_0BC1[0x3]; // offset 0xBC1
    CHandle< CCSPlayerPawn > m_hPlayerPawn; // offset 0xBC4, size 0x4, align 4
    CHandle< CCSObserverPawn > m_hObserverPawn; // offset 0xBC8, size 0x4, align 4
    int32 m_DesiredObserverMode; // offset 0xBCC, size 0x4, align 4
    CEntityHandle m_hDesiredObserverTarget; // offset 0xBD0, size 0x4, align 4
    bool m_bPawnIsAlive; // offset 0xBD4, size 0x1, align 1
    char _pad_0BD5[0x3]; // offset 0xBD5
    uint32 m_iPawnHealth; // offset 0xBD8, size 0x4, align 4
    int32 m_iPawnArmor; // offset 0xBDC, size 0x4, align 4
    bool m_bPawnHasDefuser; // offset 0xBE0, size 0x1, align 1
    bool m_bPawnHasHelmet; // offset 0xBE1, size 0x1, align 1
    uint16 m_nPawnCharacterDefIndex; // offset 0xBE2, size 0x2, align 2
    int32 m_iPawnLifetimeStart; // offset 0xBE4, size 0x4, align 4
    int32 m_iPawnLifetimeEnd; // offset 0xBE8, size 0x4, align 4
    int32 m_iPawnBotDifficulty; // offset 0xBEC, size 0x4, align 4
    CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn; // offset 0xBF0, size 0x4, align 4
    int32 m_iScore; // offset 0xBF4, size 0x4, align 4
    int32 m_iRoundScore; // offset 0xBF8, size 0x4, align 4
    int32 m_iRoundsWon; // offset 0xBFC, size 0x4, align 4
    uint8[8] m_recentKillQueue; // offset 0xC00, size 0x8, align 1
    uint8 m_nFirstKill; // offset 0xC08, size 0x1, align 1
    uint8 m_nKillCount; // offset 0xC09, size 0x1, align 1
    bool m_bMvpNoMusic; // offset 0xC0A, size 0x1, align 1
    char _pad_0C0B[0x1]; // offset 0xC0B
    int32 m_eMvpReason; // offset 0xC0C, size 0x4, align 4
    int32 m_iMusicKitID; // offset 0xC10, size 0x4, align 4
    int32 m_iMusicKitMVPs; // offset 0xC14, size 0x4, align 4
    int32 m_iMVPs; // offset 0xC18, size 0x4, align 4
    int32 m_nUpdateCounter; // offset 0xC1C, size 0x4, align 4
    float32 m_flSmoothedPing; // offset 0xC20, size 0x4, align 4
    char _pad_0C24[0x4]; // offset 0xC24
    IntervalTimer m_lastHeldVoteTimer; // offset 0xC28, size 0x10, align 8
    char _pad_0C38[0x8]; // offset 0xC38
    bool m_bShowHints; // offset 0xC40, size 0x1, align 1
    char _pad_0C41[0x3]; // offset 0xC41
    int32 m_iNextTimeCheck; // offset 0xC44, size 0x4, align 4
    bool m_bJustDidTeamKill; // offset 0xC48, size 0x1, align 1
    bool m_bPunishForTeamKill; // offset 0xC49, size 0x1, align 1
    bool m_bGaveTeamDamageWarning; // offset 0xC4A, size 0x1, align 1
    bool m_bGaveTeamDamageWarningThisRound; // offset 0xC4B, size 0x1, align 1
    char _pad_0C4C[0x4]; // offset 0xC4C
    float64 m_dblLastReceivedPacketPlatFloatTime; // offset 0xC50, size 0x8, align 8
    GameTime_t m_LastTeamDamageWarningTime; // offset 0xC58, size 0x4, align 255
    GameTime_t m_LastTimePlayerWasDisconnectedForPawnsRemove; // offset 0xC5C, size 0x4, align 255
    uint32 m_nSuspiciousHitCount; // offset 0xC60, size 0x4, align 4
    uint32 m_nNonSuspiciousHitStreak; // offset 0xC64, size 0x4, align 4
    char _pad_0C68[0xA9]; // offset 0xC68
    bool m_bFireBulletsSeedSynchronized; // offset 0xD11, size 0x1, align 1
    char _pad_0D12[0x7E]; // offset 0xD12
};
