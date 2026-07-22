#pragma once

class CDOTAGameRules : public CMultiplayRules /*0x0*/  // sizeof 0x9938, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x120]; // offset 0x0
    int32 m_nRuneCycle; // offset 0x120, size 0x4, align 4
    int32 m_nNextPowerRuneType; // offset 0x124, size 0x4, align 4
    int32 m_nNextPowerRuneSpawnIndex; // offset 0x128, size 0x4, align 4
    char _pad_012C[0x4]; // offset 0x12C
    float64 m_flPauseTime; // offset 0x130, size 0x8, align 8
    PlayerID_t m_pausingPlayerId; // offset 0x138, size 0x4, align 255
    PlayerID_t m_unpausingPlayerId; // offset 0x13C, size 0x4, align 255
    float32 m_fPauseRawTime; // offset 0x140, size 0x4, align 4
    float32 m_fPauseCurTime; // offset 0x144, size 0x4, align 4
    float32 m_fUnpauseRawTime; // offset 0x148, size 0x4, align 4
    float32 m_fUnpauseCurTime; // offset 0x14C, size 0x4, align 4
    int32[64] m_nPausesRemaining; // offset 0x150, size 0x100, align 4
    float32[64] m_nLastPauseTime; // offset 0x250, size 0x100, align 4
    char _pad_0350[0x8]; // offset 0x350
    int32 m_iMiscHeroPickCounter; // offset 0x358, size 0x4, align 4
    CHandle< CBaseEntity > m_hEndGameCinematicEntity; // offset 0x35C, size 0x4, align 4
    CountdownTimer m_EndGameCinematicTimer; // offset 0x360, size 0x18, align 8
    CHandle< CDOTA_BaseNPC > m_hOverlayHealthBarUnit; // offset 0x378, size 0x4, align 4
    int32 m_nOverlayHealthBarType; // offset 0x37C, size 0x4, align 4
    bool m_bIsInCinematicMode; // offset 0x380, size 0x1, align 1
    bool m_bIsInClientSideCinematicMode; // offset 0x381, size 0x1, align 1
    bool m_bFreeCourierMode; // offset 0x382, size 0x1, align 1
    char _pad_0383[0x1]; // offset 0x383
    int32 m_nStartingGold; // offset 0x384, size 0x4, align 4
    int32 m_nGoldPerTick; // offset 0x388, size 0x4, align 4
    float32 m_flGoldTickTime; // offset 0x38C, size 0x4, align 4
    bool m_bEnableSuggestAbilities; // offset 0x390, size 0x1, align 1
    bool m_bEnableSuggestItems; // offset 0x391, size 0x1, align 1
    char _pad_0392[0x1E]; // offset 0x392
    uint32 m_unFanfareGoodGuys; // offset 0x3B0, size 0x4, align 4
    uint32 m_unFanfareBadGuys; // offset 0x3B4, size 0x4, align 4
    GameTime_t m_flFanfareTime; // offset 0x3B8, size 0x4, align 255
    bool m_bSpeechUseSpawnInsteadOfRespawnConcept; // offset 0x3BC, size 0x1, align 1
    bool m_bSpeechSendTeamSpeaksToSpectators; // offset 0x3BD, size 0x1, align 1
    bool m_bIgnoreLobbyTeamsInCustomGames; // offset 0x3BE, size 0x1, align 1
    char _pad_03BF[0x1]; // offset 0x3BF
    int32 m_nCustomGameBansPerTeam; // offset 0x3C0, size 0x4, align 4
    int32 m_iFOWDefeatedTempViewer; // offset 0x3C4, size 0x4, align 4
    char _pad_03C8[0x48]; // offset 0x3C8
    int32 m_nGameState; // offset 0x410, size 0x4, align 4
    DOTA_HeroPickState m_nHeroPickState; // offset 0x414, size 0x4, align 4
    bool m_bAlternateHeroGridsEnabled; // offset 0x418, size 0x1, align 1
    char _pad_0419[0x3]; // offset 0x419
    GameTime_t m_flStateTransitionTime; // offset 0x41C, size 0x4, align 255
    float32 m_flOverride_dota_hero_selection_time; // offset 0x420, size 0x4, align 4
    float32 m_flOverride_dota_pregame_time; // offset 0x424, size 0x4, align 4
    float32 m_flOverride_dota_postgame_time; // offset 0x428, size 0x4, align 4
    float32 m_flOverride_dota_strategy_time; // offset 0x42C, size 0x4, align 4
    float32 m_flOverride_dota_team_showcase_duration; // offset 0x430, size 0x4, align 4
    float32 m_flOverride_dota_rune_spawn_time; // offset 0x434, size 0x4, align 4
    float32[15] m_flShowcaseTime; // offset 0x438, size 0x3C, align 4
    float32 m_flNeutralInitialSpawnOffset; // offset 0x474, size 0x4, align 4
    float32 m_flOverride_dota_tree_regrow_time; // offset 0x478, size 0x4, align 4
    int32 m_iGameMode; // offset 0x47C, size 0x4, align 4
    CHandle< CBaseEntity > m_hGameModeEntity; // offset 0x480, size 0x4, align 4
    CHandle< CBaseEntity > m_hCustomHeroPickRulesEntity; // offset 0x484, size 0x4, align 4
    GameTime_t m_flHeroPickStateTransitionTime; // offset 0x488, size 0x4, align 255
    char _pad_048C[0x4]; // offset 0x48C
    uint64 m_iPlayerIDsInControl; // offset 0x490, size 0x8, align 8
    bool m_bSameHeroSelectionEnabled; // offset 0x498, size 0x1, align 1
    bool m_bUseCustomHeroXPValue; // offset 0x499, size 0x1, align 1
    bool m_bUseBaseGoldBountyOnHeroes; // offset 0x49A, size 0x1, align 1
    bool m_bUseUniversalShopMode; // offset 0x49B, size 0x1, align 1
    bool m_bHideKillMessageHeaders; // offset 0x49C, size 0x1, align 1
    char _pad_049D[0x3]; // offset 0x49D
    float32 m_flHeroMinimapIconScale; // offset 0x4A0, size 0x4, align 4
    float32 m_flCreepMinimapIconScale; // offset 0x4A4, size 0x4, align 4
    bool m_bCreepSpawningEnabled; // offset 0x4A8, size 0x1, align 1
    char _pad_04A9[0x3]; // offset 0x4A9
    float32 m_flRuneMinimapIconScale; // offset 0x4AC, size 0x4, align 4
    char[256] m_CustomVictoryMessage; // offset 0x4B0, size 0x100, align 1
    float32 m_flCustomGameEndDelay; // offset 0x5B0, size 0x4, align 4
    float32 m_flCustomGameSetupAutoLaunchDelay; // offset 0x5B4, size 0x4, align 4
    float32 m_flCustomGameSetupTimeout; // offset 0x5B8, size 0x4, align 4
    float32 m_flCustomVictoryMessageDuration; // offset 0x5BC, size 0x4, align 4
    float32 m_flHeroSelectPenaltyTime; // offset 0x5C0, size 0x4, align 4
    bool m_bCustomGameSetupAutoLaunchEnabled; // offset 0x5C4, size 0x1, align 1
    bool m_bCustomGameTeamSelectionLocked; // offset 0x5C5, size 0x1, align 1
    bool m_bCustomGameEnablePickRules; // offset 0x5C6, size 0x1, align 1
    bool m_bCustomGameAllowHeroPickMusic; // offset 0x5C7, size 0x1, align 1
    bool m_bCustomGameAllowMusicAtGameStart; // offset 0x5C8, size 0x1, align 1
    bool m_bCustomGameAllowBattleMusic; // offset 0x5C9, size 0x1, align 1
    bool m_bCustomGameDisableIK; // offset 0x5CA, size 0x1, align 1
    bool m_bCustomGameAllowSecondaryAbilitiesOnOtherUnits; // offset 0x5CB, size 0x1, align 1
    int32 m_iCMModePickBanOrder; // offset 0x5CC, size 0x4, align 4
    int32 m_iCDModePickBanOrder; // offset 0x5D0, size 0x4, align 4
    int32 m_nGGTeam; // offset 0x5D4, size 0x4, align 4
    GameTime_t m_flGGEndsAtTime; // offset 0x5D8, size 0x4, align 255
    bool m_bGGCalled; // offset 0x5DC, size 0x1, align 1
    bool m_bWhiteListEnabled; // offset 0x5DD, size 0x1, align 1
    char _pad_05DE[0x2]; // offset 0x5DE
    uint64[4] m_bItemWhiteList; // offset 0x5E0, size 0x20, align 8
    int32 m_nLastHitUIMode; // offset 0x600, size 0x4, align 4
    bool m_bHUDTimerTutorialMode; // offset 0x604, size 0x1, align 1
    char _pad_0605[0x3]; // offset 0x605
    CountdownTimer m_HeroPickMiscTimer; // offset 0x608, size 0x18, align 8
    CountdownTimer m_ExtraTimeTimer; // offset 0x620, size 0x18, align 8
    float32[2] m_fExtraTimeRemaining; // offset 0x638, size 0x8, align 4
    bool m_bHeroRespawnEnabled; // offset 0x640, size 0x1, align 1
    bool m_bIsRandomingEnabled; // offset 0x641, size 0x1, align 1
    char _pad_0642[0x6]; // offset 0x642
    CUtlVector< int32 > m_HeroPickPhaseBitfield; // offset 0x648, size 0x18, align 8
    bool[64] m_bHasSwapped; // offset 0x660, size 0x40, align 1
    PlayerID_t[2] m_iCaptainPlayerIDs; // offset 0x6A0, size 0x8, align 4
    HeroID_t[24] m_BannedHeroes; // offset 0x6A8, size 0x60, align 4
    HeroID_t[24] m_SelectedHeroes; // offset 0x708, size 0x60, align 4
    int32 m_iActiveTeam; // offset 0x768, size 0x4, align 4
    int32 m_iStartingTeam; // offset 0x76C, size 0x4, align 4
    int32 m_iPenaltyLevelRadiant; // offset 0x770, size 0x4, align 4
    int32 m_iPenaltyLevelDire; // offset 0x774, size 0x4, align 4
    bool m_bIsLoadingScenario; // offset 0x778, size 0x1, align 1
    char _pad_0779[0x7]; // offset 0x779
    CUtlVector< HeroID_t > m_vecBanNominatedHeroes; // offset 0x780, size 0x18, align 8
    CNetworkUtlVectorBase< HeroID_t > m_vecNewBannedHeroes; // offset 0x798, size 0x18, align 8
    CNetworkUtlVectorBase< HeroID_t > m_vecWhitelistedHeroes; // offset 0x7B0, size 0x18, align 8
    CNetworkUtlVectorBase< HeroID_t > m_vecBlacklistedHeroes; // offset 0x7C8, size 0x18, align 8
    bool m_bHideBlacklistedHeroes; // offset 0x7E0, size 0x1, align 1
    char _pad_07E1[0x3]; // offset 0x7E1
    int32 m_nSeriesType; // offset 0x7E4, size 0x4, align 4
    int32 m_nRadiantSeriesWins; // offset 0x7E8, size 0x4, align 4
    int32 m_nDireSeriesWins; // offset 0x7EC, size 0x4, align 4
    CUtlVectorEmbeddedNetworkVar< CHeroesPerPlayer > m_vecAvailableHerosPerPlayerID; // offset 0x7F0, size 0x88, align 8
    CUtlVectorEmbeddedNetworkVar< CHeroesPerPlayer > m_vecLockedHerosByPlayerID; // offset 0x878, size 0x88, align 8
    CUtlVectorEmbeddedNetworkVar< CHeroesPerPlayer > m_vecDisabledRandomHerosByPlayerID; // offset 0x900, size 0x88, align 8
    HeroID_t[24] m_CustomGameForceSelectHero; // offset 0x988, size 0x60, align 4
    float32 m_flGoldTime; // offset 0x9E8, size 0x4, align 4
    float32 m_flXPTime; // offset 0x9EC, size 0x4, align 4
    GameTime_t m_flCreepSpawntime; // offset 0x9F0, size 0x4, align 255
    float32 m_flAnnounceStartTime; // offset 0x9F4, size 0x4, align 4
    int32 m_iGoodTomeCount; // offset 0x9F8, size 0x4, align 4
    int32 m_iBadTomeCount; // offset 0x9FC, size 0x4, align 4
    GameTime_t m_flPreGameStartTime; // offset 0xA00, size 0x4, align 255
    GameTime_t m_flGameStartTime; // offset 0xA04, size 0x4, align 255
    GameTime_t m_flGameEndTime; // offset 0xA08, size 0x4, align 255
    float32 m_flGameLoadTime; // offset 0xA0C, size 0x4, align 4
    int32[2] m_iCustomGameScore; // offset 0xA10, size 0x8, align 4
    int32 m_nCustomGameDifficulty; // offset 0xA18, size 0x4, align 4
    bool m_bEnemyModifiersEnabled; // offset 0xA1C, size 0x1, align 1
    char _pad_0A1D[0x3]; // offset 0xA1D
    int32 m_iWaves; // offset 0xA20, size 0x4, align 4
    int32 m_iCreepUpgradeState; // offset 0xA24, size 0x4, align 4
    GameTime_t m_fGoodGlyphCooldown; // offset 0xA28, size 0x4, align 255
    GameTime_t m_fBadGlyphCooldown; // offset 0xA2C, size 0x4, align 255
    GameTime_t[15] m_flGlyphCooldowns; // offset 0xA30, size 0x3C, align 4
    GameTime_t m_fGoodRadarCooldown; // offset 0xA6C, size 0x4, align 255
    GameTime_t m_fBadRadarCooldown; // offset 0xA70, size 0x4, align 255
    GameTime_t[15] m_flRadarCooldowns; // offset 0xA74, size 0x3C, align 4
    int32 m_iGoodRadarCharges; // offset 0xAB0, size 0x4, align 4
    int32 m_iBadRadarCharges; // offset 0xAB4, size 0x4, align 4
    int32[15] m_iRadarCharges; // offset 0xAB8, size 0x3C, align 4
    float32[24] m_flOutpostTimes; // offset 0xAF4, size 0x60, align 4
    bool m_bIsNightstalkerNight; // offset 0xB54, size 0x1, align 1
    bool m_bIsTemporaryNight; // offset 0xB55, size 0x1, align 1
    bool m_bIsTemporaryDay; // offset 0xB56, size 0x1, align 1
    char _pad_0B57[0x1]; // offset 0xB57
    int32 m_nRiverType; // offset 0xB58, size 0x4, align 4
    HeroID_t m_nTemporaryDayNightSource; // offset 0xB5C, size 0x4, align 255
    PlayerID_t[15] m_nTeamFeaturedPlayerID; // offset 0xB60, size 0x3C, align 4
    item_definition_index_t[15] m_nTeamVersusScreen; // offset 0xB9C, size 0x3C, align 4
    float32 m_flGoldRedistributeTime; // offset 0xBD8, size 0x4, align 4
    int32[2] m_nGoldToRedistribute; // offset 0xBDC, size 0x8, align 4
    GameTime_t m_flNextPreGameThink; // offset 0xBE4, size 0x4, align 255
    GameTime_t m_flNextAllDraftGoldThink; // offset 0xBE8, size 0x4, align 255
    char _pad_0BEC[0x4]; // offset 0xBEC
    float64 m_flTimeEnteredState; // offset 0xBF0, size 0x8, align 8
    uint32 m_unRiverAccountID; // offset 0xBF8, size 0x4, align 4
    char _pad_0BFC[0x4]; // offset 0xBFC
    itemid_t m_ulRiverItemID; // offset 0xC00, size 0x8, align 255
    char _pad_0C08[0x40]; // offset 0xC08
    CUtlVectorEmbeddedNetworkVar< CDOTA_ItemStockInfo > m_vecItemStockInfo; // offset 0xC48, size 0x88, align 8
    DOTA_AssassinMinigameNetworkState m_AssassinMiniGameNetData; // offset 0xCD0, size 0x10, align 255
    int32 m_nGameWinner; // offset 0xCE0, size 0x4, align 4
    char _pad_0CE4[0x4]; // offset 0xCE4
    MatchID_t m_unMatchID64; // offset 0xCE8, size 0x8, align 255
    bool m_bMatchSignoutComplete; // offset 0xCF0, size 0x1, align 1
    char _pad_0CF1[0x3]; // offset 0xCF1
    CHandle< CBaseEntity > m_hSideShop1; // offset 0xCF4, size 0x4, align 4
    CHandle< CBaseEntity > m_hSideShop2; // offset 0xCF8, size 0x4, align 4
    CHandle< CBaseEntity > m_hSecretShop1; // offset 0xCFC, size 0x4, align 4
    CHandle< CBaseEntity > m_hSecretShop2; // offset 0xD00, size 0x4, align 4
    CHandle< CBaseEntity >[15] m_hTeamFountains; // offset 0xD04, size 0x3C, align 4
    CHandle< CBaseEntity >[15] m_hTeamForts; // offset 0xD40, size 0x3C, align 4
    CHandle< CBaseEntity >[15] m_hTeamShops; // offset 0xD7C, size 0x3C, align 4
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hWatchers; // offset 0xDB8, size 0x18, align 8
    CHandle< CBaseEntity >[15] m_hWisdomShrines; // offset 0xDD0, size 0x3C, align 4
    CHandle< CBaseEntity >[15] m_hLotusPools; // offset 0xE0C, size 0x3C, align 4
    CHandle< CBaseEntity > m_hAnnouncerGood; // offset 0xE48, size 0x4, align 4
    CHandle< CBaseEntity > m_hAnnouncerBad; // offset 0xE4C, size 0x4, align 4
    CHandle< CBaseEntity > m_hAnnouncerSpectator; // offset 0xE50, size 0x4, align 4
    CHandle< CBaseEntity > m_hAnnouncerGood_KillingSpree; // offset 0xE54, size 0x4, align 4
    CHandle< CBaseEntity > m_hAnnouncerBad_KillingSpree; // offset 0xE58, size 0x4, align 4
    CHandle< CBaseEntity > m_hAnnouncerSpectator_KillingSpree; // offset 0xE5C, size 0x4, align 4
    bool[15] m_arrTier1TowerDestroyed; // offset 0xE60, size 0xF, align 1
    bool[15] m_arrTier2TowerDestroyed; // offset 0xE6F, size 0xF, align 1
    bool[15] m_arrTier3TowerDestroyed; // offset 0xE7E, size 0xF, align 1
    bool[15] m_arrMeleeBarracksDestroyed; // offset 0xE8D, size 0xF, align 1
    bool m_bTier1TowerDestroyed; // offset 0xE9C, size 0x1, align 1
    bool m_bTier2TowerDestroyed; // offset 0xE9D, size 0x1, align 1
    bool m_bTier3TowerDestroyed; // offset 0xE9E, size 0x1, align 1
    bool m_bMeleeBarracksDestroyed; // offset 0xE9F, size 0x1, align 1
    float32 m_fTimeOfDay; // offset 0xEA0, size 0x4, align 4
    int32 m_iNetTimeOfDay; // offset 0xEA4, size 0x4, align 4
    float32 m_flDaytimeStart; // offset 0xEA8, size 0x4, align 4
    float32 m_flNighttimeStart; // offset 0xEAC, size 0x4, align 4
    int32 m_nLoadedPlayers; // offset 0xEB0, size 0x4, align 4
    int32 m_nExpectedPlayers; // offset 0xEB4, size 0x4, align 4
    char _pad_0EB8[0x8]; // offset 0xEB8
    int32 m_iMinimapDebugGridState; // offset 0xEC0, size 0x4, align 4
    char _pad_0EC4[0x7C]; // offset 0xEC4
    int32 m_iFoWFrameNumber; // offset 0xF40, size 0x4, align 4
    Vector m_vWeatherWindDirection; // offset 0xF44, size 0xC, align 4
    CTormentorSpawnPhase m_tormentorSpawnPhase; // offset 0xF50, size 0x40, align 255
    CUtlVectorEmbeddedNetworkVar< CTormentorSpawnPhase > m_vecTormentorSpawnPhases; // offset 0xF90, size 0x88, align 8
    CNetworkUtlVectorBase< AbilityID_t > m_vecDeityBlessings; // offset 0x1018, size 0x18, align 8
    KeyValues* m_pKVPostGameTable; // offset 0x1030, size 0x8, align 8
    KeyValues* m_pKVEventMatchMetadata; // offset 0x1038, size 0x8, align 8
    KeyValues* m_pKVEventSignout; // offset 0x1040, size 0x8, align 8
    char _pad_1048[0x48]; // offset 0x1048
    HeroID_t[24] m_vecRequiredPlaytestHeroesStorage; // offset 0x1090, size 0x60, align 4
    HeroID_t[24] m_vecRecommendedPlaytestHeroesStorage; // offset 0x10F0, size 0x60, align 4
    bool m_bAllRequiredPlaytestHeroesPicked; // offset 0x1150, size 0x1, align 1
    char _pad_1151[0x3]; // offset 0x1151
    int32 m_nLastPlaytestPickPhase; // offset 0x1154, size 0x4, align 4
    int32 m_nCustomGameFowTeamCount; // offset 0x1158, size 0x4, align 4
    bool m_bUseAlternateABRules; // offset 0x115C, size 0x1, align 1
    bool m_bLobbyIsAssociatedWithGame; // offset 0x115D, size 0x1, align 1
    char _pad_115E[0x2]; // offset 0x115E
    CountdownTimer m_BotDebugTimer; // offset 0x1160, size 0x18, align 8
    uint8[18] m_BotDebugPushLane; // offset 0x1178, size 0x12, align 1
    uint8[18] m_BotDebugDefendLane; // offset 0x118A, size 0x12, align 1
    uint8[6] m_BotDebugFarmLane; // offset 0x119C, size 0x6, align 1
    uint8[8] m_BotDebugRoam; // offset 0x11A2, size 0x8, align 1
    char _pad_11AA[0x2]; // offset 0x11AA
    CHandle< CBaseEntity >[2] m_hBotDebugRoamTarget; // offset 0x11AC, size 0x8, align 4
    uint8[2] m_BotDebugRoshan; // offset 0x11B4, size 0x2, align 1
    char _pad_11B6[0x2]; // offset 0x11B6
    ERoshanSpawnPhase m_nRoshanRespawnPhase; // offset 0x11B8, size 0x4, align 4
    GameTime_t m_flRoshanRespawnPhaseEndTime; // offset 0x11BC, size 0x4, align 255
    CUtlVectorEmbeddedNetworkVar< CDOTA_AbilityDraftAbilityState > m_AbilityDraftAbilities; // offset 0x11C0, size 0x88, align 8
    CUtlVectorEmbeddedNetworkVar< CDOTA_AbilityDraftHeroState > m_AbilityDraftHeroes; // offset 0x1248, size 0x88, align 8
    bool m_bAbilityDraftCurrentPlayerHasPicked; // offset 0x12D0, size 0x1, align 1
    char _pad_12D1[0x3]; // offset 0x12D1
    int32 m_nAbilityDraftPlayerTracker; // offset 0x12D4, size 0x4, align 4
    int32 m_nAbilityDraftRoundNumber; // offset 0x12D8, size 0x4, align 4
    int32 m_nAbilityDraftAdvanceSteps; // offset 0x12DC, size 0x4, align 4
    int32 m_nAbilityDraftPhase; // offset 0x12E0, size 0x4, align 4
    bool m_bIsPlayerDraft; // offset 0x12E4, size 0x1, align 1
    char _pad_12E5[0x3]; // offset 0x12E5
    DOTA_PlayerDraftState m_ePlayerDraftState; // offset 0x12E8, size 0x4, align 4
    char _pad_12EC[0x4]; // offset 0x12EC
    CNetworkUtlVectorBase< uint8 > m_vecPlayerDraftPickOrder; // offset 0x12F0, size 0x18, align 8
    int32 m_nPlayerDraftPick; // offset 0x1308, size 0x4, align 4
    int32 m_nPlayerDraftActiveTeam; // offset 0x130C, size 0x4, align 4
    float32[2] m_flPlayerDraftTimeBank; // offset 0x1310, size 0x8, align 4
    CUtlVector< KeyValues* >[2] m_vecARDMHeroes; // offset 0x1318, size 0x30, align 8
    int32 m_nARDMHeroesPrecached; // offset 0x1348, size 0x4, align 4
    float32 m_fLastARDMPrecache; // offset 0x134C, size 0x4, align 4
    int32 m_nAllDraftPhase; // offset 0x1350, size 0x4, align 4
    bool m_bAllDraftRadiantFirst; // offset 0x1354, size 0x1, align 1
    bool m_bAllowOverrideVPK; // offset 0x1355, size 0x1, align 1
    char _pad_1356[0x2]; // offset 0x1356
    int32[2] m_nARDMHeroesRemaining; // offset 0x1358, size 0x8, align 4
    CUtlVector< CHandle< CDOTA_BaseNPC_Pet > > m_hGlobalPetList; // offset 0x1360, size 0x18, align 8
    char _pad_1378[0x50]; // offset 0x1378
    int32 m_nRadiantRoshanKills; // offset 0x13C8, size 0x4, align 4
    int32 m_nDireRoshanKills; // offset 0x13CC, size 0x4, align 4
    int32 m_nRoshanKillsDay; // offset 0x13D0, size 0x4, align 4
    int32 m_nRoshanKillsNight; // offset 0x13D4, size 0x4, align 4
    int32 m_nTormentorKills; // offset 0x13D8, size 0x4, align 4
    int32 m_nOutpostCaptures; // offset 0x13DC, size 0x4, align 4
    char _pad_13E0[0xC]; // offset 0x13E0
    int32 m_nDistanceCalculations; // offset 0x13EC, size 0x4, align 4
    bool m_bLaneVictoryPredicted; // offset 0x13F0, size 0x1, align 1
    char _pad_13F1[0x7]; // offset 0x13F1
    CUtlOrderedMap< PlayerID_t, int32 > m_mapSuccessfulSmokes; // offset 0x13F8, size 0x28, align 8
    char _pad_1420[0x20]; // offset 0x1420
    bool m_bExperimentalGameplay; // offset 0x1440, size 0x1, align 1
    char _pad_1441[0x1F]; // offset 0x1441
    CUtlVector< HeroPickRecord_t > m_vecHeroPickRecord; // offset 0x1460, size 0x18, align 8
    char _pad_1478[0x28]; // offset 0x1478
    CUtlVector< HeroDeathRecord_t > m_vecHeroDeathRecord; // offset 0x14A0, size 0x18, align 8
    char _pad_14B8[0x18]; // offset 0x14B8
    CUtlVector< CHandle< CBaseEntity > > m_BadResultPositionTriggers; // offset 0x14D0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_RoshanPositionTriggers; // offset 0x14E8, size 0x18, align 8
    CUtlVector< HeroPickRecord_t > m_vecAllDraftHeroPickRecord; // offset 0x1500, size 0x18, align 8
    CUtlOrderedMap< PlayerID_t, CUtlVector< AbilityID_t > > m_vecAbilityDraftOrder; // offset 0x1518, size 0x28, align 8
    char _pad_1540[0x18]; // offset 0x1540
    int32 m_nAllDraftHeroPickCollisionsThisPhase; // offset 0x1558, size 0x4, align 4
    char _pad_155C[0x4]; // offset 0x155C
    CUtlVector< CHandle< CBaseEntity > > m_hRuneSpawners; // offset 0x1560, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hBountyRuneSpawners; // offset 0x1578, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hXPRuneSpawners; // offset 0x1590, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > >[2] m_hNeutralSpawners; // offset 0x15A8, size 0x30, align 8
    int32 m_iPreviousRune1; // offset 0x15D8, size 0x4, align 4
    int32 m_iPreviousRune2; // offset 0x15DC, size 0x4, align 4
    CUtlVector< int32 > m_vecAvailableRunes; // offset 0x15E0, size 0x18, align 8
    float32 m_fNextPowerupRuneSpawnTime; // offset 0x15F8, size 0x4, align 4
    float32 m_fNextBountyRuneSpawnTime; // offset 0x15FC, size 0x4, align 4
    float32 m_fNextBountyRunePrepTime; // offset 0x1600, size 0x4, align 4
    float32 m_fNextXPRuneSpawnTime; // offset 0x1604, size 0x4, align 4
    bool[5] m_aNeutralChoicesLoaded; // offset 0x1608, size 0x5, align 1
    bool m_bFirstPowerupRune; // offset 0x160D, size 0x1, align 1
    bool m_bFirstBountyRune; // offset 0x160E, size 0x1, align 1
    bool m_bFilterMoreGold; // offset 0x160F, size 0x1, align 1
    bool m_bAllowOutpostXP; // offset 0x1610, size 0x1, align 1
    char _pad_1611[0x3]; // offset 0x1611
    CHandle< CBaseEntity > m_hRoshanSpawner; // offset 0x1614, size 0x4, align 4
    int32 m_iPreviousSpectators; // offset 0x1618, size 0x4, align 4
    uint32 m_nMaxSpectators; // offset 0x161C, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hDroppedItems; // offset 0x1620, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hWards; // offset 0x1638, size 0x18, align 8
    CHandle< CBaseEntity > m_hGameEvents; // offset 0x1650, size 0x4, align 4
    char _pad_1654[0x1C]; // offset 0x1654
    CUtlVector< CHandle< CBaseEntity > > m_Towers; // offset 0x1670, size 0x18, align 8
    CUtlVector< CHandle< CDOTA_BaseNPC_Tower > >[10] m_TeamTowers; // offset 0x1688, size 0xF0, align 8
    CUtlVector< CHandle< CBaseEntity > > m_Outposts; // offset 0x1778, size 0x18, align 8
    CUtlVector< VectorWS >[10] m_TeamTowerPositions; // offset 0x1790, size 0xF0, align 8
    CUtlVector< int32 >[10] m_TeamTowerLevels; // offset 0x1880, size 0xF0, align 8
    CUtlVector< int32 >[10] m_TeamTowerLanes; // offset 0x1970, size 0xF0, align 8
    CUtlVector< CHandle< CDOTA_BaseNPC_Building > >[10] m_TeamBarracks; // offset 0x1A60, size 0xF0, align 8
    CUtlVector< CHandle< CDOTA_BaseNPC_Building > >[10] m_TeamShrines; // offset 0x1B50, size 0xF0, align 8
    CountdownTimer m_TempDayTimer; // offset 0x1C40, size 0x18, align 8
    CountdownTimer m_TempNightTimer; // offset 0x1C58, size 0x18, align 8
    CountdownTimer m_NightstalkerNightTimer; // offset 0x1C70, size 0x18, align 8
    CountdownTimer m_TempRiverTimer; // offset 0x1C88, size 0x18, align 8
    bool[2] m_bUseLenientAFK; // offset 0x1CA0, size 0x2, align 1
    bool m_bFirstBlood; // offset 0x1CA2, size 0x1, align 1
    char _pad_1CA3[0x1]; // offset 0x1CA3
    int32 m_nFirstBloodTime; // offset 0x1CA4, size 0x4, align 4
    CountdownTimer m_CheckIdleTimer; // offset 0x1CA8, size 0x18, align 8
    PlayerID_t m_nAnnounceHeroPickRadiantPlayerID; // offset 0x1CC0, size 0x4, align 255
    PlayerID_t m_nAnnounceHeroPickDirePlayerID; // offset 0x1CC4, size 0x4, align 255
    CUtlString[64] m_pszLastUsedAbility; // offset 0x1CC8, size 0x200, align 8
    CUtlVector< CDOTA_ReconnectInfo > m_reconnectinfos; // offset 0x1EC8, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > >[10] m_hEnemyCreepsInBase; // offset 0x1EE0, size 0xF0, align 8
    bool[10] m_bTeamHasAbandonedPlayer; // offset 0x1FD0, size 0xA, align 1
    bool m_bLobbyHasLeaverDetected; // offset 0x1FDA, size 0x1, align 1
    bool m_bGameIsForcedSafeToLeave; // offset 0x1FDB, size 0x1, align 1
    bool m_bLobbyHasDicardMatchResults; // offset 0x1FDC, size 0x1, align 1
    char _pad_1FDD[0x3]; // offset 0x1FDD
    int32 m_iGameEndReason; // offset 0x1FE0, size 0x4, align 4
    bool[64] m_bNotifiedPlayerLeaverStatus; // offset 0x1FE4, size 0x40, align 1
    bool m_bUploadedReplay; // offset 0x2024, size 0x1, align 1
    char _pad_2025[0x3]; // offset 0x2025
    float32 m_flLobbyWaitTime; // offset 0x2028, size 0x4, align 4
    bool m_bGameWasLoaded; // offset 0x202C, size 0x1, align 1
    char _pad_202D[0x3]; // offset 0x202D
    int32 m_nLoadPauseFrameCount; // offset 0x2030, size 0x4, align 4
    char _pad_2034[0x4]; // offset 0x2034
    float64 m_flDemoModeStartTime; // offset 0x2038, size 0x8, align 8
    char _pad_2040[0x8]; // offset 0x2040
    float64 m_flStateFallbackTransitionTime; // offset 0x2048, size 0x8, align 8
    EngineCountdownTimer m_timerFinishReplay; // offset 0x2050, size 0x18, align 8
    CUtlVector< GameChatLogEntry_t > m_vecChatLog; // offset 0x2068, size 0x18, align 8
    char _pad_2080[0x2630]; // offset 0x2080
    bool m_bFatalErrorAbortGame; // offset 0x46B0, size 0x1, align 1
    bool m_bFillEmptySlotsWithBots; // offset 0x46B1, size 0x1, align 1
    char _pad_46B2[0x2]; // offset 0x46B2
    uint32 m_dotaMapSpawnGroup; // offset 0x46B4, size 0x4, align 4
    char _pad_46B8[0x28]; // offset 0x46B8
    uint32 m_lobbyType; // offset 0x46E0, size 0x4, align 4
    LeagueID_t m_lobbyLeagueID; // offset 0x46E4, size 0x4, align 255
    char[256] m_lobbyGameName; // offset 0x46E8, size 0x100, align 1
    CUtlVectorEmbeddedNetworkVar< CHeroStatueLiked > m_vecHeroStatueLiked; // offset 0x47E8, size 0x88, align 8
    int32[15] m_CustomGameTeamMaxPlayers; // offset 0x4870, size 0x3C, align 4
    char _pad_48AC[0x44]; // offset 0x48AC
    int32[5] m_iMutations; // offset 0x48F0, size 0x14, align 4
    char _pad_4904[0x4]; // offset 0x4904
    CNetworkUtlVectorBase< CHandle< CIngameEvent_Base > > m_vecIngameEvents; // offset 0x4908, size 0x18, align 8
    int8 m_nPrimaryIngameEventIndex; // offset 0x4920, size 0x1, align 1
    char _pad_4921[0x3]; // offset 0x4921
    uint32 m_nOfrendaPledges; // offset 0x4924, size 0x4, align 4
    uint32 m_nRadiantOfrendas; // offset 0x4928, size 0x4, align 4
    uint32 m_nDireOfrendas; // offset 0x492C, size 0x4, align 4
    bool m_bOfrendaEnabled; // offset 0x4930, size 0x1, align 1
    char _pad_4931[0x7]; // offset 0x4931
    CUtlVector< sMuertaPartingShotSoulDef > m_vecMuertaPartingShotSouls; // offset 0x4938, size 0x18, align 8
    char _pad_4950[0x18]; // offset 0x4950
    CNetworkUtlVectorBase< NeutralSpawnBoxes_t > m_NeutralSpawnBoxes; // offset 0x4968, size 0x60, align 8
    CNetworkUtlVectorBase< RegionTriggerBoxes_t > m_RegionTriggerBoxes; // offset 0x49C8, size 0x60, align 8
    float64[15] m_flLastItemSuggestionRequestTime; // offset 0x4A28, size 0x78, align 8
    char _pad_4AA0[0xFB8]; // offset 0x4AA0
    float64 m_flLastPerfSampleTime; // offset 0x5A58, size 0x8, align 8
    char _pad_5A60[0x3ED0]; // offset 0x5A60
    int32 m_nMultipleTickFrameCount; // offset 0x9930, size 0x4, align 4
    int32 m_nTimesPlayersDisconnected; // offset 0x9934, size 0x4, align 4
};
