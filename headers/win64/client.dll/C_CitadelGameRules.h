#pragma once

class C_CitadelGameRules : public C_TeamplayRules /*0x0*/  // sizeof 0xA108, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x58]; // offset 0x0
    bool m_bFreezePeriod; // offset 0x58, size 0x1, align 1
    char _pad_0059[0x3]; // offset 0x59
    GameTime_t m_fLevelStartTime; // offset 0x5C, size 0x4, align 255
    GameTime_t m_flGameStartTime; // offset 0x60, size 0x4, align 255
    GameTime_t m_flGameStateStartTime; // offset 0x64, size 0x4, align 255
    GameTime_t m_flGameStateEndTime; // offset 0x68, size 0x4, align 255
    GameTime_t m_flRoundStartTime; // offset 0x6C, size 0x4, align 255
    float32 m_flPlayOfTheGameStateEndTime; // offset 0x70, size 0x4, align 4
    EGameState m_eGameState; // offset 0x74, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTowerAmber; // offset 0x78, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTowerSapphire; // offset 0x7C, size 0x4, align 4
    bool m_bEnemyInAmberBase; // offset 0x80, size 0x1, align 1
    bool m_bEnemyInSapphireBase; // offset 0x81, size 0x1, align 1
    bool m_bEnemyPlayersInAmberBase; // offset 0x82, size 0x1, align 1
    bool m_bEnemyPlayersInSapphireBase; // offset 0x83, size 0x1, align 1
    VectorWS m_vMinimapMins; // offset 0x84, size 0xC, align 4
    VectorWS m_vMinimapMaxs; // offset 0x90, size 0xC, align 4
    bool m_bMatchSafeToAbandon; // offset 0x9C, size 0x1, align 1
    bool m_bMatchNotScored; // offset 0x9D, size 0x1, align 1
    char _pad_009E[0x2]; // offset 0x9E
    GameTime_t m_tAbandonTriggerEarlyTime; // offset 0xA0, size 0x4, align 255
    bool m_bAbandonTriggerSapphire; // offset 0xA4, size 0x1, align 1
    bool m_bAbandonTriggerAmber; // offset 0xA5, size 0x1, align 1
    char _pad_00A6[0x2]; // offset 0xA6
    ECitadelMatchMode m_eMatchMode; // offset 0xA8, size 0x4, align 4
    ECitadelGameMode m_eGameMode; // offset 0xAC, size 0x4, align 4
    uint32 m_unSpectatorCount; // offset 0xB0, size 0x4, align 4
    uint32 m_unExpectedPlayerCount; // offset 0xB4, size 0x4, align 4
    uint32 m_nHideoutOwner; // offset 0xB8, size 0x4, align 4
    CHandle< CCitadelTrooperMinimap > m_hTrooperMinimap; // offset 0xBC, size 0x4, align 4
    int32 m_iWinningTeam; // offset 0xC0, size 0x4, align 4
    char _pad_00C4[0x4]; // offset 0xC4
    C_NetworkUtlVectorBase< HeroID_t > m_vecBannedHeroes; // offset 0xC8, size 0x18, align 8
    uint32 m_nCorruptedPenaltySeed; // offset 0xE0, size 0x4, align 4
    int32 m_nNumCorruptedItemsLimit; // offset 0xE4, size 0x4, align 4
    C_UtlVectorEmbeddedNetworkVar< TeamKothState_t > m_vecTeamKothStates; // offset 0xE8, size 0x108, align 8
    int32 m_nKothScoringTeam; // offset 0x1F0, size 0x4, align 4
    GameTime_t m_timeKothScoring; // offset 0x1F4, size 0x4, align 255
    GameTime_t m_timeKothCashInStarted; // offset 0x1F8, size 0x4, align 255
    GameTime_t m_timeKothGiveUp; // offset 0x1FC, size 0x4, align 255
    int32 m_nAmberGold; // offset 0x200, size 0x4, align 4
    int32 m_nSapphireGold; // offset 0x204, size 0x4, align 4
    int32 m_nKothTrailingTeam; // offset 0x208, size 0x4, align 4
    int32 m_nKothTrailingBonusGold; // offset 0x20C, size 0x4, align 4
    int32 m_nKothTrailingBonusResist; // offset 0x210, size 0x4, align 4
    VectorWS m_vKothCashInCurrentLocation; // offset 0x214, size 0xC, align 4
    CHandle< C_BaseEntity > m_hCurrentHeroDrafterRebels; // offset 0x220, size 0x4, align 4
    CHandle< C_BaseEntity > m_hCurrentHeroDrafterCombine; // offset 0x224, size 0x4, align 4
    bool m_bDontUploadStats; // offset 0x228, size 0x1, align 1
    char _pad_0229[0x3]; // offset 0x229
    int32 m_iMidbossKillCount; // offset 0x22C, size 0x4, align 4
    int32 m_iAmberRejuvCount; // offset 0x230, size 0x4, align 4
    int32 m_iSapphireRejuvCount; // offset 0x234, size 0x4, align 4
    GameTime_t m_tAmberRejuvExpireTime; // offset 0x238, size 0x4, align 255
    GameTime_t m_tSapphireRejuvExpireTime; // offset 0x23C, size 0x4, align 255
    float32 m_tNextMidBossSpawnTime; // offset 0x240, size 0x4, align 4
    char _pad_0244[0x4]; // offset 0x244
    C_NetworkUtlVectorBase< VectorWS > m_vecNeutralCampTimerOrigins; // offset 0x248, size 0x18, align 8
    C_NetworkUtlVectorBase< float32 > m_vecNeutralCampNextSpawnTimes; // offset 0x260, size 0x18, align 8
    C_NetworkUtlVectorBase< bool > m_vecNeutralCampTimerIsMidBoss; // offset 0x278, size 0x18, align 8
    char _pad_0290[0x9D58]; // offset 0x290
    bool m_bServerPaused; // offset 0x9FE8, size 0x1, align 1
    char _pad_9FE9[0x3]; // offset 0x9FE9
    int32 m_iPauseTeam; // offset 0x9FEC, size 0x4, align 4
    int32 m_nMatchClockUpdateTick; // offset 0x9FF0, size 0x4, align 4
    float32 m_flMatchClockAtLastUpdate; // offset 0x9FF4, size 0x4, align 4
    float64 m_flPauseTime; // offset 0x9FF8, size 0x8, align 8
    CPlayerSlot m_pausingPlayerId; // offset 0xA000, size 0x4, align 4
    CPlayerSlot m_unpausingPlayerId; // offset 0xA004, size 0x4, align 4
    float32 m_fPauseRawTime; // offset 0xA008, size 0x4, align 4
    float32 m_fPauseCurTime; // offset 0xA00C, size 0x4, align 4
    float32 m_fUnpauseRawTime; // offset 0xA010, size 0x4, align 4
    float32 m_fUnpauseCurTime; // offset 0xA014, size 0x4, align 4
    char _pad_A018[0x50]; // offset 0xA018
    int32 m_nLastPreGameCount; // offset 0xA068, size 0x4, align 4
    int32 m_eGGTeam; // offset 0xA06C, size 0x4, align 4
    GameTime_t m_flGGEndsAtTime; // offset 0xA070, size 0x4, align 255
    bool m_bGGMarkAsNotScored; // offset 0xA074, size 0x1, align 1
    char _pad_A075[0x3]; // offset 0xA075
    MatchID_t m_unMatchID; // offset 0xA078, size 0x8, align 255
    CUtlString m_sGameplayExperiment; // offset 0xA080, size 0x8, align 8
    uint32 m_ExperimentTokenHashCode; // offset 0xA088, size 0x4, align 4
    int32 m_nPlayerDeathEventID; // offset 0xA08C, size 0x4, align 4
    int32 m_nReplayChangedEvent; // offset 0xA090, size 0x4, align 4
    int32 m_nGameOverEvent; // offset 0xA094, size 0x4, align 4
    char _pad_A098[0x20]; // offset 0xA098
    GameTime_t m_flHeroDiedTime; // offset 0xA0B8, size 0x4, align 255
    char _pad_A0BC[0x4]; // offset 0xA0BC
    CCitadelPlayOfTheGame* m_pPlayOfTheGame; // offset 0xA0C0, size 0x8, align 8
    char _pad_A0C8[0x8]; // offset 0xA0C8
    CStreetBrawlController m_tStreetBrawl; // offset 0xA0D0, size 0x28, align 255
    char _pad_A0F8[0x10]; // offset 0xA0F8
};
