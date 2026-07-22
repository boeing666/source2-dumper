#pragma once

class CCitadelGameRules : public CTeamplayRules /*0x0*/  // sizeof 0x2B90, align 0xFF [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xE0]; // offset 0x0
    bool m_bFreezePeriod; // offset 0xE0, size 0x1, align 1 | MNetworkEnable
    char _pad_00E1[0x3]; // offset 0xE1
    GameTime_t m_fLevelStartTime; // offset 0xE4, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flGameStartTime; // offset 0xE8, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flGameStateStartTime; // offset 0xEC, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flGameStateEndTime; // offset 0xF0, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flRoundStartTime; // offset 0xF4, size 0x4, align 255 | MNetworkEnable
    float32 m_flPlayOfTheGameStateEndTime; // offset 0xF8, size 0x4, align 4
    EGameState m_eGameState; // offset 0xFC, size 0x4, align 4 | MNetworkEnable
    CHandle< CBaseEntity > m_hTowerAmber; // offset 0x100, size 0x4, align 4 | MNetworkEnable
    CHandle< CBaseEntity > m_hTowerSapphire; // offset 0x104, size 0x4, align 4 | MNetworkEnable
    bool m_bEnemyInAmberBase; // offset 0x108, size 0x1, align 1 | MNetworkEnable
    bool m_bEnemyInSapphireBase; // offset 0x109, size 0x1, align 1 | MNetworkEnable
    bool m_bEnemyPlayersInAmberBase; // offset 0x10A, size 0x1, align 1 | MNetworkEnable
    bool m_bEnemyPlayersInSapphireBase; // offset 0x10B, size 0x1, align 1 | MNetworkEnable
    Vector m_vMinimapMins; // offset 0x10C, size 0xC, align 4 | MNetworkEnable
    Vector m_vMinimapMaxs; // offset 0x118, size 0xC, align 4 | MNetworkEnable
    bool m_bMatchSafeToAbandon; // offset 0x124, size 0x1, align 1 | MNetworkEnable
    bool m_bMatchNotScored; // offset 0x125, size 0x1, align 1 | MNetworkEnable
    bool m_bNoDeathEnabled; // offset 0x126, size 0x1, align 1 | MNetworkEnable
    bool m_bFastCooldownsEnabled; // offset 0x127, size 0x1, align 1 | MNetworkEnable
    bool m_bStaminaCooldownsEnabled; // offset 0x128, size 0x1, align 1 | MNetworkEnable
    bool m_bUnlimitedAmmoEnabled; // offset 0x129, size 0x1, align 1 | MNetworkEnable
    bool m_bInfiniteResourcesEnabled; // offset 0x12A, size 0x1, align 1 | MNetworkEnable
    bool m_bFlexSlotsForcedUnlocked; // offset 0x12B, size 0x1, align 1 | MNetworkEnable
    ECitadelMatchMode m_eMatchMode; // offset 0x12C, size 0x4, align 4 | MNetworkEnable
    ECitadelGameMode m_eGameMode; // offset 0x130, size 0x4, align 4 | MNetworkEnable
    uint32 m_unSpectatorCount; // offset 0x134, size 0x4, align 4 | MNetworkEnable
    uint32 m_unExpectedPlayerCount; // offset 0x138, size 0x4, align 4 | MNetworkEnable
    uint32 m_nHideoutOwner; // offset 0x13C, size 0x4, align 4 | MNetworkEnable
    CHandle< CCitadelTrooperMinimap > m_hTrooperMinimap; // offset 0x140, size 0x4, align 4 | MNetworkEnable
    int32 m_iWinningTeam; // offset 0x144, size 0x4, align 4 | MNetworkEnable
    CUtlVectorEmbeddedNetworkVar< TeamKothState_t > m_vecTeamKothStates; // offset 0x148, size 0x128, align 8 | MNetworkEnable
    int32 m_nKothScoringTeam; // offset 0x270, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_timeKothScoring; // offset 0x274, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_timeKothCashInStarted; // offset 0x278, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_timeKothGiveUp; // offset 0x27C, size 0x4, align 255 | MNetworkEnable
    int32 m_nAmberGold; // offset 0x280, size 0x4, align 4 | MNetworkEnable
    int32 m_nSapphireGold; // offset 0x284, size 0x4, align 4 | MNetworkEnable
    VectorWS m_vKothCashInCurrentLocation; // offset 0x288, size 0xC, align 4 | MNetworkEnable
    CHandle< CBaseEntity > m_hCurrentHeroDrafterRebels; // offset 0x294, size 0x4, align 4 | MNetworkEnable MNetworkPriority
    CHandle< CBaseEntity > m_hCurrentHeroDrafterCombine; // offset 0x298, size 0x4, align 4 | MNetworkEnable MNetworkPriority
    bool m_bDontUploadStats; // offset 0x29C, size 0x1, align 1
    bool m_bIsEndGameTest; // offset 0x29D, size 0x1, align 1
    char _pad_029E[0x6A]; // offset 0x29E
    bool m_bSpawnedBots; // offset 0x308, size 0x1, align 1
    bool m_bGuideBotAssigned; // offset 0x309, size 0x1, align 1
    char _pad_030A[0x2]; // offset 0x30A
    ParticleIndex_t m_nKothWindowWarning; // offset 0x30C, size 0x4, align 255
    float32 m_timeLastSpawnCrates; // offset 0x310, size 0x4, align 4
    float32 m_timeNextKothSpawn; // offset 0x314, size 0x4, align 4
    float32 m_timeNextKothSpawnWindowTime; // offset 0x318, size 0x4, align 4
    VectorWS m_vNextKothLocation; // offset 0x31C, size 0xC, align 4
    SndOpEventGuid_t m_KothWarningSound; // offset 0x328, size 0x14, align 4
    char _pad_033C[0x4]; // offset 0x33C
    CUtlVector< VectorWS > m_vKothSpawnLocationDeck; // offset 0x340, size 0x18, align 8
    bool m_bNotifiedClientsOfNextCrateSpawn; // offset 0x358, size 0x1, align 1
    bool m_bEarlyCratesSpawned; // offset 0x359, size 0x1, align 1
    bool m_bIsEarlyCrateGamestate; // offset 0x35A, size 0x1, align 1
    char _pad_035B[0x26D]; // offset 0x35B
    GameTime_t m_flGameTimeAllPlayersDisconnected; // offset 0x5C8, size 0x4, align 255
    int32 m_nNextHeroDraftPosition; // offset 0x5CC, size 0x4, align 4
    char _pad_05D0[0x1248]; // offset 0x5D0
    CountdownTimer m_CheckIdleTimer; // offset 0x1818, size 0x18, align 255
    CountdownTimer m_CheckCheatersTimer; // offset 0x1830, size 0x18, align 255
    char _pad_1848[0x130]; // offset 0x1848
    GameTime_t m_flTimeScaleStart; // offset 0x1978, size 0x4, align 255
    GameTime_t m_flTimeScaleEndTime; // offset 0x197C, size 0x4, align 255
    GameTime_t m_flTimeScaleRampInEndTime; // offset 0x1980, size 0x4, align 255
    GameTime_t m_flTimeScaleRampOutStartTime; // offset 0x1984, size 0x4, align 255
    float32 m_flTimeScaleRampInTime; // offset 0x1988, size 0x4, align 4
    float32 m_flTimeScaleDuration; // offset 0x198C, size 0x4, align 4
    float32 m_flTimeScaleRampOutTime; // offset 0x1990, size 0x4, align 4
    float32 m_flTimeScale; // offset 0x1994, size 0x4, align 4
    float32 m_flOriginalTimeScale; // offset 0x1998, size 0x4, align 4
    bool m_bTimeScaleActive; // offset 0x199C, size 0x1, align 1
    char _pad_199D[0x3]; // offset 0x199D
    int32 m_iMidbossKillCount; // offset 0x19A0, size 0x4, align 4 | MNetworkEnable
    int32 m_iAmberRejuvCount; // offset 0x19A4, size 0x4, align 4 | MNetworkEnable
    int32 m_iSapphireRejuvCount; // offset 0x19A8, size 0x4, align 4 | MNetworkEnable
    float32 m_tNextMidBossSpawnTime; // offset 0x19AC, size 0x4, align 4 | MNetworkEnable
    char _pad_19B0[0xFC0]; // offset 0x19B0
    bool m_bServerPaused; // offset 0x2970, size 0x1, align 1 | MNetworkEnable
    char _pad_2971[0x3]; // offset 0x2971
    int32 m_iPauseTeam; // offset 0x2974, size 0x4, align 4 | MNetworkEnable
    int32 m_nMatchClockUpdateTick; // offset 0x2978, size 0x4, align 4 | MNetworkEnable
    float32 m_flMatchClockAtLastUpdate; // offset 0x297C, size 0x4, align 4 | MNetworkEnable
    float64 m_flPauseTime; // offset 0x2980, size 0x8, align 8
    CPlayerSlot m_pausingPlayerId; // offset 0x2988, size 0x4, align 4
    CPlayerSlot m_unpausingPlayerId; // offset 0x298C, size 0x4, align 4
    float32 m_fPauseRawTime; // offset 0x2990, size 0x4, align 4
    float32 m_fPauseCurTime; // offset 0x2994, size 0x4, align 4
    float32 m_fUnpauseRawTime; // offset 0x2998, size 0x4, align 4 | MNetworkEnable
    float32 m_fUnpauseCurTime; // offset 0x299C, size 0x4, align 4
    char _pad_29A0[0x50]; // offset 0x29A0
    bool m_bRequiresReportCardDismissal; // offset 0x29F0, size 0x1, align 1 | MNetworkEnable
    char _pad_29F1[0x3]; // offset 0x29F1
    GameTime_t m_flPreGameWaitEndTime; // offset 0x29F4, size 0x4, align 255
    GameTime_t m_flReportCardDismissalWaitStart; // offset 0x29F8, size 0x4, align 255
    int32 m_nLastPreGameCount; // offset 0x29FC, size 0x4, align 4
    int32 m_eGGTeam; // offset 0x2A00, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flGGEndsAtTime; // offset 0x2A04, size 0x4, align 255 | MNetworkEnable
    MatchID_t m_unMatchID; // offset 0x2A08, size 0x8, align 255 | MNetworkEnable
    CUtlString m_sGameplayExperiment; // offset 0x2A10, size 0x8, align 8 | MNetworkEnable
    uint32 m_ExperimentTokenHashCode; // offset 0x2A18, size 0x4, align 4 | MNetworkEnable
    int32 m_nPlayerDeathEventID; // offset 0x2A1C, size 0x4, align 4
    int32 m_nReplayChangedEvent; // offset 0x2A20, size 0x4, align 4
    int32 m_nGameOverEvent; // offset 0x2A24, size 0x4, align 4
    char _pad_2A28[0x20]; // offset 0x2A28
    GameTime_t m_flHeroDiedTime; // offset 0x2A48, size 0x4, align 255 | MNetworkEnable
    char _pad_2A4C[0x4]; // offset 0x2A4C
    CCitadelPlayOfTheGame* m_pPlayOfTheGame; // offset 0x2A50, size 0x8, align 8 | MNetworkEnable
    CStreetBrawlController m_tStreetBrawl; // offset 0x2A58, size 0x130, align 255 | MNetworkEnable
    char _pad_2B88[0x8]; // offset 0x2B88
};
