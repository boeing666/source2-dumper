#pragma once

class CDOTAGameRules : public CMultiplayRules /*0x0*/  // sizeof 0x9BA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x128]; // offset 0x0
    int32 m_nRuneCycle; // offset 0x128, size 0x4, align 4
    int32 m_nNextPowerRuneType; // offset 0x12C, size 0x4, align 4
    int32 m_nNextPowerRuneSpawnIndex; // offset 0x130, size 0x4, align 4
    char _pad_0134[0x4]; // offset 0x134
    float64 m_flPauseTime; // offset 0x138, size 0x8, align 8
    PlayerID_t m_pausingPlayerId; // offset 0x140, size 0x4, align 255
    PlayerID_t m_unpausingPlayerId; // offset 0x144, size 0x4, align 255
    float32 m_fPauseRawTime; // offset 0x148, size 0x4, align 4
    float32 m_fPauseCurTime; // offset 0x14C, size 0x4, align 4
    float32 m_fUnpauseRawTime; // offset 0x150, size 0x4, align 4
    float32 m_fUnpauseCurTime; // offset 0x154, size 0x4, align 4
    int32[64] m_nPausesRemaining; // offset 0x158, size 0x100, align 4
    float32[64] m_nLastPauseTime; // offset 0x258, size 0x100, align 4
    char _pad_0358[0x8]; // offset 0x358
    int32 m_iMiscHeroPickCounter; // offset 0x360, size 0x4, align 4
    CHandle< CBaseEntity > m_hEndGameCinematicEntity; // offset 0x364, size 0x4, align 4
    CountdownTimer m_EndGameCinematicTimer; // offset 0x368, size 0x18, align 8
    CHandle< CDOTA_BaseNPC > m_hOverlayHealthBarUnit; // offset 0x380, size 0x4, align 4
    int32 m_nOverlayHealthBarType; // offset 0x384, size 0x4, align 4
    bool m_bIsInCinematicMode; // offset 0x388, size 0x1, align 1
    bool m_bIsInClientSideCinematicMode; // offset 0x389, size 0x1, align 1
    bool m_bFreeCourierMode; // offset 0x38A, size 0x1, align 1
    char _pad_038B[0x1]; // offset 0x38B
    int32 m_nStartingGold; // offset 0x38C, size 0x4, align 4
    int32 m_nGoldPerTick; // offset 0x390, size 0x4, align 4
    float32 m_flGoldTickTime; // offset 0x394, size 0x4, align 4
    bool m_bEnableSuggestAbilities; // offset 0x398, size 0x1, align 1
    bool m_bEnableSuggestItems; // offset 0x399, size 0x1, align 1
    char _pad_039A[0x1E]; // offset 0x39A
    uint32 m_unFanfareGoodGuys; // offset 0x3B8, size 0x4, align 4
    uint32 m_unFanfareBadGuys; // offset 0x3BC, size 0x4, align 4
    GameTime_t m_flFanfareTime; // offset 0x3C0, size 0x4, align 255
    bool m_bSpeechUseSpawnInsteadOfRespawnConcept; // offset 0x3C4, size 0x1, align 1
    bool m_bSpeechSendTeamSpeaksToSpectators; // offset 0x3C5, size 0x1, align 1
    bool m_bIgnoreLobbyTeamsInCustomGames; // offset 0x3C6, size 0x1, align 1
    char _pad_03C7[0x1]; // offset 0x3C7
    int32 m_nCustomGameBansPerTeam; // offset 0x3C8, size 0x4, align 4
    int32 m_iFOWDefeatedTempViewer; // offset 0x3CC, size 0x4, align 4
    char _pad_03D0[0x48]; // offset 0x3D0
    int32 m_nGameState; // offset 0x418, size 0x4, align 4
    DOTA_HeroPickState m_nHeroPickState; // offset 0x41C, size 0x4, align 4
    bool m_bAlternateHeroGridsEnabled; // offset 0x420, size 0x1, align 1
    char _pad_0421[0x3]; // offset 0x421
    GameTime_t m_flStateTransitionTime; // offset 0x424, size 0x4, align 255
    float32 m_flOverride_dota_hero_selection_time; // offset 0x428, size 0x4, align 4
    float32 m_flOverride_dota_pregame_time; // offset 0x42C, size 0x4, align 4
    float32 m_flOverride_dota_postgame_time; // offset 0x430, size 0x4, align 4
    float32 m_flOverride_dota_strategy_time; // offset 0x434, size 0x4, align 4
    float32 m_flOverride_dota_team_showcase_duration; // offset 0x438, size 0x4, align 4
    float32 m_flOverride_dota_rune_spawn_time; // offset 0x43C, size 0x4, align 4
    float32[15] m_flShowcaseTime; // offset 0x440, size 0x3C, align 4
    float32 m_flNeutralInitialSpawnOffset; // offset 0x47C, size 0x4, align 4
    float32 m_flOverride_dota_tree_regrow_time; // offset 0x480, size 0x4, align 4
    int32 m_iGameMode; // offset 0x484, size 0x4, align 4
    CHandle< CBaseEntity > m_hGameModeEntity; // offset 0x488, size 0x4, align 4
    CHandle< CBaseEntity > m_hCustomHeroPickRulesEntity; // offset 0x48C, size 0x4, align 4
    GameTime_t m_flHeroPickStateTransitionTime; // offset 0x490, size 0x4, align 255
    char _pad_0494[0x4]; // offset 0x494
    uint64 m_iPlayerIDsInControl; // offset 0x498, size 0x8, align 8
    bool m_bSameHeroSelectionEnabled; // offset 0x4A0, size 0x1, align 1
    bool m_bUseCustomHeroXPValue; // offset 0x4A1, size 0x1, align 1
    bool m_bUseBaseGoldBountyOnHeroes; // offset 0x4A2, size 0x1, align 1
    bool m_bUseUniversalShopMode; // offset 0x4A3, size 0x1, align 1
    bool m_bHideKillMessageHeaders; // offset 0x4A4, size 0x1, align 1
    char _pad_04A5[0x3]; // offset 0x4A5
    float32 m_flHeroMinimapIconScale; // offset 0x4A8, size 0x4, align 4
    float32 m_flCreepMinimapIconScale; // offset 0x4AC, size 0x4, align 4
    bool m_bCreepSpawningEnabled; // offset 0x4B0, size 0x1, align 1
    char _pad_04B1[0x3]; // offset 0x4B1
    float32 m_flRuneMinimapIconScale; // offset 0x4B4, size 0x4, align 4
    char[256] m_CustomVictoryMessage; // offset 0x4B8, size 0x100, align 1
    float32 m_flCustomGameEndDelay; // offset 0x5B8, size 0x4, align 4
    float32 m_flCustomGameSetupAutoLaunchDelay; // offset 0x5BC, size 0x4, align 4
    float32 m_flCustomGameSetupTimeout; // offset 0x5C0, size 0x4, align 4
    float32 m_flCustomVictoryMessageDuration; // offset 0x5C4, size 0x4, align 4
    float32 m_flHeroSelectPenaltyTime; // offset 0x5C8, size 0x4, align 4
    bool m_bCustomGameSetupAutoLaunchEnabled; // offset 0x5CC, size 0x1, align 1
    bool m_bCustomGameTeamSelectionLocked; // offset 0x5CD, size 0x1, align 1
    bool m_bCustomGameEnablePickRules; // offset 0x5CE, size 0x1, align 1
    bool m_bCustomGameAllowHeroPickMusic; // offset 0x5CF, size 0x1, align 1
    bool m_bCustomGameAllowMusicAtGameStart; // offset 0x5D0, size 0x1, align 1
    bool m_bCustomGameAllowBattleMusic; // offset 0x5D1, size 0x1, align 1
    bool m_bCustomGameDisableIK; // offset 0x5D2, size 0x1, align 1
    bool m_bCustomGameAllowSecondaryAbilitiesOnOtherUnits; // offset 0x5D3, size 0x1, align 1
    int32 m_iCMModePickBanOrder; // offset 0x5D4, size 0x4, align 4
    int32 m_iCDModePickBanOrder; // offset 0x5D8, size 0x4, align 4
    int32 m_nGGTeam; // offset 0x5DC, size 0x4, align 4
    GameTime_t m_flGGEndsAtTime; // offset 0x5E0, size 0x4, align 255
    bool m_bGGCalled; // offset 0x5E4, size 0x1, align 1
    bool m_bWhiteListEnabled; // offset 0x5E5, size 0x1, align 1
    char _pad_05E6[0x2]; // offset 0x5E6
    uint64[4] m_bItemWhiteList; // offset 0x5E8, size 0x20, align 8
    int32 m_nLastHitUIMode; // offset 0x608, size 0x4, align 4
    bool m_bHUDTimerTutorialMode; // offset 0x60C, size 0x1, align 1
    char _pad_060D[0x3]; // offset 0x60D
    CountdownTimer m_HeroPickMiscTimer; // offset 0x610, size 0x18, align 8
    CountdownTimer m_ExtraTimeTimer; // offset 0x628, size 0x18, align 8
    float32[2] m_fExtraTimeRemaining; // offset 0x640, size 0x8, align 4
    bool m_bHeroRespawnEnabled; // offset 0x648, size 0x1, align 1
    bool m_bIsRandomingEnabled; // offset 0x649, size 0x1, align 1
    char _pad_064A[0x6]; // offset 0x64A
    CUtlVector< int32 > m_HeroPickPhaseBitfield; // offset 0x650, size 0x18, align 8
    bool[64] m_bHasSwapped; // offset 0x668, size 0x40, align 1
    PlayerID_t[2] m_iCaptainPlayerIDs; // offset 0x6A8, size 0x8, align 4
    HeroID_t[24] m_BannedHeroes; // offset 0x6B0, size 0x60, align 4
    HeroID_t[24] m_SelectedHeroes; // offset 0x710, size 0x60, align 4
    int32 m_iActiveTeam; // offset 0x770, size 0x4, align 4
    int32 m_iStartingTeam; // offset 0x774, size 0x4, align 4
    int32 m_iPenaltyLevelRadiant; // offset 0x778, size 0x4, align 4
    int32 m_iPenaltyLevelDire; // offset 0x77C, size 0x4, align 4
    bool m_bIsLoadingScenario; // offset 0x780, size 0x1, align 1
    char _pad_0781[0x7]; // offset 0x781
    CUtlVector< HeroID_t > m_vecBanNominatedHeroes; // offset 0x788, size 0x18, align 8
    CNetworkUtlVectorBase< HeroID_t > m_vecNewBannedHeroes; // offset 0x7A0, size 0x18, align 8
    CNetworkUtlVectorBase< HeroID_t > m_vecWhitelistedHeroes; // offset 0x7B8, size 0x18, align 8
    CNetworkUtlVectorBase< HeroID_t > m_vecBlacklistedHeroes; // offset 0x7D0, size 0x18, align 8
    bool m_bHideBlacklistedHeroes; // offset 0x7E8, size 0x1, align 1
    char _pad_07E9[0x3]; // offset 0x7E9
    int32 m_nSeriesType; // offset 0x7EC, size 0x4, align 4
    int32 m_nRadiantSeriesWins; // offset 0x7F0, size 0x4, align 4
    int32 m_nDireSeriesWins; // offset 0x7F4, size 0x4, align 4
    CUtlVectorEmbeddedNetworkVar< CHeroesPerPlayer > m_vecAvailableHerosPerPlayerID; // offset 0x7F8, size 0x90, align 8
    CUtlVectorEmbeddedNetworkVar< CHeroesPerPlayer > m_vecLockedHerosByPlayerID; // offset 0x888, size 0x90, align 8
    CUtlVectorEmbeddedNetworkVar< CHeroesPerPlayer > m_vecDisabledRandomHerosByPlayerID; // offset 0x918, size 0x90, align 8
    HeroID_t[24] m_CustomGameForceSelectHero; // offset 0x9A8, size 0x60, align 4
    float32 m_flGoldTime; // offset 0xA08, size 0x4, align 4
    float32 m_flXPTime; // offset 0xA0C, size 0x4, align 4
    GameTime_t m_flCreepSpawntime; // offset 0xA10, size 0x4, align 255
    float32 m_flAnnounceStartTime; // offset 0xA14, size 0x4, align 4
    int32 m_iGoodTomeCount; // offset 0xA18, size 0x4, align 4
    int32 m_iBadTomeCount; // offset 0xA1C, size 0x4, align 4
    GameTime_t m_flPreGameStartTime; // offset 0xA20, size 0x4, align 255
    GameTime_t m_flGameStartTime; // offset 0xA24, size 0x4, align 255
    GameTime_t m_flGameEndTime; // offset 0xA28, size 0x4, align 255
    float32 m_flGameLoadTime; // offset 0xA2C, size 0x4, align 4
    int32[2] m_iCustomGameScore; // offset 0xA30, size 0x8, align 4
    int32 m_nCustomGameDifficulty; // offset 0xA38, size 0x4, align 4
    bool m_bEnemyModifiersEnabled; // offset 0xA3C, size 0x1, align 1
    char _pad_0A3D[0x3]; // offset 0xA3D
    int32 m_iWaves; // offset 0xA40, size 0x4, align 4
    int32 m_iCreepUpgradeState; // offset 0xA44, size 0x4, align 4
    GameTime_t m_fGoodGlyphCooldown; // offset 0xA48, size 0x4, align 255
    GameTime_t m_fBadGlyphCooldown; // offset 0xA4C, size 0x4, align 255
    GameTime_t[15] m_flGlyphCooldowns; // offset 0xA50, size 0x3C, align 4
    int32 m_iGoodGlyphCharges; // offset 0xA8C, size 0x4, align 4
    int32 m_iBadGlyphCharges; // offset 0xA90, size 0x4, align 4
    int32[15] m_iGlyphCharges; // offset 0xA94, size 0x3C, align 4
    GameTime_t m_fGoodGlyphActiveEndTime; // offset 0xAD0, size 0x4, align 255
    GameTime_t m_fBadGlyphActiveEndTime; // offset 0xAD4, size 0x4, align 255
    GameTime_t[15] m_flGlyphActiveEndTimes; // offset 0xAD8, size 0x3C, align 4
    GameTime_t[15] m_flGlyphUseCooldowns; // offset 0xB14, size 0x3C, align 4
    GameTime_t m_fGoodRadarCooldown; // offset 0xB50, size 0x4, align 255
    GameTime_t m_fBadRadarCooldown; // offset 0xB54, size 0x4, align 255
    GameTime_t[15] m_flRadarCooldowns; // offset 0xB58, size 0x3C, align 4
    GameTime_t[15] m_flGreaterHornOfBattleCooldowns; // offset 0xB94, size 0x3C, align 4
    int32 m_iGoodRadarCharges; // offset 0xBD0, size 0x4, align 4
    int32 m_iBadRadarCharges; // offset 0xBD4, size 0x4, align 4
    int32[15] m_iRadarCharges; // offset 0xBD8, size 0x3C, align 4
    float32[24] m_flOutpostTimes; // offset 0xC14, size 0x60, align 4
    bool m_bIsNightstalkerNight; // offset 0xC74, size 0x1, align 1
    bool m_bIsTemporaryNight; // offset 0xC75, size 0x1, align 1
    bool m_bIsTemporaryDay; // offset 0xC76, size 0x1, align 1
    char _pad_0C77[0x1]; // offset 0xC77
    int32 m_nRiverType; // offset 0xC78, size 0x4, align 4
    HeroID_t m_nTemporaryDayNightSource; // offset 0xC7C, size 0x4, align 255
    PlayerID_t[15] m_nTeamFeaturedPlayerID; // offset 0xC80, size 0x3C, align 4
    item_definition_index_t[15] m_nTeamVersusScreen; // offset 0xCBC, size 0x3C, align 4
    float32 m_flGoldRedistributeTime; // offset 0xCF8, size 0x4, align 4
    int32[2] m_nGoldToRedistribute; // offset 0xCFC, size 0x8, align 4
    GameTime_t m_flNextPreGameThink; // offset 0xD04, size 0x4, align 255
    GameTime_t m_flNextAllDraftGoldThink; // offset 0xD08, size 0x4, align 255
    char _pad_0D0C[0x4]; // offset 0xD0C
    float64 m_flTimeEnteredState; // offset 0xD10, size 0x8, align 8
    uint32 m_unRiverAccountID; // offset 0xD18, size 0x4, align 4
    char _pad_0D1C[0x4]; // offset 0xD1C
    itemid_t m_ulRiverItemID; // offset 0xD20, size 0x8, align 255
    char _pad_0D28[0x40]; // offset 0xD28
    CUtlVectorEmbeddedNetworkVar< CDOTA_ItemStockInfo > m_vecItemStockInfo; // offset 0xD68, size 0x90, align 8
    DOTA_AssassinMinigameNetworkState m_AssassinMiniGameNetData; // offset 0xDF8, size 0x10, align 255
    int32 m_nGameWinner; // offset 0xE08, size 0x4, align 4
    char _pad_0E0C[0x4]; // offset 0xE0C
    MatchID_t m_unMatchID64; // offset 0xE10, size 0x8, align 255
    bool m_bMatchSignoutComplete; // offset 0xE18, size 0x1, align 1
    char _pad_0E19[0x3]; // offset 0xE19
    CHandle< CBaseEntity > m_hSideShop1; // offset 0xE1C, size 0x4, align 4
    CHandle< CBaseEntity > m_hSideShop2; // offset 0xE20, size 0x4, align 4
    CHandle< CBaseEntity > m_hSecretShop1; // offset 0xE24, size 0x4, align 4
    CHandle< CBaseEntity > m_hSecretShop2; // offset 0xE28, size 0x4, align 4
    CHandle< CBaseEntity >[15] m_hTeamFountains; // offset 0xE2C, size 0x3C, align 4
    CHandle< CBaseEntity >[15] m_hTeamForts; // offset 0xE68, size 0x3C, align 4
    CHandle< CBaseEntity >[15] m_hTeamShops; // offset 0xEA4, size 0x3C, align 4
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hWatchers; // offset 0xEE0, size 0x18, align 8
    CHandle< CBaseEntity >[15] m_hWisdomShrines; // offset 0xEF8, size 0x3C, align 4
    CHandle< CBaseEntity >[15] m_hLotusPools; // offset 0xF34, size 0x3C, align 4
    CHandle< CBaseEntity > m_hAnnouncerGood; // offset 0xF70, size 0x4, align 4
    CHandle< CBaseEntity > m_hAnnouncerBad; // offset 0xF74, size 0x4, align 4
    CHandle< CBaseEntity > m_hAnnouncerSpectator; // offset 0xF78, size 0x4, align 4
    CHandle< CBaseEntity > m_hAnnouncerGood_KillingSpree; // offset 0xF7C, size 0x4, align 4
    CHandle< CBaseEntity > m_hAnnouncerBad_KillingSpree; // offset 0xF80, size 0x4, align 4
    CHandle< CBaseEntity > m_hAnnouncerSpectator_KillingSpree; // offset 0xF84, size 0x4, align 4
    bool[15] m_arrTier1TowerDestroyed; // offset 0xF88, size 0xF, align 1
    bool[15] m_arrTier2TowerDestroyed; // offset 0xF97, size 0xF, align 1
    bool[15] m_arrTier3TowerDestroyed; // offset 0xFA6, size 0xF, align 1
    bool[15] m_arrMeleeBarracksDestroyed; // offset 0xFB5, size 0xF, align 1
    bool m_bTier1TowerDestroyed; // offset 0xFC4, size 0x1, align 1
    bool m_bTier2TowerDestroyed; // offset 0xFC5, size 0x1, align 1
    bool m_bTier3TowerDestroyed; // offset 0xFC6, size 0x1, align 1
    bool m_bMeleeBarracksDestroyed; // offset 0xFC7, size 0x1, align 1
    float32 m_fTimeOfDay; // offset 0xFC8, size 0x4, align 4
    int32 m_iNetTimeOfDay; // offset 0xFCC, size 0x4, align 4
    float32 m_flDaytimeStart; // offset 0xFD0, size 0x4, align 4
    float32 m_flNighttimeStart; // offset 0xFD4, size 0x4, align 4
    int32 m_nLoadedPlayers; // offset 0xFD8, size 0x4, align 4
    int32 m_nExpectedPlayers; // offset 0xFDC, size 0x4, align 4
    char _pad_0FE0[0x8]; // offset 0xFE0
    int32 m_iMinimapDebugGridState; // offset 0xFE8, size 0x4, align 4
    char _pad_0FEC[0x7C]; // offset 0xFEC
    int32 m_iFoWFrameNumber; // offset 0x1068, size 0x4, align 4
    char _pad_106C[0x4]; // offset 0x106C
    CUtlVectorEmbeddedNetworkVar< CDOTA_FoWRevealedRegion > m_vecFoWRevealedRegions; // offset 0x1070, size 0x90, align 8
    Vector m_vWeatherWindDirection; // offset 0x1100, size 0xC, align 4
    char _pad_110C[0x4]; // offset 0x110C
    CTormentorSpawnPhase m_tormentorSpawnPhase; // offset 0x1110, size 0x40, align 255
    CUtlVectorEmbeddedNetworkVar< CTormentorSpawnPhase > m_vecTormentorSpawnPhases; // offset 0x1150, size 0x90, align 8
    CNetworkUtlVectorBase< AbilityID_t > m_vecDeityBlessings; // offset 0x11E0, size 0x18, align 8
    CUtlVectorEmbeddedNetworkVar< NeutralArtifactPoolState_t > m_arrArtifactPools; // offset 0x11F8, size 0x90, align 8
    KeyValues* m_pKVPostGameTable; // offset 0x1288, size 0x8, align 8
    KeyValues* m_pKVEventMatchMetadata; // offset 0x1290, size 0x8, align 8
    KeyValues* m_pKVEventSignout; // offset 0x1298, size 0x8, align 8
    char _pad_12A0[0x48]; // offset 0x12A0
    HeroID_t[24] m_vecRequiredPlaytestHeroesStorage; // offset 0x12E8, size 0x60, align 4
    HeroID_t[24] m_vecRecommendedPlaytestHeroesStorage; // offset 0x1348, size 0x60, align 4
    bool m_bAllRequiredPlaytestHeroesPicked; // offset 0x13A8, size 0x1, align 1
    char _pad_13A9[0x3]; // offset 0x13A9
    int32 m_nLastPlaytestPickPhase; // offset 0x13AC, size 0x4, align 4
    int32 m_nCustomGameFowTeamCount; // offset 0x13B0, size 0x4, align 4
    bool m_bUseAlternateABRules; // offset 0x13B4, size 0x1, align 1
    bool m_bLobbyIsAssociatedWithGame; // offset 0x13B5, size 0x1, align 1
    char _pad_13B6[0x2]; // offset 0x13B6
    CountdownTimer m_BotDebugTimer; // offset 0x13B8, size 0x18, align 8
    uint8[18] m_BotDebugPushLane; // offset 0x13D0, size 0x12, align 1
    uint8[18] m_BotDebugDefendLane; // offset 0x13E2, size 0x12, align 1
    uint8[6] m_BotDebugFarmLane; // offset 0x13F4, size 0x6, align 1
    uint8[8] m_BotDebugRoam; // offset 0x13FA, size 0x8, align 1
    char _pad_1402[0x2]; // offset 0x1402
    CHandle< CBaseEntity >[2] m_hBotDebugRoamTarget; // offset 0x1404, size 0x8, align 4
    uint8[2] m_BotDebugRoshan; // offset 0x140C, size 0x2, align 1
    char _pad_140E[0x2]; // offset 0x140E
    ERoshanSpawnPhase m_nRoshanRespawnPhase; // offset 0x1410, size 0x4, align 4
    GameTime_t m_flRoshanRespawnPhaseEndTime; // offset 0x1414, size 0x4, align 255
    CUtlVectorEmbeddedNetworkVar< CDOTA_AbilityDraftAbilityState > m_AbilityDraftAbilities; // offset 0x1418, size 0x90, align 8
    CUtlVectorEmbeddedNetworkVar< CDOTA_AbilityDraftHeroState > m_AbilityDraftHeroes; // offset 0x14A8, size 0x90, align 8
    bool m_bAbilityDraftCurrentPlayerHasPicked; // offset 0x1538, size 0x1, align 1
    char _pad_1539[0x3]; // offset 0x1539
    int32 m_nAbilityDraftPlayerTracker; // offset 0x153C, size 0x4, align 4
    int32 m_nAbilityDraftRoundNumber; // offset 0x1540, size 0x4, align 4
    int32 m_nAbilityDraftAdvanceSteps; // offset 0x1544, size 0x4, align 4
    int32 m_nAbilityDraftPhase; // offset 0x1548, size 0x4, align 4
    bool m_bIsPlayerDraft; // offset 0x154C, size 0x1, align 1
    char _pad_154D[0x3]; // offset 0x154D
    DOTA_PlayerDraftState m_ePlayerDraftState; // offset 0x1550, size 0x4, align 4
    char _pad_1554[0x4]; // offset 0x1554
    CNetworkUtlVectorBase< uint8 > m_vecPlayerDraftPickOrder; // offset 0x1558, size 0x18, align 8
    int32 m_nPlayerDraftPick; // offset 0x1570, size 0x4, align 4
    int32 m_nPlayerDraftActiveTeam; // offset 0x1574, size 0x4, align 4
    float32[2] m_flPlayerDraftTimeBank; // offset 0x1578, size 0x8, align 4
    CUtlVector< KeyValues* >[2] m_vecARDMHeroes; // offset 0x1580, size 0x30, align 8
    int32 m_nARDMHeroesPrecached; // offset 0x15B0, size 0x4, align 4
    float32 m_fLastARDMPrecache; // offset 0x15B4, size 0x4, align 4
    int32 m_nAllDraftPhase; // offset 0x15B8, size 0x4, align 4
    bool m_bAllDraftRadiantFirst; // offset 0x15BC, size 0x1, align 1
    bool m_bAllowOverrideVPK; // offset 0x15BD, size 0x1, align 1
    char _pad_15BE[0x2]; // offset 0x15BE
    int32[2] m_nARDMHeroesRemaining; // offset 0x15C0, size 0x8, align 4
    CUtlVector< CHandle< CDOTA_BaseNPC_Pet > > m_hGlobalPetList; // offset 0x15C8, size 0x18, align 8
    char _pad_15E0[0x50]; // offset 0x15E0
    int32 m_nRadiantRoshanKills; // offset 0x1630, size 0x4, align 4
    int32 m_nDireRoshanKills; // offset 0x1634, size 0x4, align 4
    int32 m_nRoshanKillsDay; // offset 0x1638, size 0x4, align 4
    int32 m_nRoshanKillsNight; // offset 0x163C, size 0x4, align 4
    int32 m_nTormentorKills; // offset 0x1640, size 0x4, align 4
    int32 m_nOutpostCaptures; // offset 0x1644, size 0x4, align 4
    char _pad_1648[0xC]; // offset 0x1648
    int32 m_nDistanceCalculations; // offset 0x1654, size 0x4, align 4
    bool m_bLaneVictoryPredicted; // offset 0x1658, size 0x1, align 1
    char _pad_1659[0x7]; // offset 0x1659
    CUtlOrderedMap< PlayerID_t, int32 > m_mapSuccessfulSmokes; // offset 0x1660, size 0x28, align 8
    char _pad_1688[0x20]; // offset 0x1688
    bool m_bExperimentalGameplay; // offset 0x16A8, size 0x1, align 1
    char _pad_16A9[0x1F]; // offset 0x16A9
    CUtlVector< HeroPickRecord_t > m_vecHeroPickRecord; // offset 0x16C8, size 0x18, align 8
    char _pad_16E0[0x28]; // offset 0x16E0
    CUtlVector< HeroDeathRecord_t > m_vecHeroDeathRecord; // offset 0x1708, size 0x18, align 8
    char _pad_1720[0x18]; // offset 0x1720
    CUtlVector< CHandle< CBaseEntity > > m_BadResultPositionTriggers; // offset 0x1738, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_RoshanPositionTriggers; // offset 0x1750, size 0x18, align 8
    CUtlVector< HeroPickRecord_t > m_vecAllDraftHeroPickRecord; // offset 0x1768, size 0x18, align 8
    CUtlOrderedMap< PlayerID_t, CUtlVector< AbilityID_t > > m_vecAbilityDraftOrder; // offset 0x1780, size 0x28, align 8
    char _pad_17A8[0x18]; // offset 0x17A8
    int32 m_nAllDraftHeroPickCollisionsThisPhase; // offset 0x17C0, size 0x4, align 4
    char _pad_17C4[0x4]; // offset 0x17C4
    CUtlVector< CHandle< CBaseEntity > > m_hRuneSpawners; // offset 0x17C8, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hBountyRuneSpawners; // offset 0x17E0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hXPRuneSpawners; // offset 0x17F8, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > >[2] m_hNeutralSpawners; // offset 0x1810, size 0x30, align 8
    int32 m_iPreviousRune1; // offset 0x1840, size 0x4, align 4
    int32 m_iPreviousRune2; // offset 0x1844, size 0x4, align 4
    CUtlVector< int32 > m_vecAvailableRunes; // offset 0x1848, size 0x18, align 8
    float32 m_fNextPowerupRuneSpawnTime; // offset 0x1860, size 0x4, align 4
    float32 m_fNextBountyRuneSpawnTime; // offset 0x1864, size 0x4, align 4
    float32 m_fNextBountyRunePrepTime; // offset 0x1868, size 0x4, align 4
    float32 m_fNextXPRuneSpawnTime; // offset 0x186C, size 0x4, align 4
    bool[4] m_aNeutralChoicesLoaded; // offset 0x1870, size 0x4, align 1
    bool m_bFirstPowerupRune; // offset 0x1874, size 0x1, align 1
    bool m_bFirstBountyRune; // offset 0x1875, size 0x1, align 1
    bool m_bFilterMoreGold; // offset 0x1876, size 0x1, align 1
    bool m_bAllowOutpostXP; // offset 0x1877, size 0x1, align 1
    CHandle< CBaseEntity > m_hRoshanSpawner; // offset 0x1878, size 0x4, align 4
    int32 m_iPreviousSpectators; // offset 0x187C, size 0x4, align 4
    uint32 m_nMaxSpectators; // offset 0x1880, size 0x4, align 4
    char _pad_1884[0x4]; // offset 0x1884
    CUtlVector< CHandle< CBaseEntity > > m_hDroppedItems; // offset 0x1888, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hWards; // offset 0x18A0, size 0x18, align 8
    CHandle< CBaseEntity > m_hGameEvents; // offset 0x18B8, size 0x4, align 4
    char _pad_18BC[0x1C]; // offset 0x18BC
    CUtlVector< CHandle< CBaseEntity > > m_Towers; // offset 0x18D8, size 0x18, align 8
    CUtlVector< CHandle< CDOTA_BaseNPC_Tower > >[10] m_TeamTowers; // offset 0x18F0, size 0xF0, align 8
    CUtlVector< CHandle< CBaseEntity > > m_Outposts; // offset 0x19E0, size 0x18, align 8
    CUtlVector< VectorWS >[10] m_TeamTowerPositions; // offset 0x19F8, size 0xF0, align 8
    CUtlVector< int32 >[10] m_TeamTowerLevels; // offset 0x1AE8, size 0xF0, align 8
    CUtlVector< int32 >[10] m_TeamTowerLanes; // offset 0x1BD8, size 0xF0, align 8
    CUtlVector< CHandle< CDOTA_BaseNPC_Building > >[10] m_TeamBarracks; // offset 0x1CC8, size 0xF0, align 8
    CUtlVector< CHandle< CDOTA_BaseNPC_Building > >[10] m_TeamShrines; // offset 0x1DB8, size 0xF0, align 8
    CountdownTimer m_TempDayTimer; // offset 0x1EA8, size 0x18, align 8
    CountdownTimer m_TempNightTimer; // offset 0x1EC0, size 0x18, align 8
    CountdownTimer m_NightstalkerNightTimer; // offset 0x1ED8, size 0x18, align 8
    CountdownTimer m_TempRiverTimer; // offset 0x1EF0, size 0x18, align 8
    bool[2] m_bUseLenientAFK; // offset 0x1F08, size 0x2, align 1
    bool m_bFirstBlood; // offset 0x1F0A, size 0x1, align 1
    char _pad_1F0B[0x1]; // offset 0x1F0B
    int32 m_nFirstBloodTime; // offset 0x1F0C, size 0x4, align 4
    CountdownTimer m_CheckIdleTimer; // offset 0x1F10, size 0x18, align 8
    PlayerID_t m_nAnnounceHeroPickRadiantPlayerID; // offset 0x1F28, size 0x4, align 255
    PlayerID_t m_nAnnounceHeroPickDirePlayerID; // offset 0x1F2C, size 0x4, align 255
    CUtlString[64] m_pszLastUsedAbility; // offset 0x1F30, size 0x200, align 8
    CUtlVector< CDOTA_ReconnectInfo > m_reconnectinfos; // offset 0x2130, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > >[10] m_hEnemyCreepsInBase; // offset 0x2148, size 0xF0, align 8
    bool[10] m_bTeamHasAbandonedPlayer; // offset 0x2238, size 0xA, align 1
    bool m_bLobbyHasLeaverDetected; // offset 0x2242, size 0x1, align 1
    bool m_bGameIsForcedSafeToLeave; // offset 0x2243, size 0x1, align 1
    bool m_bLobbyHasDicardMatchResults; // offset 0x2244, size 0x1, align 1
    char _pad_2245[0x3]; // offset 0x2245
    int32 m_iGameEndReason; // offset 0x2248, size 0x4, align 4
    bool[64] m_bNotifiedPlayerLeaverStatus; // offset 0x224C, size 0x40, align 1
    bool m_bUploadedReplay; // offset 0x228C, size 0x1, align 1
    char _pad_228D[0x3]; // offset 0x228D
    float32 m_flLobbyWaitTime; // offset 0x2290, size 0x4, align 4
    bool m_bGameWasLoaded; // offset 0x2294, size 0x1, align 1
    char _pad_2295[0x3]; // offset 0x2295
    int32 m_nLoadPauseFrameCount; // offset 0x2298, size 0x4, align 4
    char _pad_229C[0x4]; // offset 0x229C
    float64 m_flDemoModeStartTime; // offset 0x22A0, size 0x8, align 8
    char _pad_22A8[0x8]; // offset 0x22A8
    float64 m_flStateFallbackTransitionTime; // offset 0x22B0, size 0x8, align 8
    EngineCountdownTimer m_timerFinishReplay; // offset 0x22B8, size 0x18, align 8
    CUtlVector< GameChatLogEntry_t > m_vecChatLog; // offset 0x22D0, size 0x18, align 8
    char _pad_22E8[0x2630]; // offset 0x22E8
    bool m_bFatalErrorAbortGame; // offset 0x4918, size 0x1, align 1
    bool m_bFillEmptySlotsWithBots; // offset 0x4919, size 0x1, align 1
    char _pad_491A[0x2]; // offset 0x491A
    uint32 m_dotaMapSpawnGroup; // offset 0x491C, size 0x4, align 4
    char _pad_4920[0x28]; // offset 0x4920
    uint32 m_lobbyType; // offset 0x4948, size 0x4, align 4
    LeagueID_t m_lobbyLeagueID; // offset 0x494C, size 0x4, align 255
    char[256] m_lobbyGameName; // offset 0x4950, size 0x100, align 1
    CUtlVectorEmbeddedNetworkVar< CHeroStatueLiked > m_vecHeroStatueLiked; // offset 0x4A50, size 0x90, align 8
    int32[15] m_CustomGameTeamMaxPlayers; // offset 0x4AE0, size 0x3C, align 4
    char _pad_4B1C[0x44]; // offset 0x4B1C
    int32[5] m_iMutations; // offset 0x4B60, size 0x14, align 4
    char _pad_4B74[0x4]; // offset 0x4B74
    CNetworkUtlVectorBase< CHandle< CIngameEvent_Base > > m_vecIngameEvents; // offset 0x4B78, size 0x18, align 8
    int8 m_nPrimaryIngameEventIndex; // offset 0x4B90, size 0x1, align 1
    char _pad_4B91[0x3]; // offset 0x4B91
    uint32 m_nOfrendaPledges; // offset 0x4B94, size 0x4, align 4
    uint32 m_nRadiantOfrendas; // offset 0x4B98, size 0x4, align 4
    uint32 m_nDireOfrendas; // offset 0x4B9C, size 0x4, align 4
    bool m_bOfrendaEnabled; // offset 0x4BA0, size 0x1, align 1
    char _pad_4BA1[0x7]; // offset 0x4BA1
    CUtlVector< sMuertaPartingShotSoulDef > m_vecMuertaPartingShotSouls; // offset 0x4BA8, size 0x18, align 8
    char _pad_4BC0[0x18]; // offset 0x4BC0
    CNetworkUtlVectorBase< NeutralSpawnBoxes_t > m_NeutralSpawnBoxes; // offset 0x4BD8, size 0x60, align 8
    CNetworkUtlVectorBase< RegionTriggerBoxes_t > m_RegionTriggerBoxes; // offset 0x4C38, size 0x60, align 8
    float64[15] m_flLastItemSuggestionRequestTime; // offset 0x4C98, size 0x78, align 8
    char _pad_4D10[0xFB8]; // offset 0x4D10
    float64 m_flLastPerfSampleTime; // offset 0x5CC8, size 0x8, align 8
    char _pad_5CD0[0x3ED0]; // offset 0x5CD0
    int32 m_nMultipleTickFrameCount; // offset 0x9BA0, size 0x4, align 4
    int32 m_nTimesPlayersDisconnected; // offset 0x9BA4, size 0x4, align 4
};
