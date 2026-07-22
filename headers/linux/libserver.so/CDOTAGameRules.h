#pragma once

class CDOTAGameRules : public CMultiplayRules /*0x0*/  // sizeof 0x9978, align 0xFF [vtable] (server)
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
    CUtlVectorEmbeddedNetworkVar< CHeroesPerPlayer > m_vecAvailableHerosPerPlayerID; // offset 0x7F0, size 0x90, align 8
    CUtlVectorEmbeddedNetworkVar< CHeroesPerPlayer > m_vecLockedHerosByPlayerID; // offset 0x880, size 0x90, align 8
    CUtlVectorEmbeddedNetworkVar< CHeroesPerPlayer > m_vecDisabledRandomHerosByPlayerID; // offset 0x910, size 0x90, align 8
    HeroID_t[24] m_CustomGameForceSelectHero; // offset 0x9A0, size 0x60, align 4
    float32 m_flGoldTime; // offset 0xA00, size 0x4, align 4
    float32 m_flXPTime; // offset 0xA04, size 0x4, align 4
    GameTime_t m_flCreepSpawntime; // offset 0xA08, size 0x4, align 255
    float32 m_flAnnounceStartTime; // offset 0xA0C, size 0x4, align 4
    int32 m_iGoodTomeCount; // offset 0xA10, size 0x4, align 4
    int32 m_iBadTomeCount; // offset 0xA14, size 0x4, align 4
    GameTime_t m_flPreGameStartTime; // offset 0xA18, size 0x4, align 255
    GameTime_t m_flGameStartTime; // offset 0xA1C, size 0x4, align 255
    GameTime_t m_flGameEndTime; // offset 0xA20, size 0x4, align 255
    float32 m_flGameLoadTime; // offset 0xA24, size 0x4, align 4
    int32[2] m_iCustomGameScore; // offset 0xA28, size 0x8, align 4
    int32 m_nCustomGameDifficulty; // offset 0xA30, size 0x4, align 4
    bool m_bEnemyModifiersEnabled; // offset 0xA34, size 0x1, align 1
    char _pad_0A35[0x3]; // offset 0xA35
    int32 m_iWaves; // offset 0xA38, size 0x4, align 4
    int32 m_iCreepUpgradeState; // offset 0xA3C, size 0x4, align 4
    GameTime_t m_fGoodGlyphCooldown; // offset 0xA40, size 0x4, align 255
    GameTime_t m_fBadGlyphCooldown; // offset 0xA44, size 0x4, align 255
    GameTime_t[15] m_flGlyphCooldowns; // offset 0xA48, size 0x3C, align 4
    GameTime_t m_fGoodRadarCooldown; // offset 0xA84, size 0x4, align 255
    GameTime_t m_fBadRadarCooldown; // offset 0xA88, size 0x4, align 255
    GameTime_t[15] m_flRadarCooldowns; // offset 0xA8C, size 0x3C, align 4
    int32 m_iGoodRadarCharges; // offset 0xAC8, size 0x4, align 4
    int32 m_iBadRadarCharges; // offset 0xACC, size 0x4, align 4
    int32[15] m_iRadarCharges; // offset 0xAD0, size 0x3C, align 4
    float32[24] m_flOutpostTimes; // offset 0xB0C, size 0x60, align 4
    bool m_bIsNightstalkerNight; // offset 0xB6C, size 0x1, align 1
    bool m_bIsTemporaryNight; // offset 0xB6D, size 0x1, align 1
    bool m_bIsTemporaryDay; // offset 0xB6E, size 0x1, align 1
    char _pad_0B6F[0x1]; // offset 0xB6F
    int32 m_nRiverType; // offset 0xB70, size 0x4, align 4
    HeroID_t m_nTemporaryDayNightSource; // offset 0xB74, size 0x4, align 255
    PlayerID_t[15] m_nTeamFeaturedPlayerID; // offset 0xB78, size 0x3C, align 4
    item_definition_index_t[15] m_nTeamVersusScreen; // offset 0xBB4, size 0x3C, align 4
    float32 m_flGoldRedistributeTime; // offset 0xBF0, size 0x4, align 4
    int32[2] m_nGoldToRedistribute; // offset 0xBF4, size 0x8, align 4
    GameTime_t m_flNextPreGameThink; // offset 0xBFC, size 0x4, align 255
    GameTime_t m_flNextAllDraftGoldThink; // offset 0xC00, size 0x4, align 255
    char _pad_0C04[0x4]; // offset 0xC04
    float64 m_flTimeEnteredState; // offset 0xC08, size 0x8, align 8
    uint32 m_unRiverAccountID; // offset 0xC10, size 0x4, align 4
    char _pad_0C14[0x4]; // offset 0xC14
    itemid_t m_ulRiverItemID; // offset 0xC18, size 0x8, align 255
    char _pad_0C20[0x40]; // offset 0xC20
    CUtlVectorEmbeddedNetworkVar< CDOTA_ItemStockInfo > m_vecItemStockInfo; // offset 0xC60, size 0x90, align 8
    DOTA_AssassinMinigameNetworkState m_AssassinMiniGameNetData; // offset 0xCF0, size 0x10, align 255
    int32 m_nGameWinner; // offset 0xD00, size 0x4, align 4
    char _pad_0D04[0x4]; // offset 0xD04
    MatchID_t m_unMatchID64; // offset 0xD08, size 0x8, align 255
    bool m_bMatchSignoutComplete; // offset 0xD10, size 0x1, align 1
    char _pad_0D11[0x3]; // offset 0xD11
    CHandle< CBaseEntity > m_hSideShop1; // offset 0xD14, size 0x4, align 4
    CHandle< CBaseEntity > m_hSideShop2; // offset 0xD18, size 0x4, align 4
    CHandle< CBaseEntity > m_hSecretShop1; // offset 0xD1C, size 0x4, align 4
    CHandle< CBaseEntity > m_hSecretShop2; // offset 0xD20, size 0x4, align 4
    CHandle< CBaseEntity >[15] m_hTeamFountains; // offset 0xD24, size 0x3C, align 4
    CHandle< CBaseEntity >[15] m_hTeamForts; // offset 0xD60, size 0x3C, align 4
    CHandle< CBaseEntity >[15] m_hTeamShops; // offset 0xD9C, size 0x3C, align 4
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hWatchers; // offset 0xDD8, size 0x18, align 8
    CHandle< CBaseEntity >[15] m_hWisdomShrines; // offset 0xDF0, size 0x3C, align 4
    CHandle< CBaseEntity >[15] m_hLotusPools; // offset 0xE2C, size 0x3C, align 4
    CHandle< CBaseEntity > m_hAnnouncerGood; // offset 0xE68, size 0x4, align 4
    CHandle< CBaseEntity > m_hAnnouncerBad; // offset 0xE6C, size 0x4, align 4
    CHandle< CBaseEntity > m_hAnnouncerSpectator; // offset 0xE70, size 0x4, align 4
    CHandle< CBaseEntity > m_hAnnouncerGood_KillingSpree; // offset 0xE74, size 0x4, align 4
    CHandle< CBaseEntity > m_hAnnouncerBad_KillingSpree; // offset 0xE78, size 0x4, align 4
    CHandle< CBaseEntity > m_hAnnouncerSpectator_KillingSpree; // offset 0xE7C, size 0x4, align 4
    bool[15] m_arrTier1TowerDestroyed; // offset 0xE80, size 0xF, align 1
    bool[15] m_arrTier2TowerDestroyed; // offset 0xE8F, size 0xF, align 1
    bool[15] m_arrTier3TowerDestroyed; // offset 0xE9E, size 0xF, align 1
    bool[15] m_arrMeleeBarracksDestroyed; // offset 0xEAD, size 0xF, align 1
    bool m_bTier1TowerDestroyed; // offset 0xEBC, size 0x1, align 1
    bool m_bTier2TowerDestroyed; // offset 0xEBD, size 0x1, align 1
    bool m_bTier3TowerDestroyed; // offset 0xEBE, size 0x1, align 1
    bool m_bMeleeBarracksDestroyed; // offset 0xEBF, size 0x1, align 1
    float32 m_fTimeOfDay; // offset 0xEC0, size 0x4, align 4
    int32 m_iNetTimeOfDay; // offset 0xEC4, size 0x4, align 4
    float32 m_flDaytimeStart; // offset 0xEC8, size 0x4, align 4
    float32 m_flNighttimeStart; // offset 0xECC, size 0x4, align 4
    int32 m_nLoadedPlayers; // offset 0xED0, size 0x4, align 4
    int32 m_nExpectedPlayers; // offset 0xED4, size 0x4, align 4
    char _pad_0ED8[0x8]; // offset 0xED8
    int32 m_iMinimapDebugGridState; // offset 0xEE0, size 0x4, align 4
    char _pad_0EE4[0x7C]; // offset 0xEE4
    int32 m_iFoWFrameNumber; // offset 0xF60, size 0x4, align 4
    Vector m_vWeatherWindDirection; // offset 0xF64, size 0xC, align 4
    CTormentorSpawnPhase m_tormentorSpawnPhase; // offset 0xF70, size 0x40, align 255
    CUtlVectorEmbeddedNetworkVar< CTormentorSpawnPhase > m_vecTormentorSpawnPhases; // offset 0xFB0, size 0x90, align 8
    CNetworkUtlVectorBase< AbilityID_t > m_vecDeityBlessings; // offset 0x1040, size 0x18, align 8
    KeyValues* m_pKVPostGameTable; // offset 0x1058, size 0x8, align 8
    KeyValues* m_pKVEventMatchMetadata; // offset 0x1060, size 0x8, align 8
    KeyValues* m_pKVEventSignout; // offset 0x1068, size 0x8, align 8
    char _pad_1070[0x48]; // offset 0x1070
    HeroID_t[24] m_vecRequiredPlaytestHeroesStorage; // offset 0x10B8, size 0x60, align 4
    HeroID_t[24] m_vecRecommendedPlaytestHeroesStorage; // offset 0x1118, size 0x60, align 4
    bool m_bAllRequiredPlaytestHeroesPicked; // offset 0x1178, size 0x1, align 1
    char _pad_1179[0x3]; // offset 0x1179
    int32 m_nLastPlaytestPickPhase; // offset 0x117C, size 0x4, align 4
    int32 m_nCustomGameFowTeamCount; // offset 0x1180, size 0x4, align 4
    bool m_bUseAlternateABRules; // offset 0x1184, size 0x1, align 1
    bool m_bLobbyIsAssociatedWithGame; // offset 0x1185, size 0x1, align 1
    char _pad_1186[0x2]; // offset 0x1186
    CountdownTimer m_BotDebugTimer; // offset 0x1188, size 0x18, align 8
    uint8[18] m_BotDebugPushLane; // offset 0x11A0, size 0x12, align 1
    uint8[18] m_BotDebugDefendLane; // offset 0x11B2, size 0x12, align 1
    uint8[6] m_BotDebugFarmLane; // offset 0x11C4, size 0x6, align 1
    uint8[8] m_BotDebugRoam; // offset 0x11CA, size 0x8, align 1
    char _pad_11D2[0x2]; // offset 0x11D2
    CHandle< CBaseEntity >[2] m_hBotDebugRoamTarget; // offset 0x11D4, size 0x8, align 4
    uint8[2] m_BotDebugRoshan; // offset 0x11DC, size 0x2, align 1
    char _pad_11DE[0x2]; // offset 0x11DE
    ERoshanSpawnPhase m_nRoshanRespawnPhase; // offset 0x11E0, size 0x4, align 4
    GameTime_t m_flRoshanRespawnPhaseEndTime; // offset 0x11E4, size 0x4, align 255
    CUtlVectorEmbeddedNetworkVar< CDOTA_AbilityDraftAbilityState > m_AbilityDraftAbilities; // offset 0x11E8, size 0x90, align 8
    CUtlVectorEmbeddedNetworkVar< CDOTA_AbilityDraftHeroState > m_AbilityDraftHeroes; // offset 0x1278, size 0x90, align 8
    bool m_bAbilityDraftCurrentPlayerHasPicked; // offset 0x1308, size 0x1, align 1
    char _pad_1309[0x3]; // offset 0x1309
    int32 m_nAbilityDraftPlayerTracker; // offset 0x130C, size 0x4, align 4
    int32 m_nAbilityDraftRoundNumber; // offset 0x1310, size 0x4, align 4
    int32 m_nAbilityDraftAdvanceSteps; // offset 0x1314, size 0x4, align 4
    int32 m_nAbilityDraftPhase; // offset 0x1318, size 0x4, align 4
    bool m_bIsPlayerDraft; // offset 0x131C, size 0x1, align 1
    char _pad_131D[0x3]; // offset 0x131D
    DOTA_PlayerDraftState m_ePlayerDraftState; // offset 0x1320, size 0x4, align 4
    char _pad_1324[0x4]; // offset 0x1324
    CNetworkUtlVectorBase< uint8 > m_vecPlayerDraftPickOrder; // offset 0x1328, size 0x18, align 8
    int32 m_nPlayerDraftPick; // offset 0x1340, size 0x4, align 4
    int32 m_nPlayerDraftActiveTeam; // offset 0x1344, size 0x4, align 4
    float32[2] m_flPlayerDraftTimeBank; // offset 0x1348, size 0x8, align 4
    CUtlVector< KeyValues* >[2] m_vecARDMHeroes; // offset 0x1350, size 0x30, align 8
    int32 m_nARDMHeroesPrecached; // offset 0x1380, size 0x4, align 4
    float32 m_fLastARDMPrecache; // offset 0x1384, size 0x4, align 4
    int32 m_nAllDraftPhase; // offset 0x1388, size 0x4, align 4
    bool m_bAllDraftRadiantFirst; // offset 0x138C, size 0x1, align 1
    bool m_bAllowOverrideVPK; // offset 0x138D, size 0x1, align 1
    char _pad_138E[0x2]; // offset 0x138E
    int32[2] m_nARDMHeroesRemaining; // offset 0x1390, size 0x8, align 4
    CUtlVector< CHandle< CDOTA_BaseNPC_Pet > > m_hGlobalPetList; // offset 0x1398, size 0x18, align 8
    char _pad_13B0[0x50]; // offset 0x13B0
    int32 m_nRadiantRoshanKills; // offset 0x1400, size 0x4, align 4
    int32 m_nDireRoshanKills; // offset 0x1404, size 0x4, align 4
    int32 m_nRoshanKillsDay; // offset 0x1408, size 0x4, align 4
    int32 m_nRoshanKillsNight; // offset 0x140C, size 0x4, align 4
    int32 m_nTormentorKills; // offset 0x1410, size 0x4, align 4
    int32 m_nOutpostCaptures; // offset 0x1414, size 0x4, align 4
    char _pad_1418[0xC]; // offset 0x1418
    int32 m_nDistanceCalculations; // offset 0x1424, size 0x4, align 4
    bool m_bLaneVictoryPredicted; // offset 0x1428, size 0x1, align 1
    char _pad_1429[0x7]; // offset 0x1429
    CUtlOrderedMap< PlayerID_t, int32 > m_mapSuccessfulSmokes; // offset 0x1430, size 0x28, align 8
    char _pad_1458[0x20]; // offset 0x1458
    bool m_bExperimentalGameplay; // offset 0x1478, size 0x1, align 1
    char _pad_1479[0x1F]; // offset 0x1479
    CUtlVector< HeroPickRecord_t > m_vecHeroPickRecord; // offset 0x1498, size 0x18, align 8
    char _pad_14B0[0x28]; // offset 0x14B0
    CUtlVector< HeroDeathRecord_t > m_vecHeroDeathRecord; // offset 0x14D8, size 0x18, align 8
    char _pad_14F0[0x18]; // offset 0x14F0
    CUtlVector< CHandle< CBaseEntity > > m_BadResultPositionTriggers; // offset 0x1508, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_RoshanPositionTriggers; // offset 0x1520, size 0x18, align 8
    CUtlVector< HeroPickRecord_t > m_vecAllDraftHeroPickRecord; // offset 0x1538, size 0x18, align 8
    CUtlOrderedMap< PlayerID_t, CUtlVector< AbilityID_t > > m_vecAbilityDraftOrder; // offset 0x1550, size 0x28, align 8
    char _pad_1578[0x18]; // offset 0x1578
    int32 m_nAllDraftHeroPickCollisionsThisPhase; // offset 0x1590, size 0x4, align 4
    char _pad_1594[0x4]; // offset 0x1594
    CUtlVector< CHandle< CBaseEntity > > m_hRuneSpawners; // offset 0x1598, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hBountyRuneSpawners; // offset 0x15B0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hXPRuneSpawners; // offset 0x15C8, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > >[2] m_hNeutralSpawners; // offset 0x15E0, size 0x30, align 8
    int32 m_iPreviousRune1; // offset 0x1610, size 0x4, align 4
    int32 m_iPreviousRune2; // offset 0x1614, size 0x4, align 4
    CUtlVector< int32 > m_vecAvailableRunes; // offset 0x1618, size 0x18, align 8
    float32 m_fNextPowerupRuneSpawnTime; // offset 0x1630, size 0x4, align 4
    float32 m_fNextBountyRuneSpawnTime; // offset 0x1634, size 0x4, align 4
    float32 m_fNextBountyRunePrepTime; // offset 0x1638, size 0x4, align 4
    float32 m_fNextXPRuneSpawnTime; // offset 0x163C, size 0x4, align 4
    bool[5] m_aNeutralChoicesLoaded; // offset 0x1640, size 0x5, align 1
    bool m_bFirstPowerupRune; // offset 0x1645, size 0x1, align 1
    bool m_bFirstBountyRune; // offset 0x1646, size 0x1, align 1
    bool m_bFilterMoreGold; // offset 0x1647, size 0x1, align 1
    bool m_bAllowOutpostXP; // offset 0x1648, size 0x1, align 1
    char _pad_1649[0x3]; // offset 0x1649
    CHandle< CBaseEntity > m_hRoshanSpawner; // offset 0x164C, size 0x4, align 4
    int32 m_iPreviousSpectators; // offset 0x1650, size 0x4, align 4
    uint32 m_nMaxSpectators; // offset 0x1654, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hDroppedItems; // offset 0x1658, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hWards; // offset 0x1670, size 0x18, align 8
    CHandle< CBaseEntity > m_hGameEvents; // offset 0x1688, size 0x4, align 4
    char _pad_168C[0x1C]; // offset 0x168C
    CUtlVector< CHandle< CBaseEntity > > m_Towers; // offset 0x16A8, size 0x18, align 8
    CUtlVector< CHandle< CDOTA_BaseNPC_Tower > >[10] m_TeamTowers; // offset 0x16C0, size 0xF0, align 8
    CUtlVector< CHandle< CBaseEntity > > m_Outposts; // offset 0x17B0, size 0x18, align 8
    CUtlVector< VectorWS >[10] m_TeamTowerPositions; // offset 0x17C8, size 0xF0, align 8
    CUtlVector< int32 >[10] m_TeamTowerLevels; // offset 0x18B8, size 0xF0, align 8
    CUtlVector< int32 >[10] m_TeamTowerLanes; // offset 0x19A8, size 0xF0, align 8
    CUtlVector< CHandle< CDOTA_BaseNPC_Building > >[10] m_TeamBarracks; // offset 0x1A98, size 0xF0, align 8
    CUtlVector< CHandle< CDOTA_BaseNPC_Building > >[10] m_TeamShrines; // offset 0x1B88, size 0xF0, align 8
    CountdownTimer m_TempDayTimer; // offset 0x1C78, size 0x18, align 8
    CountdownTimer m_TempNightTimer; // offset 0x1C90, size 0x18, align 8
    CountdownTimer m_NightstalkerNightTimer; // offset 0x1CA8, size 0x18, align 8
    CountdownTimer m_TempRiverTimer; // offset 0x1CC0, size 0x18, align 8
    bool[2] m_bUseLenientAFK; // offset 0x1CD8, size 0x2, align 1
    bool m_bFirstBlood; // offset 0x1CDA, size 0x1, align 1
    char _pad_1CDB[0x1]; // offset 0x1CDB
    int32 m_nFirstBloodTime; // offset 0x1CDC, size 0x4, align 4
    CountdownTimer m_CheckIdleTimer; // offset 0x1CE0, size 0x18, align 8
    PlayerID_t m_nAnnounceHeroPickRadiantPlayerID; // offset 0x1CF8, size 0x4, align 255
    PlayerID_t m_nAnnounceHeroPickDirePlayerID; // offset 0x1CFC, size 0x4, align 255
    CUtlString[64] m_pszLastUsedAbility; // offset 0x1D00, size 0x200, align 8
    CUtlVector< CDOTA_ReconnectInfo > m_reconnectinfos; // offset 0x1F00, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > >[10] m_hEnemyCreepsInBase; // offset 0x1F18, size 0xF0, align 8
    bool[10] m_bTeamHasAbandonedPlayer; // offset 0x2008, size 0xA, align 1
    bool m_bLobbyHasLeaverDetected; // offset 0x2012, size 0x1, align 1
    bool m_bGameIsForcedSafeToLeave; // offset 0x2013, size 0x1, align 1
    bool m_bLobbyHasDicardMatchResults; // offset 0x2014, size 0x1, align 1
    char _pad_2015[0x3]; // offset 0x2015
    int32 m_iGameEndReason; // offset 0x2018, size 0x4, align 4
    bool[64] m_bNotifiedPlayerLeaverStatus; // offset 0x201C, size 0x40, align 1
    bool m_bUploadedReplay; // offset 0x205C, size 0x1, align 1
    char _pad_205D[0x3]; // offset 0x205D
    float32 m_flLobbyWaitTime; // offset 0x2060, size 0x4, align 4
    bool m_bGameWasLoaded; // offset 0x2064, size 0x1, align 1
    char _pad_2065[0x3]; // offset 0x2065
    int32 m_nLoadPauseFrameCount; // offset 0x2068, size 0x4, align 4
    char _pad_206C[0x4]; // offset 0x206C
    float64 m_flDemoModeStartTime; // offset 0x2070, size 0x8, align 8
    char _pad_2078[0x8]; // offset 0x2078
    float64 m_flStateFallbackTransitionTime; // offset 0x2080, size 0x8, align 8
    EngineCountdownTimer m_timerFinishReplay; // offset 0x2088, size 0x18, align 8
    CUtlVector< GameChatLogEntry_t > m_vecChatLog; // offset 0x20A0, size 0x18, align 8
    char _pad_20B8[0x2630]; // offset 0x20B8
    bool m_bFatalErrorAbortGame; // offset 0x46E8, size 0x1, align 1
    bool m_bFillEmptySlotsWithBots; // offset 0x46E9, size 0x1, align 1
    char _pad_46EA[0x2]; // offset 0x46EA
    uint32 m_dotaMapSpawnGroup; // offset 0x46EC, size 0x4, align 4
    char _pad_46F0[0x28]; // offset 0x46F0
    uint32 m_lobbyType; // offset 0x4718, size 0x4, align 4
    LeagueID_t m_lobbyLeagueID; // offset 0x471C, size 0x4, align 255
    char[256] m_lobbyGameName; // offset 0x4720, size 0x100, align 1
    CUtlVectorEmbeddedNetworkVar< CHeroStatueLiked > m_vecHeroStatueLiked; // offset 0x4820, size 0x90, align 8
    int32[15] m_CustomGameTeamMaxPlayers; // offset 0x48B0, size 0x3C, align 4
    char _pad_48EC[0x44]; // offset 0x48EC
    int32[5] m_iMutations; // offset 0x4930, size 0x14, align 4
    char _pad_4944[0x4]; // offset 0x4944
    CNetworkUtlVectorBase< CHandle< CIngameEvent_Base > > m_vecIngameEvents; // offset 0x4948, size 0x18, align 8
    int8 m_nPrimaryIngameEventIndex; // offset 0x4960, size 0x1, align 1
    char _pad_4961[0x3]; // offset 0x4961
    uint32 m_nOfrendaPledges; // offset 0x4964, size 0x4, align 4
    uint32 m_nRadiantOfrendas; // offset 0x4968, size 0x4, align 4
    uint32 m_nDireOfrendas; // offset 0x496C, size 0x4, align 4
    bool m_bOfrendaEnabled; // offset 0x4970, size 0x1, align 1
    char _pad_4971[0x7]; // offset 0x4971
    CUtlVector< sMuertaPartingShotSoulDef > m_vecMuertaPartingShotSouls; // offset 0x4978, size 0x18, align 8
    char _pad_4990[0x18]; // offset 0x4990
    CNetworkUtlVectorBase< NeutralSpawnBoxes_t > m_NeutralSpawnBoxes; // offset 0x49A8, size 0x60, align 8
    CNetworkUtlVectorBase< RegionTriggerBoxes_t > m_RegionTriggerBoxes; // offset 0x4A08, size 0x60, align 8
    float64[15] m_flLastItemSuggestionRequestTime; // offset 0x4A68, size 0x78, align 8
    char _pad_4AE0[0xFB8]; // offset 0x4AE0
    float64 m_flLastPerfSampleTime; // offset 0x5A98, size 0x8, align 8
    char _pad_5AA0[0x3ED0]; // offset 0x5AA0
    int32 m_nMultipleTickFrameCount; // offset 0x9970, size 0x4, align 4
    int32 m_nTimesPlayersDisconnected; // offset 0x9974, size 0x4, align 4
};
