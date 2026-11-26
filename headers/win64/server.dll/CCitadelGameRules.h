#pragma once

class CCitadelGameRules : public CTeamplayRules /*0x0*/  // sizeof 0x29F0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xE0]; // offset 0x0
    bool m_bFreezePeriod; // offset 0xE0, size 0x1, align 1
    char _pad_00E1[0x3]; // offset 0xE1
    GameTime_t m_fLevelStartTime; // offset 0xE4, size 0x4, align 255
    GameTime_t m_flGameStartTime; // offset 0xE8, size 0x4, align 255
    GameTime_t m_flGameStateStartTime; // offset 0xEC, size 0x4, align 255
    GameTime_t m_flGameStateEndTime; // offset 0xF0, size 0x4, align 255
    GameTime_t m_flRoundStartTime; // offset 0xF4, size 0x4, align 255
    float32 m_flPlayOfTheGameStateEndTime; // offset 0xF8, size 0x4, align 4
    EGameState m_eGameState; // offset 0xFC, size 0x4, align 4
    CHandle< CBaseEntity > m_hTowerAmber; // offset 0x100, size 0x4, align 4
    CHandle< CBaseEntity > m_hTowerSapphire; // offset 0x104, size 0x4, align 4
    bool m_bEnemyInAmberBase; // offset 0x108, size 0x1, align 1
    bool m_bEnemyInSapphireBase; // offset 0x109, size 0x1, align 1
    bool m_bEnemyPlayersInAmberBase; // offset 0x10A, size 0x1, align 1
    bool m_bEnemyPlayersInSapphireBase; // offset 0x10B, size 0x1, align 1
    VectorWS m_vMinimapMins; // offset 0x10C, size 0xC, align 4
    VectorWS m_vMinimapMaxs; // offset 0x118, size 0xC, align 4
    bool m_bMatchSafeToAbandon; // offset 0x124, size 0x1, align 1
    bool m_bMatchNotScored; // offset 0x125, size 0x1, align 1
    char _pad_0126[0x2]; // offset 0x126
    GameTime_t m_tAbandonTriggerEarlyTime; // offset 0x128, size 0x4, align 255
    bool m_bAbandonTriggerSapphire; // offset 0x12C, size 0x1, align 1
    bool m_bAbandonTriggerAmber; // offset 0x12D, size 0x1, align 1
    char _pad_012E[0x2]; // offset 0x12E
    ECitadelMatchMode m_eMatchMode; // offset 0x130, size 0x4, align 4
    ECitadelGameMode m_eGameMode; // offset 0x134, size 0x4, align 4
    uint32 m_unSpectatorCount; // offset 0x138, size 0x4, align 4
    uint32 m_unExpectedPlayerCount; // offset 0x13C, size 0x4, align 4
    uint32 m_nHideoutOwner; // offset 0x140, size 0x4, align 4
    CHandle< CCitadelTrooperMinimap > m_hTrooperMinimap; // offset 0x144, size 0x4, align 4
    int32 m_iWinningTeam; // offset 0x148, size 0x4, align 4
    char _pad_014C[0x4]; // offset 0x14C
    CNetworkUtlVectorBase< HeroID_t > m_vecBannedHeroes; // offset 0x150, size 0x18, align 8
    uint32 m_nCorruptedPenaltySeed; // offset 0x168, size 0x4, align 4
    int32 m_nNumCorruptedItemsLimit; // offset 0x16C, size 0x4, align 4
    CUtlVectorEmbeddedNetworkVar< TeamKothState_t > m_vecTeamKothStates; // offset 0x170, size 0x128, align 8
    int32 m_nKothScoringTeam; // offset 0x298, size 0x4, align 4
    GameTime_t m_timeKothScoring; // offset 0x29C, size 0x4, align 255
    GameTime_t m_timeKothCashInStarted; // offset 0x2A0, size 0x4, align 255
    GameTime_t m_timeKothGiveUp; // offset 0x2A4, size 0x4, align 255
    int32 m_nAmberGold; // offset 0x2A8, size 0x4, align 4
    int32 m_nSapphireGold; // offset 0x2AC, size 0x4, align 4
    int32 m_nKothTrailingTeam; // offset 0x2B0, size 0x4, align 4
    int32 m_nKothTrailingBonusGold; // offset 0x2B4, size 0x4, align 4
    int32 m_nKothTrailingBonusResist; // offset 0x2B8, size 0x4, align 4
    VectorWS m_vKothCashInCurrentLocation; // offset 0x2BC, size 0xC, align 4
    CHandle< CBaseEntity > m_hCurrentHeroDrafterRebels; // offset 0x2C8, size 0x4, align 4
    CHandle< CBaseEntity > m_hCurrentHeroDrafterCombine; // offset 0x2CC, size 0x4, align 4
    bool m_bDontUploadStats; // offset 0x2D0, size 0x1, align 1
    bool m_bIsEndGameTest; // offset 0x2D1, size 0x1, align 1
    char _pad_02D2[0x56]; // offset 0x2D2
    bool m_bSpawnedBots; // offset 0x328, size 0x1, align 1
    bool m_bGuideBotAssigned; // offset 0x329, size 0x1, align 1
    char _pad_032A[0x2]; // offset 0x32A
    float32 m_timeLastSpawnCrates; // offset 0x32C, size 0x4, align 4
    float32 m_timeNextKothSpawn; // offset 0x330, size 0x4, align 4
    float32 m_timeNextKothSpawnWindowTime; // offset 0x334, size 0x4, align 4
    VectorWS m_vNextKothLocation; // offset 0x338, size 0xC, align 4
    char _pad_0344[0x4]; // offset 0x344
    CUtlVector< VectorWS > m_vKothSpawnLocationDeck; // offset 0x348, size 0x18, align 8
    int32 m_nKothSpawnWarnings; // offset 0x360, size 0x4, align 4
    bool m_bNotifiedClientsOfNextCrateSpawn; // offset 0x364, size 0x1, align 1
    bool m_bEarlyCratesSpawned; // offset 0x365, size 0x1, align 1
    bool m_bIsEarlyCrateGamestate; // offset 0x366, size 0x1, align 1
    char _pad_0367[0x1]; // offset 0x367
    int32 m_nNumCorruptedItemShopSpawns; // offset 0x368, size 0x4, align 4
    char _pad_036C[0x2C]; // offset 0x36C
    GameTime_t m_flGameTimeAllPlayersDisconnected; // offset 0x398, size 0x4, align 255
    int32 m_nNextHeroDraftPosition; // offset 0x39C, size 0x4, align 4
    char _pad_03A0[0x1248]; // offset 0x3A0
    CountdownTimer m_CheckIdleTimer; // offset 0x15E8, size 0x18, align 8
    CountdownTimer m_CheckCheatersTimer; // offset 0x1600, size 0x18, align 8
    char _pad_1618[0x160]; // offset 0x1618
    GameTime_t m_flTimeScaleStart; // offset 0x1778, size 0x4, align 255
    GameTime_t m_flTimeScaleEndTime; // offset 0x177C, size 0x4, align 255
    GameTime_t m_flTimeScaleRampInEndTime; // offset 0x1780, size 0x4, align 255
    GameTime_t m_flTimeScaleRampOutStartTime; // offset 0x1784, size 0x4, align 255
    float32 m_flTimeScaleRampInTime; // offset 0x1788, size 0x4, align 4
    float32 m_flTimeScaleDuration; // offset 0x178C, size 0x4, align 4
    float32 m_flTimeScaleRampOutTime; // offset 0x1790, size 0x4, align 4
    float32 m_flTimeScale; // offset 0x1794, size 0x4, align 4
    float32 m_flOriginalTimeScale; // offset 0x1798, size 0x4, align 4
    bool m_bTimeScaleActive; // offset 0x179C, size 0x1, align 1
    char _pad_179D[0x3]; // offset 0x179D
    int32 m_iMidbossKillCount; // offset 0x17A0, size 0x4, align 4
    int32 m_iAmberRejuvCount; // offset 0x17A4, size 0x4, align 4
    int32 m_iSapphireRejuvCount; // offset 0x17A8, size 0x4, align 4
    GameTime_t m_tAmberRejuvExpireTime; // offset 0x17AC, size 0x4, align 255
    GameTime_t m_tSapphireRejuvExpireTime; // offset 0x17B0, size 0x4, align 255
    float32 m_tNextMidBossSpawnTime; // offset 0x17B4, size 0x4, align 4
    CNetworkUtlVectorBase< VectorWS > m_vecNeutralCampTimerOrigins; // offset 0x17B8, size 0x18, align 8
    CNetworkUtlVectorBase< float32 > m_vecNeutralCampNextSpawnTimes; // offset 0x17D0, size 0x18, align 8
    CNetworkUtlVectorBase< bool > m_vecNeutralCampTimerIsMidBoss; // offset 0x17E8, size 0x18, align 8
    char _pad_1800[0xFC0]; // offset 0x1800
    bool m_bServerPaused; // offset 0x27C0, size 0x1, align 1
    char _pad_27C1[0x3]; // offset 0x27C1
    int32 m_iPauseTeam; // offset 0x27C4, size 0x4, align 4
    int32 m_nMatchClockUpdateTick; // offset 0x27C8, size 0x4, align 4
    float32 m_flMatchClockAtLastUpdate; // offset 0x27CC, size 0x4, align 4
    float64 m_flPauseTime; // offset 0x27D0, size 0x8, align 8
    CPlayerSlot m_pausingPlayerId; // offset 0x27D8, size 0x4, align 4
    CPlayerSlot m_unpausingPlayerId; // offset 0x27DC, size 0x4, align 4
    float32 m_fPauseRawTime; // offset 0x27E0, size 0x4, align 4
    float32 m_fPauseCurTime; // offset 0x27E4, size 0x4, align 4
    float32 m_fUnpauseRawTime; // offset 0x27E8, size 0x4, align 4
    float32 m_fUnpauseCurTime; // offset 0x27EC, size 0x4, align 4
    char _pad_27F0[0x50]; // offset 0x27F0
    int32 m_nLastPreGameCount; // offset 0x2840, size 0x4, align 4
    int32 m_eGGTeam; // offset 0x2844, size 0x4, align 4
    GameTime_t m_flGGEndsAtTime; // offset 0x2848, size 0x4, align 255
    bool m_bGGMarkAsNotScored; // offset 0x284C, size 0x1, align 1
    char _pad_284D[0x3]; // offset 0x284D
    MatchID_t m_unMatchID; // offset 0x2850, size 0x8, align 255
    CUtlString m_sGameplayExperiment; // offset 0x2858, size 0x8, align 8
    uint32 m_ExperimentTokenHashCode; // offset 0x2860, size 0x4, align 4
    int32 m_nPlayerDeathEventID; // offset 0x2864, size 0x4, align 4
    int32 m_nReplayChangedEvent; // offset 0x2868, size 0x4, align 4
    int32 m_nGameOverEvent; // offset 0x286C, size 0x4, align 4
    char _pad_2870[0x20]; // offset 0x2870
    GameTime_t m_flHeroDiedTime; // offset 0x2890, size 0x4, align 255
    char _pad_2894[0x4]; // offset 0x2894
    CCitadelPlayOfTheGame* m_pPlayOfTheGame; // offset 0x2898, size 0x8, align 8
    char _pad_28A0[0x8]; // offset 0x28A0
    CStreetBrawlController m_tStreetBrawl; // offset 0x28A8, size 0x130, align 255
    char _pad_29D8[0x18]; // offset 0x29D8
};
