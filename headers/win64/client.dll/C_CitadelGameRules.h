#pragma once

class C_CitadelGameRules : public C_TeamplayRules /*0x0*/  // sizeof 0xA070, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
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
    bool m_bNoDeathEnabled; // offset 0x9E, size 0x1, align 1 | MNetworkEnable
    bool m_bFastCooldownsEnabled; // offset 0x9F, size 0x1, align 1 | MNetworkEnable
    bool m_bStaminaCooldownsEnabled; // offset 0xA0, size 0x1, align 1 | MNetworkEnable
    bool m_bUnlimitedAmmoEnabled; // offset 0xA1, size 0x1, align 1 | MNetworkEnable
    bool m_bInfiniteResourcesEnabled; // offset 0xA2, size 0x1, align 1 | MNetworkEnable
    bool m_bFlexSlotsForcedUnlocked; // offset 0xA3, size 0x1, align 1 | MNetworkEnable
    ECitadelMatchMode m_eMatchMode; // offset 0xA4, size 0x4, align 4 | MNetworkEnable
    ECitadelGameMode m_eGameMode; // offset 0xA8, size 0x4, align 4 | MNetworkEnable
    uint32 m_unSpectatorCount; // offset 0xAC, size 0x4, align 4 | MNetworkEnable
    uint32 m_unExpectedPlayerCount; // offset 0xB0, size 0x4, align 4 | MNetworkEnable
    uint32 m_nHideoutOwner; // offset 0xB4, size 0x4, align 4 | MNetworkEnable
    CHandle< CCitadelTrooperMinimap > m_hTrooperMinimap; // offset 0xB8, size 0x4, align 4 | MNetworkEnable
    int32 m_iWinningTeam; // offset 0xBC, size 0x4, align 4 | MNetworkEnable
    C_UtlVectorEmbeddedNetworkVar< TeamKothState_t > m_vecTeamKothStates; // offset 0xC0, size 0x108, align 8 | MNetworkEnable
    int32 m_nKothScoringTeam; // offset 0x1C8, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_timeKothScoring; // offset 0x1CC, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_timeKothCashInStarted; // offset 0x1D0, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_timeKothGiveUp; // offset 0x1D4, size 0x4, align 255 | MNetworkEnable
    int32 m_nAmberGold; // offset 0x1D8, size 0x4, align 4 | MNetworkEnable
    int32 m_nSapphireGold; // offset 0x1DC, size 0x4, align 4 | MNetworkEnable
    VectorWS m_vKothCashInCurrentLocation; // offset 0x1E0, size 0xC, align 4 | MNetworkEnable
    CHandle< C_BaseEntity > m_hCurrentHeroDrafterRebels; // offset 0x1EC, size 0x4, align 4 | MNetworkEnable MNetworkPriority MNetworkChangeCallback
    CHandle< C_BaseEntity > m_hCurrentHeroDrafterCombine; // offset 0x1F0, size 0x4, align 4 | MNetworkEnable MNetworkPriority MNetworkChangeCallback
    bool m_bDontUploadStats; // offset 0x1F4, size 0x1, align 1
    char _pad_01F5[0x3]; // offset 0x1F5
    int32 m_iMidbossKillCount; // offset 0x1F8, size 0x4, align 4 | MNetworkEnable
    int32 m_iAmberRejuvCount; // offset 0x1FC, size 0x4, align 4 | MNetworkEnable
    int32 m_iSapphireRejuvCount; // offset 0x200, size 0x4, align 4 | MNetworkEnable
    float32 m_tNextMidBossSpawnTime; // offset 0x204, size 0x4, align 4 | MNetworkEnable
    char _pad_0208[0x9D58]; // offset 0x208
    bool m_bServerPaused; // offset 0x9F60, size 0x1, align 1 | MNetworkEnable
    char _pad_9F61[0x3]; // offset 0x9F61
    int32 m_iPauseTeam; // offset 0x9F64, size 0x4, align 4 | MNetworkEnable
    int32 m_nMatchClockUpdateTick; // offset 0x9F68, size 0x4, align 4 | MNetworkEnable
    float32 m_flMatchClockAtLastUpdate; // offset 0x9F6C, size 0x4, align 4 | MNetworkEnable
    float64 m_flPauseTime; // offset 0x9F70, size 0x8, align 8
    CPlayerSlot m_pausingPlayerId; // offset 0x9F78, size 0x4, align 4
    CPlayerSlot m_unpausingPlayerId; // offset 0x9F7C, size 0x4, align 4
    float32 m_fPauseRawTime; // offset 0x9F80, size 0x4, align 4
    float32 m_fPauseCurTime; // offset 0x9F84, size 0x4, align 4
    float32 m_fUnpauseRawTime; // offset 0x9F88, size 0x4, align 4 | MNetworkEnable
    float32 m_fUnpauseCurTime; // offset 0x9F8C, size 0x4, align 4
    char _pad_9F90[0x50]; // offset 0x9F90
    bool m_bRequiresReportCardDismissal; // offset 0x9FE0, size 0x1, align 1 | MNetworkEnable
    char _pad_9FE1[0x3]; // offset 0x9FE1
    GameTime_t m_flPreGameWaitEndTime; // offset 0x9FE4, size 0x4, align 255
    GameTime_t m_flReportCardDismissalWaitStart; // offset 0x9FE8, size 0x4, align 255
    int32 m_nLastPreGameCount; // offset 0x9FEC, size 0x4, align 4
    int32 m_eGGTeam; // offset 0x9FF0, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flGGEndsAtTime; // offset 0x9FF4, size 0x4, align 255 | MNetworkEnable
    MatchID_t m_unMatchID; // offset 0x9FF8, size 0x8, align 255 | MNetworkEnable
    CUtlString m_sGameplayExperiment; // offset 0xA000, size 0x8, align 8 | MNetworkEnable
    uint32 m_ExperimentTokenHashCode; // offset 0xA008, size 0x4, align 4 | MNetworkEnable
    int32 m_nPlayerDeathEventID; // offset 0xA00C, size 0x4, align 4
    int32 m_nReplayChangedEvent; // offset 0xA010, size 0x4, align 4
    int32 m_nGameOverEvent; // offset 0xA014, size 0x4, align 4
    char _pad_A018[0x20]; // offset 0xA018
    GameTime_t m_flHeroDiedTime; // offset 0xA038, size 0x4, align 255 | MNetworkEnable
    char _pad_A03C[0x4]; // offset 0xA03C
    CCitadelPlayOfTheGame* m_pPlayOfTheGame; // offset 0xA040, size 0x8, align 8 | MNetworkEnable
    CStreetBrawlController m_tStreetBrawl; // offset 0xA048, size 0x28, align 255 | MNetworkEnable
};
