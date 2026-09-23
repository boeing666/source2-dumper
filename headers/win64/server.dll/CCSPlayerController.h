#pragma once

class CCSPlayerController : public CBasePlayerController /*0x0*/  // sizeof 0xAB8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7E8]; // offset 0x0
    CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // offset 0x7E8, size 0x8, align 8
    CCSPlayerController_InventoryServices* m_pInventoryServices; // offset 0x7F0, size 0x8, align 8
    CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // offset 0x7F8, size 0x8, align 8
    CCSPlayerController_DamageServices* m_pDamageServices; // offset 0x800, size 0x8, align 8
    uint32 m_iPing; // offset 0x808, size 0x4, align 4
    bool m_bHasCommunicationAbuseMute; // offset 0x80C, size 0x1, align 1
    char _pad_080D[0x3]; // offset 0x80D
    uint32 m_uiCommunicationMuteFlags; // offset 0x810, size 0x4, align 4
    char _pad_0814[0x4]; // offset 0x814
    CUtlSymbolLarge m_szCrosshairCodes; // offset 0x818, size 0x8, align 8
    uint8 m_iPendingTeamNum; // offset 0x820, size 0x1, align 1
    char _pad_0821[0x3]; // offset 0x821
    GameTime_t m_flForceTeamTime; // offset 0x824, size 0x4, align 255
    int32 m_iCompTeammateColor; // offset 0x828, size 0x4, align 4
    bool m_bEverPlayedOnTeam; // offset 0x82C, size 0x1, align 1
    bool m_bAttemptedToGetColor; // offset 0x82D, size 0x1, align 1
    char _pad_082E[0x2]; // offset 0x82E
    int32 m_iTeammatePreferredColor; // offset 0x830, size 0x4, align 4
    bool m_bTeamChanged; // offset 0x834, size 0x1, align 1
    bool m_bInSwitchTeam; // offset 0x835, size 0x1, align 1
    bool m_bHasSeenJoinGame; // offset 0x836, size 0x1, align 1
    bool m_bJustBecameSpectator; // offset 0x837, size 0x1, align 1
    bool m_bSwitchTeamsOnNextRoundReset; // offset 0x838, size 0x1, align 1
    bool m_bRemoveAllItemsOnNextRoundReset; // offset 0x839, size 0x1, align 1
    char _pad_083A[0x2]; // offset 0x83A
    GameTime_t m_flLastJoinTeamTime; // offset 0x83C, size 0x4, align 255
    CUtlSymbolLarge m_szClan; // offset 0x840, size 0x8, align 8
    uint32 m_unClanId32bit; // offset 0x848, size 0x4, align 4
    int32 m_iCoachingTeam; // offset 0x84C, size 0x4, align 4
    uint64 m_nPlayerDominated; // offset 0x850, size 0x8, align 8
    uint64 m_nPlayerDominatingMe; // offset 0x858, size 0x8, align 8
    int32 m_iCompetitiveRanking; // offset 0x860, size 0x4, align 4
    int32 m_iCompetitiveWins; // offset 0x864, size 0x4, align 4
    int8 m_iCompetitiveRankType; // offset 0x868, size 0x1, align 1
    char _pad_0869[0x3]; // offset 0x869
    int32 m_iCompetitiveRankingPredicted_Win; // offset 0x86C, size 0x4, align 4
    int32 m_iCompetitiveRankingPredicted_Loss; // offset 0x870, size 0x4, align 4
    int32 m_iCompetitiveRankingPredicted_Tie; // offset 0x874, size 0x4, align 4
    int32 m_nEndMatchNextMapVote; // offset 0x878, size 0x4, align 4
    uint16 m_unActiveQuestId; // offset 0x87C, size 0x2, align 2
    char _pad_087E[0x2]; // offset 0x87E
    uint32 m_rtActiveMissionPeriod; // offset 0x880, size 0x4, align 4
    QuestProgress::Reason m_nQuestProgressReason; // offset 0x884, size 0x4, align 4
    uint32 m_unPlayerTvControlFlags; // offset 0x888, size 0x4, align 4
    char _pad_088C[0x2C]; // offset 0x88C
    int32 m_iDraftIndex; // offset 0x8B8, size 0x4, align 4
    uint32 m_msQueuedModeDisconnectionTimestamp; // offset 0x8BC, size 0x4, align 4
    uint32 m_uiAbandonRecordedReason; // offset 0x8C0, size 0x4, align 4
    uint32 m_eNetworkDisconnectionReason; // offset 0x8C4, size 0x4, align 4
    bool m_bCannotBeKicked; // offset 0x8C8, size 0x1, align 1
    bool m_bEverFullyConnected; // offset 0x8C9, size 0x1, align 1
    bool m_bAbandonAllowsSurrender; // offset 0x8CA, size 0x1, align 1
    bool m_bAbandonOffersInstantSurrender; // offset 0x8CB, size 0x1, align 1
    bool m_bDisconnection1MinWarningPrinted; // offset 0x8CC, size 0x1, align 1
    bool m_bScoreReported; // offset 0x8CD, size 0x1, align 1
    char _pad_08CE[0x2]; // offset 0x8CE
    int32 m_nDisconnectionTick; // offset 0x8D0, size 0x4, align 4
    char _pad_08D4[0xC]; // offset 0x8D4
    bool m_bControllingBot; // offset 0x8E0, size 0x1, align 1
    bool m_bHasControlledBotThisRound; // offset 0x8E1, size 0x1, align 1
    bool m_bHasBeenControlledByPlayerThisRound; // offset 0x8E2, size 0x1, align 1
    char _pad_08E3[0x1]; // offset 0x8E3
    int32 m_nBotsControlledThisRound; // offset 0x8E4, size 0x4, align 4
    bool m_bCanControlObservedBot; // offset 0x8E8, size 0x1, align 1
    char _pad_08E9[0x3]; // offset 0x8E9
    CHandle< CCSPlayerPawn > m_hPlayerPawn; // offset 0x8EC, size 0x4, align 4
    CHandle< CCSObserverPawn > m_hObserverPawn; // offset 0x8F0, size 0x4, align 4
    int32 m_DesiredObserverMode; // offset 0x8F4, size 0x4, align 4
    CEntityHandle m_hDesiredObserverTarget; // offset 0x8F8, size 0x4, align 4
    bool m_bPawnIsAlive; // offset 0x8FC, size 0x1, align 1
    char _pad_08FD[0x3]; // offset 0x8FD
    uint32 m_iPawnHealth; // offset 0x900, size 0x4, align 4
    int32 m_iPawnArmor; // offset 0x904, size 0x4, align 4
    bool m_bPawnHasDefuser; // offset 0x908, size 0x1, align 1
    bool m_bPawnHasHelmet; // offset 0x909, size 0x1, align 1
    uint16 m_nPawnCharacterDefIndex; // offset 0x90A, size 0x2, align 2
    int32 m_iPawnLifetimeStart; // offset 0x90C, size 0x4, align 4
    int32 m_iPawnLifetimeEnd; // offset 0x910, size 0x4, align 4
    int32 m_iPawnBotDifficulty; // offset 0x914, size 0x4, align 4
    CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn; // offset 0x918, size 0x4, align 4
    int32 m_iScore; // offset 0x91C, size 0x4, align 4
    int32 m_iRoundScore; // offset 0x920, size 0x4, align 4
    int32 m_iRoundsWon; // offset 0x924, size 0x4, align 4
    uint8[8] m_recentKillQueue; // offset 0x928, size 0x8, align 1
    uint8 m_nFirstKill; // offset 0x930, size 0x1, align 1
    uint8 m_nKillCount; // offset 0x931, size 0x1, align 1
    bool m_bMvpNoMusic; // offset 0x932, size 0x1, align 1
    char _pad_0933[0x1]; // offset 0x933
    int32 m_eMvpReason; // offset 0x934, size 0x4, align 4
    int32 m_iMusicKitID; // offset 0x938, size 0x4, align 4
    int32 m_iMusicKitMVPs; // offset 0x93C, size 0x4, align 4
    int32 m_iMVPs; // offset 0x940, size 0x4, align 4
    int32 m_nUpdateCounter; // offset 0x944, size 0x4, align 4
    float32 m_flSmoothedPing; // offset 0x948, size 0x4, align 4
    char _pad_094C[0x4]; // offset 0x94C
    IntervalTimer m_lastHeldVoteTimer; // offset 0x950, size 0x10, align 8
    char _pad_0960[0x8]; // offset 0x960
    bool m_bShowHints; // offset 0x968, size 0x1, align 1
    char _pad_0969[0x3]; // offset 0x969
    int32 m_iNextTimeCheck; // offset 0x96C, size 0x4, align 4
    bool m_bJustDidTeamKill; // offset 0x970, size 0x1, align 1
    bool m_bPunishForTeamKill; // offset 0x971, size 0x1, align 1
    bool m_bGaveTeamDamageWarning; // offset 0x972, size 0x1, align 1
    bool m_bGaveTeamDamageWarningThisRound; // offset 0x973, size 0x1, align 1
    char _pad_0974[0x4]; // offset 0x974
    float64 m_dblLastReceivedPacketPlatFloatTime; // offset 0x978, size 0x8, align 8
    GameTime_t m_LastTeamDamageWarningTime; // offset 0x980, size 0x4, align 255
    GameTime_t m_LastTimePlayerWasDisconnectedForPawnsRemove; // offset 0x984, size 0x4, align 255
    uint32 m_nSuspiciousHitCount; // offset 0x988, size 0x4, align 4
    uint32 m_nNonSuspiciousHitStreak; // offset 0x98C, size 0x4, align 4
    char _pad_0990[0xA9]; // offset 0x990
    bool m_bFireBulletsSeedSynchronized; // offset 0xA39, size 0x1, align 1
    char _pad_0A3A[0x7E]; // offset 0xA3A
};
