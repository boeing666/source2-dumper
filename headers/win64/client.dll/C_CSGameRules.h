#pragma once

class C_CSGameRules : public C_TeamplayRules /*0x0*/  // sizeof 0x4F60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x40]; // offset 0x0
    bool m_bFreezePeriod; // offset 0x40, size 0x1, align 1
    bool m_bWarmupPeriod; // offset 0x41, size 0x1, align 1
    char _pad_0042[0x2]; // offset 0x42
    GameTime_t m_fWarmupPeriodEnd; // offset 0x44, size 0x4, align 255
    GameTime_t m_fWarmupPeriodStart; // offset 0x48, size 0x4, align 255
    bool m_bTerroristTimeOutActive; // offset 0x4C, size 0x1, align 1
    bool m_bCTTimeOutActive; // offset 0x4D, size 0x1, align 1
    char _pad_004E[0x2]; // offset 0x4E
    float32 m_flTerroristTimeOutRemaining; // offset 0x50, size 0x4, align 4
    float32 m_flCTTimeOutRemaining; // offset 0x54, size 0x4, align 4
    int32 m_nTerroristTimeOuts; // offset 0x58, size 0x4, align 4
    int32 m_nCTTimeOuts; // offset 0x5C, size 0x4, align 4
    bool m_bTechnicalTimeOut; // offset 0x60, size 0x1, align 1
    bool m_bMatchWaitingForResume; // offset 0x61, size 0x1, align 1
    char _pad_0062[0x2]; // offset 0x62
    int32 m_iFreezeTime; // offset 0x64, size 0x4, align 4
    int32 m_iRoundTime; // offset 0x68, size 0x4, align 4
    float32 m_fMatchStartTime; // offset 0x6C, size 0x4, align 4
    GameTime_t m_fRoundStartTime; // offset 0x70, size 0x4, align 255
    GameTime_t m_flRestartRoundTime; // offset 0x74, size 0x4, align 255
    bool m_bGameRestart; // offset 0x78, size 0x1, align 1
    char _pad_0079[0x3]; // offset 0x79
    float32 m_flGameStartTime; // offset 0x7C, size 0x4, align 4
    float32 m_timeUntilNextPhaseStarts; // offset 0x80, size 0x4, align 4
    int32 m_gamePhase; // offset 0x84, size 0x4, align 4
    int32 m_totalRoundsPlayed; // offset 0x88, size 0x4, align 4
    int32 m_nRoundsPlayedThisPhase; // offset 0x8C, size 0x4, align 4
    int32 m_nOvertimePlaying; // offset 0x90, size 0x4, align 4
    int32 m_iHostagesRemaining; // offset 0x94, size 0x4, align 4
    bool m_bAnyHostageReached; // offset 0x98, size 0x1, align 1
    bool m_bMapHasBombTarget; // offset 0x99, size 0x1, align 1
    bool m_bMapHasRescueZone; // offset 0x9A, size 0x1, align 1
    bool m_bMapHasBuyZone; // offset 0x9B, size 0x1, align 1
    bool m_bIsQueuedMatchmaking; // offset 0x9C, size 0x1, align 1
    char _pad_009D[0x3]; // offset 0x9D
    int32 m_nQueuedMatchmakingMode; // offset 0xA0, size 0x4, align 4
    bool m_bIsValveDS; // offset 0xA4, size 0x1, align 1
    bool m_bLogoMap; // offset 0xA5, size 0x1, align 1
    bool m_bPlayAllStepSoundsOnServer; // offset 0xA6, size 0x1, align 1
    char _pad_00A7[0x1]; // offset 0xA7
    int32 m_iSpectatorSlotCount; // offset 0xA8, size 0x4, align 4
    int32 m_MatchDevice; // offset 0xAC, size 0x4, align 4
    bool m_bHasMatchStarted; // offset 0xB0, size 0x1, align 1
    char _pad_00B1[0x3]; // offset 0xB1
    int32 m_nNextMapInMapgroup; // offset 0xB4, size 0x4, align 4
    char[512] m_szTournamentEventName; // offset 0xB8, size 0x200, align 1
    char[512] m_szTournamentEventStage; // offset 0x2B8, size 0x200, align 1
    char[512] m_szMatchStatTxt; // offset 0x4B8, size 0x200, align 1
    char[512] m_szTournamentPredictionsTxt; // offset 0x6B8, size 0x200, align 1
    int32 m_nTournamentPredictionsPct; // offset 0x8B8, size 0x4, align 4
    GameTime_t m_flCMMItemDropRevealStartTime; // offset 0x8BC, size 0x4, align 255
    GameTime_t m_flCMMItemDropRevealEndTime; // offset 0x8C0, size 0x4, align 255
    bool m_bIsDroppingItems; // offset 0x8C4, size 0x1, align 1
    bool m_bIsQuestEligible; // offset 0x8C5, size 0x1, align 1
    bool m_bIsHltvActive; // offset 0x8C6, size 0x1, align 1
    bool m_bBombPlanted; // offset 0x8C7, size 0x1, align 1
    uint16[100] m_arrProhibitedItemIndices; // offset 0x8C8, size 0xC8, align 2
    uint32[4] m_arrTournamentActiveCasterAccounts; // offset 0x990, size 0x10, align 4
    int32 m_numBestOfMaps; // offset 0x9A0, size 0x4, align 4
    int32 m_nHalloweenMaskListSeed; // offset 0x9A4, size 0x4, align 4
    bool m_bBombDropped; // offset 0x9A8, size 0x1, align 1
    char _pad_09A9[0x3]; // offset 0x9A9
    int32 m_iRoundWinStatus; // offset 0x9AC, size 0x4, align 4
    int32 m_eRoundWinReason; // offset 0x9B0, size 0x4, align 4
    bool m_bTCantBuy; // offset 0x9B4, size 0x1, align 1
    bool m_bCTCantBuy; // offset 0x9B5, size 0x1, align 1
    char _pad_09B6[0x2]; // offset 0x9B6
    int32[30] m_iMatchStats_RoundResults; // offset 0x9B8, size 0x78, align 4
    int32[30] m_iMatchStats_PlayersAlive_CT; // offset 0xA30, size 0x78, align 4
    int32[30] m_iMatchStats_PlayersAlive_T; // offset 0xAA8, size 0x78, align 4
    float32[32] m_TeamRespawnWaveTimes; // offset 0xB20, size 0x80, align 4
    GameTime_t[32] m_flNextRespawnWave; // offset 0xBA0, size 0x80, align 4
    VectorWS m_vMinimapMins; // offset 0xC20, size 0xC, align 4
    VectorWS m_vMinimapMaxs; // offset 0xC2C, size 0xC, align 4
    float32[8] m_MinimapVerticalSectionHeights; // offset 0xC38, size 0x20, align 4
    uint64 m_ullLocalMatchID; // offset 0xC58, size 0x8, align 8
    int32[10] m_nEndMatchMapGroupVoteTypes; // offset 0xC60, size 0x28, align 4
    int32[10] m_nEndMatchMapGroupVoteOptions; // offset 0xC88, size 0x28, align 4
    int32 m_nEndMatchMapVoteWinner; // offset 0xCB0, size 0x4, align 4
    int32 m_iNumConsecutiveCTLoses; // offset 0xCB4, size 0x4, align 4
    int32 m_iNumConsecutiveTerroristLoses; // offset 0xCB8, size 0x4, align 4
    char _pad_0CBC[0xBC]; // offset 0xCBC
    int32 m_nMatchAbortedEarlyReason; // offset 0xD78, size 0x4, align 4
    bool m_bHasTriggeredRoundStartMusic; // offset 0xD7C, size 0x1, align 1
    bool m_bSwitchingTeamsAtRoundReset; // offset 0xD7D, size 0x1, align 1
    char _pad_0D7E[0x1A]; // offset 0xD7E
    CCSGameModeRules* m_pGameModeRules; // offset 0xD98, size 0x8, align 8
    C_RetakeGameRules m_RetakeRules; // offset 0xDA0, size 0x158, align 255
    uint8 m_nMatchEndCount; // offset 0xEF8, size 0x1, align 1
    char _pad_0EF9[0x3]; // offset 0xEF9
    int32 m_nTTeamIntroVariant; // offset 0xEFC, size 0x4, align 4
    int32 m_nCTTeamIntroVariant; // offset 0xF00, size 0x4, align 4
    bool m_bTeamIntroPeriod; // offset 0xF04, size 0x1, align 1
    char _pad_0F05[0x3]; // offset 0xF05
    int32 m_iRoundEndWinnerTeam; // offset 0xF08, size 0x4, align 4
    int32 m_eRoundEndReason; // offset 0xF0C, size 0x4, align 4
    bool m_bRoundEndShowTimerDefend; // offset 0xF10, size 0x1, align 1
    char _pad_0F11[0x3]; // offset 0xF11
    int32 m_iRoundEndTimerTime; // offset 0xF14, size 0x4, align 4
    CUtlString m_sRoundEndFunFactToken; // offset 0xF18, size 0x8, align 8
    CPlayerSlot m_iRoundEndFunFactPlayerSlot; // offset 0xF20, size 0x4, align 4
    int32 m_iRoundEndFunFactData1; // offset 0xF24, size 0x4, align 4
    int32 m_iRoundEndFunFactData2; // offset 0xF28, size 0x4, align 4
    int32 m_iRoundEndFunFactData3; // offset 0xF2C, size 0x4, align 4
    CUtlString m_sRoundEndMessage; // offset 0xF30, size 0x8, align 8
    int32 m_iRoundEndPlayerCount; // offset 0xF38, size 0x4, align 4
    bool m_bRoundEndNoMusic; // offset 0xF3C, size 0x1, align 1
    char _pad_0F3D[0x3]; // offset 0xF3D
    int32 m_iRoundEndLegacy; // offset 0xF40, size 0x4, align 4
    uint8 m_nRoundEndCount; // offset 0xF44, size 0x1, align 1
    char _pad_0F45[0x3]; // offset 0xF45
    int32 m_iRoundStartRoundNumber; // offset 0xF48, size 0x4, align 4
    uint8 m_nRoundStartCount; // offset 0xF4C, size 0x1, align 1
    char _pad_0F4D[0x400B]; // offset 0xF4D
    float64 m_flLastPerfSampleTime; // offset 0x4F58, size 0x8, align 8
};
