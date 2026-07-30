#pragma once

class CCitadelGameRules : public CTeamplayRules /*0x0*/  // sizeof 0x2BA8, align 0xFF [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
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
    char _pad_0126[0x2]; // offset 0x126
    GameTime_t m_tAbandonTriggerEarlyTime; // offset 0x128, size 0x4, align 255 | MNetworkEnable
    bool m_bAbandonTriggerSapphire; // offset 0x12C, size 0x1, align 1 | MNetworkEnable
    bool m_bAbandonTriggerAmber; // offset 0x12D, size 0x1, align 1 | MNetworkEnable
    bool m_bNoDeathEnabled; // offset 0x12E, size 0x1, align 1 | MNetworkEnable
    bool m_bFastCooldownsEnabled; // offset 0x12F, size 0x1, align 1 | MNetworkEnable
    bool m_bStaminaCooldownsEnabled; // offset 0x130, size 0x1, align 1 | MNetworkEnable
    bool m_bUnlimitedAmmoEnabled; // offset 0x131, size 0x1, align 1 | MNetworkEnable
    bool m_bInfiniteResourcesEnabled; // offset 0x132, size 0x1, align 1 | MNetworkEnable
    bool m_bFlexSlotsForcedUnlocked; // offset 0x133, size 0x1, align 1 | MNetworkEnable
    ECitadelMatchMode m_eMatchMode; // offset 0x134, size 0x4, align 4 | MNetworkEnable
    ECitadelGameMode m_eGameMode; // offset 0x138, size 0x4, align 4 | MNetworkEnable
    uint32 m_unSpectatorCount; // offset 0x13C, size 0x4, align 4 | MNetworkEnable
    uint32 m_unExpectedPlayerCount; // offset 0x140, size 0x4, align 4 | MNetworkEnable
    uint32 m_nHideoutOwner; // offset 0x144, size 0x4, align 4 | MNetworkEnable
    CHandle< CCitadelTrooperMinimap > m_hTrooperMinimap; // offset 0x148, size 0x4, align 4 | MNetworkEnable
    int32 m_iWinningTeam; // offset 0x14C, size 0x4, align 4 | MNetworkEnable
    CNetworkUtlVectorBase< HeroID_t > m_vecBannedHeroes; // offset 0x150, size 0x18, align 8 | MNetworkEnable
    CUtlVectorEmbeddedNetworkVar< TeamKothState_t > m_vecTeamKothStates; // offset 0x168, size 0x128, align 8 | MNetworkEnable
    int32 m_nKothScoringTeam; // offset 0x290, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_timeKothScoring; // offset 0x294, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_timeKothCashInStarted; // offset 0x298, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_timeKothGiveUp; // offset 0x29C, size 0x4, align 255 | MNetworkEnable
    int32 m_nAmberGold; // offset 0x2A0, size 0x4, align 4 | MNetworkEnable
    int32 m_nSapphireGold; // offset 0x2A4, size 0x4, align 4 | MNetworkEnable
    VectorWS m_vKothCashInCurrentLocation; // offset 0x2A8, size 0xC, align 4 | MNetworkEnable
    CHandle< CBaseEntity > m_hCurrentHeroDrafterRebels; // offset 0x2B4, size 0x4, align 4 | MNetworkEnable MNetworkPriority
    CHandle< CBaseEntity > m_hCurrentHeroDrafterCombine; // offset 0x2B8, size 0x4, align 4 | MNetworkEnable MNetworkPriority
    bool m_bDontUploadStats; // offset 0x2BC, size 0x1, align 1
    bool m_bIsEndGameTest; // offset 0x2BD, size 0x1, align 1
    char _pad_02BE[0x6A]; // offset 0x2BE
    bool m_bSpawnedBots; // offset 0x328, size 0x1, align 1
    bool m_bGuideBotAssigned; // offset 0x329, size 0x1, align 1
    char _pad_032A[0x2]; // offset 0x32A
    ParticleIndex_t m_nKothWindowWarning; // offset 0x32C, size 0x4, align 255
    float32 m_timeLastSpawnCrates; // offset 0x330, size 0x4, align 4
    float32 m_timeNextKothSpawn; // offset 0x334, size 0x4, align 4
    float32 m_timeNextKothSpawnWindowTime; // offset 0x338, size 0x4, align 4
    VectorWS m_vNextKothLocation; // offset 0x33C, size 0xC, align 4
    SndOpEventGuid_t m_KothWarningSound; // offset 0x348, size 0x14, align 4
    char _pad_035C[0x4]; // offset 0x35C
    CUtlVector< VectorWS > m_vKothSpawnLocationDeck; // offset 0x360, size 0x18, align 8
    bool m_bNotifiedClientsOfNextCrateSpawn; // offset 0x378, size 0x1, align 1
    bool m_bEarlyCratesSpawned; // offset 0x379, size 0x1, align 1
    bool m_bIsEarlyCrateGamestate; // offset 0x37A, size 0x1, align 1
    char _pad_037B[0x26D]; // offset 0x37B
    GameTime_t m_flGameTimeAllPlayersDisconnected; // offset 0x5E8, size 0x4, align 255
    int32 m_nNextHeroDraftPosition; // offset 0x5EC, size 0x4, align 4
    char _pad_05F0[0x1248]; // offset 0x5F0
    CountdownTimer m_CheckIdleTimer; // offset 0x1838, size 0x18, align 255
    CountdownTimer m_CheckCheatersTimer; // offset 0x1850, size 0x18, align 255
    char _pad_1868[0x130]; // offset 0x1868
    GameTime_t m_flTimeScaleStart; // offset 0x1998, size 0x4, align 255
    GameTime_t m_flTimeScaleEndTime; // offset 0x199C, size 0x4, align 255
    GameTime_t m_flTimeScaleRampInEndTime; // offset 0x19A0, size 0x4, align 255
    GameTime_t m_flTimeScaleRampOutStartTime; // offset 0x19A4, size 0x4, align 255
    float32 m_flTimeScaleRampInTime; // offset 0x19A8, size 0x4, align 4
    float32 m_flTimeScaleDuration; // offset 0x19AC, size 0x4, align 4
    float32 m_flTimeScaleRampOutTime; // offset 0x19B0, size 0x4, align 4
    float32 m_flTimeScale; // offset 0x19B4, size 0x4, align 4
    float32 m_flOriginalTimeScale; // offset 0x19B8, size 0x4, align 4
    bool m_bTimeScaleActive; // offset 0x19BC, size 0x1, align 1
    char _pad_19BD[0x3]; // offset 0x19BD
    int32 m_iMidbossKillCount; // offset 0x19C0, size 0x4, align 4 | MNetworkEnable
    int32 m_iAmberRejuvCount; // offset 0x19C4, size 0x4, align 4 | MNetworkEnable
    int32 m_iSapphireRejuvCount; // offset 0x19C8, size 0x4, align 4 | MNetworkEnable
    float32 m_tNextMidBossSpawnTime; // offset 0x19CC, size 0x4, align 4 | MNetworkEnable
    char _pad_19D0[0xFC0]; // offset 0x19D0
    bool m_bServerPaused; // offset 0x2990, size 0x1, align 1 | MNetworkEnable
    char _pad_2991[0x3]; // offset 0x2991
    int32 m_iPauseTeam; // offset 0x2994, size 0x4, align 4 | MNetworkEnable
    int32 m_nMatchClockUpdateTick; // offset 0x2998, size 0x4, align 4 | MNetworkEnable
    float32 m_flMatchClockAtLastUpdate; // offset 0x299C, size 0x4, align 4 | MNetworkEnable
    float64 m_flPauseTime; // offset 0x29A0, size 0x8, align 8
    CPlayerSlot m_pausingPlayerId; // offset 0x29A8, size 0x4, align 4
    CPlayerSlot m_unpausingPlayerId; // offset 0x29AC, size 0x4, align 4
    float32 m_fPauseRawTime; // offset 0x29B0, size 0x4, align 4
    float32 m_fPauseCurTime; // offset 0x29B4, size 0x4, align 4
    float32 m_fUnpauseRawTime; // offset 0x29B8, size 0x4, align 4 | MNetworkEnable
    float32 m_fUnpauseCurTime; // offset 0x29BC, size 0x4, align 4
    char _pad_29C0[0x50]; // offset 0x29C0
    int32 m_nLastPreGameCount; // offset 0x2A10, size 0x4, align 4
    int32 m_eGGTeam; // offset 0x2A14, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flGGEndsAtTime; // offset 0x2A18, size 0x4, align 255 | MNetworkEnable
    char _pad_2A1C[0x4]; // offset 0x2A1C
    MatchID_t m_unMatchID; // offset 0x2A20, size 0x8, align 255 | MNetworkEnable
    CUtlString m_sGameplayExperiment; // offset 0x2A28, size 0x8, align 8 | MNetworkEnable
    uint32 m_ExperimentTokenHashCode; // offset 0x2A30, size 0x4, align 4 | MNetworkEnable
    int32 m_nPlayerDeathEventID; // offset 0x2A34, size 0x4, align 4
    int32 m_nReplayChangedEvent; // offset 0x2A38, size 0x4, align 4
    int32 m_nGameOverEvent; // offset 0x2A3C, size 0x4, align 4
    char _pad_2A40[0x20]; // offset 0x2A40
    GameTime_t m_flHeroDiedTime; // offset 0x2A60, size 0x4, align 255 | MNetworkEnable
    char _pad_2A64[0x4]; // offset 0x2A64
    CCitadelPlayOfTheGame* m_pPlayOfTheGame; // offset 0x2A68, size 0x8, align 8 | MNetworkEnable
    CStreetBrawlController m_tStreetBrawl; // offset 0x2A70, size 0x130, align 255 | MNetworkEnable
    char _pad_2BA0[0x8]; // offset 0x2BA0
};
