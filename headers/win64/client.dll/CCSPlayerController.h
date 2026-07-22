#pragma once

class CCSPlayerController : public CBasePlayerController /*0x0*/  // sizeof 0x960, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x810]; // offset 0x0
    CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // offset 0x810, size 0x8, align 8
    CCSPlayerController_InventoryServices* m_pInventoryServices; // offset 0x818, size 0x8, align 8
    CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // offset 0x820, size 0x8, align 8
    CCSPlayerController_DamageServices* m_pDamageServices; // offset 0x828, size 0x8, align 8
    uint32 m_iPing; // offset 0x830, size 0x4, align 4
    bool m_bHasCommunicationAbuseMute; // offset 0x834, size 0x1, align 1
    char _pad_0835[0x3]; // offset 0x835
    uint32 m_uiCommunicationMuteFlags; // offset 0x838, size 0x4, align 4
    char _pad_083C[0x4]; // offset 0x83C
    CUtlSymbolLarge m_szCrosshairCodes; // offset 0x840, size 0x8, align 8
    uint8 m_iPendingTeamNum; // offset 0x848, size 0x1, align 1
    char _pad_0849[0x3]; // offset 0x849
    GameTime_t m_flForceTeamTime; // offset 0x84C, size 0x4, align 255
    int32 m_iCompTeammateColor; // offset 0x850, size 0x4, align 4
    bool m_bEverPlayedOnTeam; // offset 0x854, size 0x1, align 1
    char _pad_0855[0x3]; // offset 0x855
    GameTime_t m_flPreviousForceJoinTeamTime; // offset 0x858, size 0x4, align 255
    char _pad_085C[0x4]; // offset 0x85C
    CUtlSymbolLarge m_szClan; // offset 0x860, size 0x8, align 8
    CUtlString m_sSanitizedPlayerName; // offset 0x868, size 0x8, align 8
    int32 m_iCoachingTeam; // offset 0x870, size 0x4, align 4
    char _pad_0874[0x4]; // offset 0x874
    uint64 m_nPlayerDominated; // offset 0x878, size 0x8, align 8
    uint64 m_nPlayerDominatingMe; // offset 0x880, size 0x8, align 8
    int32 m_iCompetitiveRanking; // offset 0x888, size 0x4, align 4
    int32 m_iCompetitiveWins; // offset 0x88C, size 0x4, align 4
    int8 m_iCompetitiveRankType; // offset 0x890, size 0x1, align 1
    char _pad_0891[0x3]; // offset 0x891
    int32 m_iCompetitiveRankingPredicted_Win; // offset 0x894, size 0x4, align 4
    int32 m_iCompetitiveRankingPredicted_Loss; // offset 0x898, size 0x4, align 4
    int32 m_iCompetitiveRankingPredicted_Tie; // offset 0x89C, size 0x4, align 4
    int32 m_nEndMatchNextMapVote; // offset 0x8A0, size 0x4, align 4
    uint16 m_unActiveQuestId; // offset 0x8A4, size 0x2, align 2
    char _pad_08A6[0x2]; // offset 0x8A6
    uint32 m_rtActiveMissionPeriod; // offset 0x8A8, size 0x4, align 4
    QuestProgress::Reason m_nQuestProgressReason; // offset 0x8AC, size 0x4, align 4
    uint32 m_unPlayerTvControlFlags; // offset 0x8B0, size 0x4, align 4
    char _pad_08B4[0x2C]; // offset 0x8B4
    int32 m_iDraftIndex; // offset 0x8E0, size 0x4, align 4
    uint32 m_msQueuedModeDisconnectionTimestamp; // offset 0x8E4, size 0x4, align 4
    uint32 m_uiAbandonRecordedReason; // offset 0x8E8, size 0x4, align 4
    uint32 m_eNetworkDisconnectionReason; // offset 0x8EC, size 0x4, align 4
    bool m_bCannotBeKicked; // offset 0x8F0, size 0x1, align 1
    bool m_bEverFullyConnected; // offset 0x8F1, size 0x1, align 1
    bool m_bAbandonAllowsSurrender; // offset 0x8F2, size 0x1, align 1
    bool m_bAbandonOffersInstantSurrender; // offset 0x8F3, size 0x1, align 1
    bool m_bDisconnection1MinWarningPrinted; // offset 0x8F4, size 0x1, align 1
    bool m_bScoreReported; // offset 0x8F5, size 0x1, align 1
    char _pad_08F6[0x2]; // offset 0x8F6
    int32 m_nDisconnectionTick; // offset 0x8F8, size 0x4, align 4
    char _pad_08FC[0xC]; // offset 0x8FC
    bool m_bControllingBot; // offset 0x908, size 0x1, align 1
    bool m_bHasControlledBotThisRound; // offset 0x909, size 0x1, align 1
    bool m_bHasBeenControlledByPlayerThisRound; // offset 0x90A, size 0x1, align 1
    char _pad_090B[0x1]; // offset 0x90B
    int32 m_nBotsControlledThisRound; // offset 0x90C, size 0x4, align 4
    bool m_bCanControlObservedBot; // offset 0x910, size 0x1, align 1
    char _pad_0911[0x3]; // offset 0x911
    CHandle< C_CSPlayerPawn > m_hPlayerPawn; // offset 0x914, size 0x4, align 4
    CHandle< C_CSObserverPawn > m_hObserverPawn; // offset 0x918, size 0x4, align 4
    bool m_bPawnIsAlive; // offset 0x91C, size 0x1, align 1
    char _pad_091D[0x3]; // offset 0x91D
    uint32 m_iPawnHealth; // offset 0x920, size 0x4, align 4
    int32 m_iPawnArmor; // offset 0x924, size 0x4, align 4
    bool m_bPawnHasDefuser; // offset 0x928, size 0x1, align 1
    bool m_bPawnHasHelmet; // offset 0x929, size 0x1, align 1
    uint16 m_nPawnCharacterDefIndex; // offset 0x92A, size 0x2, align 2
    int32 m_iPawnLifetimeStart; // offset 0x92C, size 0x4, align 4
    int32 m_iPawnLifetimeEnd; // offset 0x930, size 0x4, align 4
    int32 m_iPawnBotDifficulty; // offset 0x934, size 0x4, align 4
    CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn; // offset 0x938, size 0x4, align 4
    int32 m_iScore; // offset 0x93C, size 0x4, align 4
    uint8[8] m_recentKillQueue; // offset 0x940, size 0x8, align 1
    uint8 m_nFirstKill; // offset 0x948, size 0x1, align 1
    uint8 m_nKillCount; // offset 0x949, size 0x1, align 1
    bool m_bMvpNoMusic; // offset 0x94A, size 0x1, align 1
    char _pad_094B[0x1]; // offset 0x94B
    int32 m_eMvpReason; // offset 0x94C, size 0x4, align 4
    int32 m_iMusicKitID; // offset 0x950, size 0x4, align 4
    int32 m_iMusicKitMVPs; // offset 0x954, size 0x4, align 4
    int32 m_iMVPs; // offset 0x958, size 0x4, align 4
    bool m_bIsPlayerNameDirty; // offset 0x95C, size 0x1, align 1
    bool m_bFireBulletsSeedSynchronized; // offset 0x95D, size 0x1, align 1
    char _pad_095E[0x2]; // offset 0x95E
};
