#pragma once

class C_CitadelGameRules : public C_TeamplayRules /*0x0*/  // sizeof 0xA088, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x58]; // offset 0x0
    bool m_bFreezePeriod; // offset 0x58, size 0x1, align 1 | MNetworkEnable
    char _pad_0059[0x3]; // offset 0x59
    GameTime_t m_fLevelStartTime; // offset 0x5C, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flGameStartTime; // offset 0x60, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flGameStateStartTime; // offset 0x64, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flGameStateEndTime; // offset 0x68, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flRoundStartTime; // offset 0x6C, size 0x4, align 255 | MNetworkEnable
    float32 m_flPlayOfTheGameStateEndTime; // offset 0x70, size 0x4, align 4
    EGameState m_eGameState; // offset 0x74, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    CHandle< C_BaseEntity > m_hTowerAmber; // offset 0x78, size 0x4, align 4 | MNetworkEnable
    CHandle< C_BaseEntity > m_hTowerSapphire; // offset 0x7C, size 0x4, align 4 | MNetworkEnable
    bool m_bEnemyInAmberBase; // offset 0x80, size 0x1, align 1 | MNetworkEnable
    bool m_bEnemyInSapphireBase; // offset 0x81, size 0x1, align 1 | MNetworkEnable
    bool m_bEnemyPlayersInAmberBase; // offset 0x82, size 0x1, align 1 | MNetworkEnable
    bool m_bEnemyPlayersInSapphireBase; // offset 0x83, size 0x1, align 1 | MNetworkEnable
    Vector m_vMinimapMins; // offset 0x84, size 0xC, align 4 | MNetworkEnable
    Vector m_vMinimapMaxs; // offset 0x90, size 0xC, align 4 | MNetworkEnable
    bool m_bMatchSafeToAbandon; // offset 0x9C, size 0x1, align 1 | MNetworkEnable
    bool m_bMatchNotScored; // offset 0x9D, size 0x1, align 1 | MNetworkEnable
    char _pad_009E[0x2]; // offset 0x9E
    GameTime_t m_tAbandonTriggerEarlyTime; // offset 0xA0, size 0x4, align 255 | MNetworkEnable
    bool m_bAbandonTriggerSapphire; // offset 0xA4, size 0x1, align 1 | MNetworkEnable
    bool m_bAbandonTriggerAmber; // offset 0xA5, size 0x1, align 1 | MNetworkEnable
    bool m_bNoDeathEnabled; // offset 0xA6, size 0x1, align 1 | MNetworkEnable
    bool m_bFastCooldownsEnabled; // offset 0xA7, size 0x1, align 1 | MNetworkEnable
    bool m_bStaminaCooldownsEnabled; // offset 0xA8, size 0x1, align 1 | MNetworkEnable
    bool m_bUnlimitedAmmoEnabled; // offset 0xA9, size 0x1, align 1 | MNetworkEnable
    bool m_bInfiniteResourcesEnabled; // offset 0xAA, size 0x1, align 1 | MNetworkEnable
    bool m_bFlexSlotsForcedUnlocked; // offset 0xAB, size 0x1, align 1 | MNetworkEnable
    ECitadelMatchMode m_eMatchMode; // offset 0xAC, size 0x4, align 4 | MNetworkEnable
    ECitadelGameMode m_eGameMode; // offset 0xB0, size 0x4, align 4 | MNetworkEnable
    uint32 m_unSpectatorCount; // offset 0xB4, size 0x4, align 4 | MNetworkEnable
    uint32 m_unExpectedPlayerCount; // offset 0xB8, size 0x4, align 4 | MNetworkEnable
    uint32 m_nHideoutOwner; // offset 0xBC, size 0x4, align 4 | MNetworkEnable
    CHandle< CCitadelTrooperMinimap > m_hTrooperMinimap; // offset 0xC0, size 0x4, align 4 | MNetworkEnable
    int32 m_iWinningTeam; // offset 0xC4, size 0x4, align 4 | MNetworkEnable
    C_NetworkUtlVectorBase< HeroID_t > m_vecBannedHeroes; // offset 0xC8, size 0x18, align 8 | MNetworkEnable
    C_UtlVectorEmbeddedNetworkVar< TeamKothState_t > m_vecTeamKothStates; // offset 0xE0, size 0x108, align 8 | MNetworkEnable
    int32 m_nKothScoringTeam; // offset 0x1E8, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_timeKothScoring; // offset 0x1EC, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_timeKothCashInStarted; // offset 0x1F0, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_timeKothGiveUp; // offset 0x1F4, size 0x4, align 255 | MNetworkEnable
    int32 m_nAmberGold; // offset 0x1F8, size 0x4, align 4 | MNetworkEnable
    int32 m_nSapphireGold; // offset 0x1FC, size 0x4, align 4 | MNetworkEnable
    VectorWS m_vKothCashInCurrentLocation; // offset 0x200, size 0xC, align 4 | MNetworkEnable
    CHandle< C_BaseEntity > m_hCurrentHeroDrafterRebels; // offset 0x20C, size 0x4, align 4 | MNetworkEnable MNetworkPriority MNetworkChangeCallback
    CHandle< C_BaseEntity > m_hCurrentHeroDrafterCombine; // offset 0x210, size 0x4, align 4 | MNetworkEnable MNetworkPriority MNetworkChangeCallback
    bool m_bDontUploadStats; // offset 0x214, size 0x1, align 1
    char _pad_0215[0x3]; // offset 0x215
    int32 m_iMidbossKillCount; // offset 0x218, size 0x4, align 4 | MNetworkEnable
    int32 m_iAmberRejuvCount; // offset 0x21C, size 0x4, align 4 | MNetworkEnable
    int32 m_iSapphireRejuvCount; // offset 0x220, size 0x4, align 4 | MNetworkEnable
    float32 m_tNextMidBossSpawnTime; // offset 0x224, size 0x4, align 4 | MNetworkEnable
    char _pad_0228[0x9D58]; // offset 0x228
    bool m_bServerPaused; // offset 0x9F80, size 0x1, align 1 | MNetworkEnable
    char _pad_9F81[0x3]; // offset 0x9F81
    int32 m_iPauseTeam; // offset 0x9F84, size 0x4, align 4 | MNetworkEnable
    int32 m_nMatchClockUpdateTick; // offset 0x9F88, size 0x4, align 4 | MNetworkEnable
    float32 m_flMatchClockAtLastUpdate; // offset 0x9F8C, size 0x4, align 4 | MNetworkEnable
    float64 m_flPauseTime; // offset 0x9F90, size 0x8, align 8
    CPlayerSlot m_pausingPlayerId; // offset 0x9F98, size 0x4, align 4
    CPlayerSlot m_unpausingPlayerId; // offset 0x9F9C, size 0x4, align 4
    float32 m_fPauseRawTime; // offset 0x9FA0, size 0x4, align 4
    float32 m_fPauseCurTime; // offset 0x9FA4, size 0x4, align 4
    float32 m_fUnpauseRawTime; // offset 0x9FA8, size 0x4, align 4 | MNetworkEnable
    float32 m_fUnpauseCurTime; // offset 0x9FAC, size 0x4, align 4
    char _pad_9FB0[0x50]; // offset 0x9FB0
    int32 m_nLastPreGameCount; // offset 0xA000, size 0x4, align 4
    int32 m_eGGTeam; // offset 0xA004, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flGGEndsAtTime; // offset 0xA008, size 0x4, align 255 | MNetworkEnable
    char _pad_A00C[0x4]; // offset 0xA00C
    MatchID_t m_unMatchID; // offset 0xA010, size 0x8, align 255 | MNetworkEnable
    CUtlString m_sGameplayExperiment; // offset 0xA018, size 0x8, align 8 | MNetworkEnable
    uint32 m_ExperimentTokenHashCode; // offset 0xA020, size 0x4, align 4 | MNetworkEnable
    int32 m_nPlayerDeathEventID; // offset 0xA024, size 0x4, align 4
    int32 m_nReplayChangedEvent; // offset 0xA028, size 0x4, align 4
    int32 m_nGameOverEvent; // offset 0xA02C, size 0x4, align 4
    char _pad_A030[0x20]; // offset 0xA030
    GameTime_t m_flHeroDiedTime; // offset 0xA050, size 0x4, align 255 | MNetworkEnable
    char _pad_A054[0x4]; // offset 0xA054
    CCitadelPlayOfTheGame* m_pPlayOfTheGame; // offset 0xA058, size 0x8, align 8 | MNetworkEnable
    CStreetBrawlController m_tStreetBrawl; // offset 0xA060, size 0x28, align 255 | MNetworkEnable
};
