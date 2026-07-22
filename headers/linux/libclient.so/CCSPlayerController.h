#pragma once

class CCSPlayerController : public CBasePlayerController /*0x0*/  // sizeof 0xAE0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x990]; // offset 0x0
    CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // offset 0x990, size 0x8, align 8
    CCSPlayerController_InventoryServices* m_pInventoryServices; // offset 0x998, size 0x8, align 8
    CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // offset 0x9A0, size 0x8, align 8
    CCSPlayerController_DamageServices* m_pDamageServices; // offset 0x9A8, size 0x8, align 8
    uint32 m_iPing; // offset 0x9B0, size 0x4, align 4
    bool m_bHasCommunicationAbuseMute; // offset 0x9B4, size 0x1, align 1
    char _pad_09B5[0x3]; // offset 0x9B5
    uint32 m_uiCommunicationMuteFlags; // offset 0x9B8, size 0x4, align 4
    char _pad_09BC[0x4]; // offset 0x9BC
    CUtlSymbolLarge m_szCrosshairCodes; // offset 0x9C0, size 0x8, align 8
    uint8 m_iPendingTeamNum; // offset 0x9C8, size 0x1, align 1
    char _pad_09C9[0x3]; // offset 0x9C9
    GameTime_t m_flForceTeamTime; // offset 0x9CC, size 0x4, align 255
    int32 m_iCompTeammateColor; // offset 0x9D0, size 0x4, align 4
    bool m_bEverPlayedOnTeam; // offset 0x9D4, size 0x1, align 1
    char _pad_09D5[0x3]; // offset 0x9D5
    GameTime_t m_flPreviousForceJoinTeamTime; // offset 0x9D8, size 0x4, align 255
    char _pad_09DC[0x4]; // offset 0x9DC
    CUtlSymbolLarge m_szClan; // offset 0x9E0, size 0x8, align 8
    CUtlString m_sSanitizedPlayerName; // offset 0x9E8, size 0x8, align 8
    int32 m_iCoachingTeam; // offset 0x9F0, size 0x4, align 4
    char _pad_09F4[0x4]; // offset 0x9F4
    uint64 m_nPlayerDominated; // offset 0x9F8, size 0x8, align 8
    uint64 m_nPlayerDominatingMe; // offset 0xA00, size 0x8, align 8
    int32 m_iCompetitiveRanking; // offset 0xA08, size 0x4, align 4
    int32 m_iCompetitiveWins; // offset 0xA0C, size 0x4, align 4
    int8 m_iCompetitiveRankType; // offset 0xA10, size 0x1, align 1
    char _pad_0A11[0x3]; // offset 0xA11
    int32 m_iCompetitiveRankingPredicted_Win; // offset 0xA14, size 0x4, align 4
    int32 m_iCompetitiveRankingPredicted_Loss; // offset 0xA18, size 0x4, align 4
    int32 m_iCompetitiveRankingPredicted_Tie; // offset 0xA1C, size 0x4, align 4
    int32 m_nEndMatchNextMapVote; // offset 0xA20, size 0x4, align 4
    uint16 m_unActiveQuestId; // offset 0xA24, size 0x2, align 2
    char _pad_0A26[0x2]; // offset 0xA26
    uint32 m_rtActiveMissionPeriod; // offset 0xA28, size 0x4, align 4
    QuestProgress::Reason m_nQuestProgressReason; // offset 0xA2C, size 0x4, align 4
    uint32 m_unPlayerTvControlFlags; // offset 0xA30, size 0x4, align 4
    char _pad_0A34[0x2C]; // offset 0xA34
    int32 m_iDraftIndex; // offset 0xA60, size 0x4, align 4
    uint32 m_msQueuedModeDisconnectionTimestamp; // offset 0xA64, size 0x4, align 4
    uint32 m_uiAbandonRecordedReason; // offset 0xA68, size 0x4, align 4
    uint32 m_eNetworkDisconnectionReason; // offset 0xA6C, size 0x4, align 4
    bool m_bCannotBeKicked; // offset 0xA70, size 0x1, align 1
    bool m_bEverFullyConnected; // offset 0xA71, size 0x1, align 1
    bool m_bAbandonAllowsSurrender; // offset 0xA72, size 0x1, align 1
    bool m_bAbandonOffersInstantSurrender; // offset 0xA73, size 0x1, align 1
    bool m_bDisconnection1MinWarningPrinted; // offset 0xA74, size 0x1, align 1
    bool m_bScoreReported; // offset 0xA75, size 0x1, align 1
    char _pad_0A76[0x2]; // offset 0xA76
    int32 m_nDisconnectionTick; // offset 0xA78, size 0x4, align 4
    char _pad_0A7C[0xC]; // offset 0xA7C
    bool m_bControllingBot; // offset 0xA88, size 0x1, align 1
    bool m_bHasControlledBotThisRound; // offset 0xA89, size 0x1, align 1
    bool m_bHasBeenControlledByPlayerThisRound; // offset 0xA8A, size 0x1, align 1
    char _pad_0A8B[0x1]; // offset 0xA8B
    int32 m_nBotsControlledThisRound; // offset 0xA8C, size 0x4, align 4
    bool m_bCanControlObservedBot; // offset 0xA90, size 0x1, align 1
    char _pad_0A91[0x3]; // offset 0xA91
    CHandle< C_CSPlayerPawn > m_hPlayerPawn; // offset 0xA94, size 0x4, align 4
    CHandle< C_CSObserverPawn > m_hObserverPawn; // offset 0xA98, size 0x4, align 4
    bool m_bPawnIsAlive; // offset 0xA9C, size 0x1, align 1
    char _pad_0A9D[0x3]; // offset 0xA9D
    uint32 m_iPawnHealth; // offset 0xAA0, size 0x4, align 4
    int32 m_iPawnArmor; // offset 0xAA4, size 0x4, align 4
    bool m_bPawnHasDefuser; // offset 0xAA8, size 0x1, align 1
    bool m_bPawnHasHelmet; // offset 0xAA9, size 0x1, align 1
    uint16 m_nPawnCharacterDefIndex; // offset 0xAAA, size 0x2, align 2
    int32 m_iPawnLifetimeStart; // offset 0xAAC, size 0x4, align 4
    int32 m_iPawnLifetimeEnd; // offset 0xAB0, size 0x4, align 4
    int32 m_iPawnBotDifficulty; // offset 0xAB4, size 0x4, align 4
    CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn; // offset 0xAB8, size 0x4, align 4
    int32 m_iScore; // offset 0xABC, size 0x4, align 4
    uint8[8] m_recentKillQueue; // offset 0xAC0, size 0x8, align 1
    uint8 m_nFirstKill; // offset 0xAC8, size 0x1, align 1
    uint8 m_nKillCount; // offset 0xAC9, size 0x1, align 1
    bool m_bMvpNoMusic; // offset 0xACA, size 0x1, align 1
    char _pad_0ACB[0x1]; // offset 0xACB
    int32 m_eMvpReason; // offset 0xACC, size 0x4, align 4
    int32 m_iMusicKitID; // offset 0xAD0, size 0x4, align 4
    int32 m_iMusicKitMVPs; // offset 0xAD4, size 0x4, align 4
    int32 m_iMVPs; // offset 0xAD8, size 0x4, align 4
    bool m_bIsPlayerNameDirty; // offset 0xADC, size 0x1, align 1
    bool m_bFireBulletsSeedSynchronized; // offset 0xADD, size 0x1, align 1
    char _pad_0ADE[0x2]; // offset 0xADE
};
