#pragma once

class C_DOTAGamerules : public C_MultiplayRules /*0x0*/  // sizeof 0xFC90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x3C]; // offset 0x0
    int32 m_nRuneCycle; // offset 0x3C, size 0x4, align 4
    int32 m_iMiscHeroPickCounter; // offset 0x40, size 0x4, align 4
    CHandle< C_BaseEntity > m_hEndGameCinematicEntity; // offset 0x44, size 0x4, align 4
    CHandle< C_DOTA_BaseNPC > m_hOverlayHealthBarUnit; // offset 0x48, size 0x4, align 4
    int32 m_nOverlayHealthBarType; // offset 0x4C, size 0x4, align 4
    bool m_bIsInCinematicMode; // offset 0x50, size 0x1, align 1
    bool m_bIsInClientSideCinematicMode; // offset 0x51, size 0x1, align 1
    bool m_bFreeCourierMode; // offset 0x52, size 0x1, align 1
    char _pad_0053[0x1]; // offset 0x53
    int32 m_nStartingGold; // offset 0x54, size 0x4, align 4
    int32 m_nGoldPerTick; // offset 0x58, size 0x4, align 4
    float32 m_flGoldTickTime; // offset 0x5C, size 0x4, align 4
    bool m_bItemWhiteListChanged; // offset 0x60, size 0x1, align 1
    bool m_bEnableSuggestAbilities; // offset 0x61, size 0x1, align 1
    bool m_bEnableSuggestItems; // offset 0x62, size 0x1, align 1
    char _pad_0063[0x1]; // offset 0x63
    uint32 m_unFanfareGoodGuys; // offset 0x64, size 0x4, align 4
    uint32 m_unFanfareBadGuys; // offset 0x68, size 0x4, align 4
    int32 m_iMapType; // offset 0x6C, size 0x4, align 4
    int32 m_nServerGameState; // offset 0x70, size 0x4, align 4
    DOTA_HeroPickState m_nServerHeroPickState; // offset 0x74, size 0x4, align 4
    int32 m_nGameState; // offset 0x78, size 0x4, align 4
    DOTA_HeroPickState m_nHeroPickState; // offset 0x7C, size 0x4, align 4
    bool m_bAlternateHeroGridsEnabled; // offset 0x80, size 0x1, align 1
    char _pad_0081[0x3]; // offset 0x81
    GameTime_t m_flStateTransitionTime; // offset 0x84, size 0x4, align 255
    float32 m_flOverride_dota_hero_selection_time; // offset 0x88, size 0x4, align 4
    float32 m_flOverride_dota_pregame_time; // offset 0x8C, size 0x4, align 4
    float32 m_flOverride_dota_postgame_time; // offset 0x90, size 0x4, align 4
    float32 m_flOverride_dota_strategy_time; // offset 0x94, size 0x4, align 4
    float32 m_flOverride_dota_team_showcase_duration; // offset 0x98, size 0x4, align 4
    float32 m_flOverride_dota_rune_spawn_time; // offset 0x9C, size 0x4, align 4
    float32[15] m_flShowcaseTime; // offset 0xA0, size 0x3C, align 4
    float32 m_flNeutralInitialSpawnOffset; // offset 0xDC, size 0x4, align 4
    int32 m_iGameMode; // offset 0xE0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hGameModeEntity; // offset 0xE4, size 0x4, align 4
    CHandle< C_BaseEntity > m_hCustomHeroPickRulesEntity; // offset 0xE8, size 0x4, align 4
    GameTime_t m_flHeroPickStateTransitionTime; // offset 0xEC, size 0x4, align 255
    uint64 m_iPlayerIDsInControl; // offset 0xF0, size 0x8, align 8
    bool m_bSameHeroSelectionEnabled; // offset 0xF8, size 0x1, align 1
    bool m_bUseCustomHeroXPValue; // offset 0xF9, size 0x1, align 1
    bool m_bUseBaseGoldBountyOnHeroes; // offset 0xFA, size 0x1, align 1
    bool m_bUseUniversalShopMode; // offset 0xFB, size 0x1, align 1
    bool m_bHideKillMessageHeaders; // offset 0xFC, size 0x1, align 1
    char _pad_00FD[0x3]; // offset 0xFD
    float32 m_flHeroMinimapIconScale; // offset 0x100, size 0x4, align 4
    float32 m_flCreepMinimapIconScale; // offset 0x104, size 0x4, align 4
    bool m_bCreepSpawningEnabled; // offset 0x108, size 0x1, align 1
    char _pad_0109[0x3]; // offset 0x109
    float32 m_flRuneMinimapIconScale; // offset 0x10C, size 0x4, align 4
    char[256] m_CustomVictoryMessage; // offset 0x110, size 0x100, align 1
    float32 m_flCustomGameEndDelay; // offset 0x210, size 0x4, align 4
    float32 m_flCustomGameSetupAutoLaunchDelay; // offset 0x214, size 0x4, align 4
    float32 m_flCustomGameSetupTimeout; // offset 0x218, size 0x4, align 4
    float32 m_flCustomVictoryMessageDuration; // offset 0x21C, size 0x4, align 4
    float32 m_flHeroSelectPenaltyTime; // offset 0x220, size 0x4, align 4
    bool m_bCustomGameSetupAutoLaunchEnabled; // offset 0x224, size 0x1, align 1
    bool m_bCustomGameTeamSelectionLocked; // offset 0x225, size 0x1, align 1
    bool m_bCustomGameEnablePickRules; // offset 0x226, size 0x1, align 1
    bool m_bCustomGameAllowHeroPickMusic; // offset 0x227, size 0x1, align 1
    bool m_bCustomGameAllowMusicAtGameStart; // offset 0x228, size 0x1, align 1
    bool m_bCustomGameAllowBattleMusic; // offset 0x229, size 0x1, align 1
    bool m_bCustomGameDisableIK; // offset 0x22A, size 0x1, align 1
    bool m_bCustomGameAllowSecondaryAbilitiesOnOtherUnits; // offset 0x22B, size 0x1, align 1
    int32 m_iCMModePickBanOrder; // offset 0x22C, size 0x4, align 4
    int32 m_iCDModePickBanOrder; // offset 0x230, size 0x4, align 4
    int32 m_nGGTeam; // offset 0x234, size 0x4, align 4
    GameTime_t m_flGGEndsAtTime; // offset 0x238, size 0x4, align 255
    bool m_bGGCalled; // offset 0x23C, size 0x1, align 1
    bool m_bWhiteListEnabled; // offset 0x23D, size 0x1, align 1
    char _pad_023E[0x2]; // offset 0x23E
    uint64[4] m_bItemWhiteList; // offset 0x240, size 0x20, align 8
    int32 m_nLastHitUIMode; // offset 0x260, size 0x4, align 4
    bool m_bHUDTimerTutorialMode; // offset 0x264, size 0x1, align 1
    char _pad_0265[0x3]; // offset 0x265
    CountdownTimer m_HeroPickMiscTimer; // offset 0x268, size 0x18, align 8
    CountdownTimer m_ExtraTimeTimer; // offset 0x280, size 0x18, align 8
    float32[2] m_fExtraTimeRemaining; // offset 0x298, size 0x8, align 4
    bool m_bHeroRespawnEnabled; // offset 0x2A0, size 0x1, align 1
    bool m_bIsRandomingEnabled; // offset 0x2A1, size 0x1, align 1
    char _pad_02A2[0x2]; // offset 0x2A2
    PlayerID_t[2] m_iCaptainPlayerIDs; // offset 0x2A4, size 0x8, align 4
    HeroID_t[24] m_BannedHeroes; // offset 0x2AC, size 0x60, align 4
    HeroID_t[24] m_SelectedHeroes; // offset 0x30C, size 0x60, align 4
    int32 m_iActiveTeam; // offset 0x36C, size 0x4, align 4
    int32 m_iStartingTeam; // offset 0x370, size 0x4, align 4
    int32 m_iPenaltyLevelRadiant; // offset 0x374, size 0x4, align 4
    int32 m_iPenaltyLevelDire; // offset 0x378, size 0x4, align 4
    bool m_bIsLoadingScenario; // offset 0x37C, size 0x1, align 1
    char _pad_037D[0x3]; // offset 0x37D
    C_NetworkUtlVectorBase< HeroID_t > m_vecNewBannedHeroes; // offset 0x380, size 0x18, align 8
    C_NetworkUtlVectorBase< HeroID_t > m_vecWhitelistedHeroes; // offset 0x398, size 0x18, align 8
    C_NetworkUtlVectorBase< HeroID_t > m_vecBlacklistedHeroes; // offset 0x3B0, size 0x18, align 8
    bool m_bHideBlacklistedHeroes; // offset 0x3C8, size 0x1, align 1
    char _pad_03C9[0x3]; // offset 0x3C9
    int32 m_nSeriesType; // offset 0x3CC, size 0x4, align 4
    int32 m_nRadiantSeriesWins; // offset 0x3D0, size 0x4, align 4
    int32 m_nDireSeriesWins; // offset 0x3D4, size 0x4, align 4
    C_UtlVectorEmbeddedNetworkVar< CHeroesPerPlayer > m_vecAvailableHerosPerPlayerID; // offset 0x3D8, size 0x68, align 8
    C_UtlVectorEmbeddedNetworkVar< CHeroesPerPlayer > m_vecLockedHerosByPlayerID; // offset 0x440, size 0x68, align 8
    C_UtlVectorEmbeddedNetworkVar< CHeroesPerPlayer > m_vecDisabledRandomHerosByPlayerID; // offset 0x4A8, size 0x68, align 8
    HeroID_t[24] m_CustomGameForceSelectHero; // offset 0x510, size 0x60, align 4
    float32 m_flGoldTime; // offset 0x570, size 0x4, align 4
    float32 m_flXPTime; // offset 0x574, size 0x4, align 4
    GameTime_t m_flCreepSpawntime; // offset 0x578, size 0x4, align 255
    float32 m_flAnnounceStartTime; // offset 0x57C, size 0x4, align 4
    int32 m_iGoodTomeCount; // offset 0x580, size 0x4, align 4
    int32 m_iBadTomeCount; // offset 0x584, size 0x4, align 4
    GameTime_t m_flPreGameStartTime; // offset 0x588, size 0x4, align 255
    GameTime_t m_flGameStartTime; // offset 0x58C, size 0x4, align 255
    GameTime_t m_flGameEndTime; // offset 0x590, size 0x4, align 255
    float32 m_flGameLoadTime; // offset 0x594, size 0x4, align 4
    int32[2] m_iCustomGameScore; // offset 0x598, size 0x8, align 4
    int32 m_nCustomGameDifficulty; // offset 0x5A0, size 0x4, align 4
    bool m_bEnemyModifiersEnabled; // offset 0x5A4, size 0x1, align 1
    char _pad_05A5[0x3]; // offset 0x5A5
    int32 m_iWaves; // offset 0x5A8, size 0x4, align 4
    int32 m_iCreepUpgradeState; // offset 0x5AC, size 0x4, align 4
    GameTime_t m_fGoodGlyphCooldown; // offset 0x5B0, size 0x4, align 255
    GameTime_t m_fBadGlyphCooldown; // offset 0x5B4, size 0x4, align 255
    GameTime_t[15] m_flGlyphCooldowns; // offset 0x5B8, size 0x3C, align 4
    GameTime_t m_fGoodRadarCooldown; // offset 0x5F4, size 0x4, align 255
    GameTime_t m_fBadRadarCooldown; // offset 0x5F8, size 0x4, align 255
    GameTime_t[15] m_flRadarCooldowns; // offset 0x5FC, size 0x3C, align 4
    int32 m_iGoodRadarCharges; // offset 0x638, size 0x4, align 4
    int32 m_iBadRadarCharges; // offset 0x63C, size 0x4, align 4
    int32[15] m_iRadarCharges; // offset 0x640, size 0x3C, align 4
    float32[24] m_flOutpostTimes; // offset 0x67C, size 0x60, align 4
    bool m_bIsNightstalkerNight; // offset 0x6DC, size 0x1, align 1
    bool m_bIsTemporaryNight; // offset 0x6DD, size 0x1, align 1
    bool m_bIsTemporaryDay; // offset 0x6DE, size 0x1, align 1
    char _pad_06DF[0x1]; // offset 0x6DF
    int32 m_nRiverType; // offset 0x6E0, size 0x4, align 4
    HeroID_t m_nTemporaryDayNightSource; // offset 0x6E4, size 0x4, align 255
    PlayerID_t[15] m_nTeamFeaturedPlayerID; // offset 0x6E8, size 0x3C, align 4
    item_definition_index_t[15] m_nTeamVersusScreen; // offset 0x724, size 0x3C, align 4
    float32 m_flGoldRedistributeTime; // offset 0x760, size 0x4, align 4
    int32[2] m_nGoldToRedistribute; // offset 0x764, size 0x8, align 4
    GameTime_t m_flNextPreGameThink; // offset 0x76C, size 0x4, align 255
    GameTime_t m_flNextAllDraftGoldThink; // offset 0x770, size 0x4, align 255
    char _pad_0774[0x4]; // offset 0x774
    float64 m_flTimeEnteredState; // offset 0x778, size 0x8, align 8
    uint32 m_unRiverAccountID; // offset 0x780, size 0x4, align 4
    char _pad_0784[0x4]; // offset 0x784
    itemid_t m_ulRiverItemID; // offset 0x788, size 0x8, align 255
    char _pad_0790[0x40]; // offset 0x790
    C_UtlVectorEmbeddedNetworkVar< CDOTA_ItemStockInfo > m_vecItemStockInfo; // offset 0x7D0, size 0x68, align 8
    DOTA_AssassinMinigameNetworkState m_AssassinMiniGameNetData; // offset 0x838, size 0x10, align 255
    int32 m_nGameWinner; // offset 0x848, size 0x4, align 4
    char _pad_084C[0x4]; // offset 0x84C
    MatchID_t m_unMatchID64; // offset 0x850, size 0x8, align 255
    bool m_bMatchSignoutComplete; // offset 0x858, size 0x1, align 1
    char _pad_0859[0x3]; // offset 0x859
    CHandle< C_BaseEntity > m_hSideShop1; // offset 0x85C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hSideShop2; // offset 0x860, size 0x4, align 4
    CHandle< C_BaseEntity > m_hSecretShop1; // offset 0x864, size 0x4, align 4
    CHandle< C_BaseEntity > m_hSecretShop2; // offset 0x868, size 0x4, align 4
    CHandle< C_BaseEntity >[15] m_hTeamFountains; // offset 0x86C, size 0x3C, align 4
    CHandle< C_BaseEntity >[15] m_hTeamForts; // offset 0x8A8, size 0x3C, align 4
    CHandle< C_BaseEntity >[15] m_hTeamShops; // offset 0x8E4, size 0x3C, align 4
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hWatchers; // offset 0x920, size 0x18, align 8
    CHandle< C_BaseEntity >[15] m_hWisdomShrines; // offset 0x938, size 0x3C, align 4
    CHandle< C_BaseEntity >[15] m_hLotusPools; // offset 0x974, size 0x3C, align 4
    CHandle< C_BaseEntity > m_hAnnouncerGood; // offset 0x9B0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hAnnouncerBad; // offset 0x9B4, size 0x4, align 4
    CHandle< C_BaseEntity > m_hAnnouncerSpectator; // offset 0x9B8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hAnnouncerGood_KillingSpree; // offset 0x9BC, size 0x4, align 4
    CHandle< C_BaseEntity > m_hAnnouncerBad_KillingSpree; // offset 0x9C0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hAnnouncerSpectator_KillingSpree; // offset 0x9C4, size 0x4, align 4
    bool[15] m_arrTier1TowerDestroyed; // offset 0x9C8, size 0xF, align 1
    bool[15] m_arrTier2TowerDestroyed; // offset 0x9D7, size 0xF, align 1
    bool[15] m_arrTier3TowerDestroyed; // offset 0x9E6, size 0xF, align 1
    bool[15] m_arrMeleeBarracksDestroyed; // offset 0x9F5, size 0xF, align 1
    bool m_bTier1TowerDestroyed; // offset 0xA04, size 0x1, align 1
    bool m_bTier2TowerDestroyed; // offset 0xA05, size 0x1, align 1
    bool m_bTier3TowerDestroyed; // offset 0xA06, size 0x1, align 1
    bool m_bMeleeBarracksDestroyed; // offset 0xA07, size 0x1, align 1
    float32 m_fTimeOfDay; // offset 0xA08, size 0x4, align 4
    int32 m_iNetTimeOfDay; // offset 0xA0C, size 0x4, align 4
    float32 m_flDaytimeStart; // offset 0xA10, size 0x4, align 4
    float32 m_flNighttimeStart; // offset 0xA14, size 0x4, align 4
    int32 m_nLoadedPlayers; // offset 0xA18, size 0x4, align 4
    int32 m_nExpectedPlayers; // offset 0xA1C, size 0x4, align 4
    char _pad_0A20[0x8]; // offset 0xA20
    int32 m_iMinimapDebugGridState; // offset 0xA28, size 0x4, align 4
    char _pad_0A2C[0x7C]; // offset 0xA2C
    int32 m_iFoWFrameNumber; // offset 0xAA8, size 0x4, align 4
    Vector m_vWeatherWindDirection; // offset 0xAAC, size 0xC, align 4
    CTormentorSpawnPhase m_tormentorSpawnPhase; // offset 0xAB8, size 0x40, align 255
    C_UtlVectorEmbeddedNetworkVar< CTormentorSpawnPhase > m_vecTormentorSpawnPhases; // offset 0xAF8, size 0x68, align 8
    C_NetworkUtlVectorBase< AbilityID_t > m_vecDeityBlessings; // offset 0xB60, size 0x18, align 8
    HeroID_t[24] m_vecRequiredPlaytestHeroesStorage; // offset 0xB78, size 0x60, align 4
    HeroID_t[24] m_vecRecommendedPlaytestHeroesStorage; // offset 0xBD8, size 0x60, align 4
    bool m_bAllRequiredPlaytestHeroesPicked; // offset 0xC38, size 0x1, align 1
    char _pad_0C39[0x3]; // offset 0xC39
    int32 m_nLastPlaytestPickPhase; // offset 0xC3C, size 0x4, align 4
    int32 m_nCustomGameFowTeamCount; // offset 0xC40, size 0x4, align 4
    bool m_bUseAlternateABRules; // offset 0xC44, size 0x1, align 1
    bool m_bLobbyIsAssociatedWithGame; // offset 0xC45, size 0x1, align 1
    char _pad_0C46[0x2]; // offset 0xC46
    CountdownTimer m_BotDebugTimer; // offset 0xC48, size 0x18, align 8
    uint8[18] m_BotDebugPushLane; // offset 0xC60, size 0x12, align 1
    uint8[18] m_BotDebugDefendLane; // offset 0xC72, size 0x12, align 1
    uint8[6] m_BotDebugFarmLane; // offset 0xC84, size 0x6, align 1
    uint8[8] m_BotDebugRoam; // offset 0xC8A, size 0x8, align 1
    char _pad_0C92[0x2]; // offset 0xC92
    CHandle< C_BaseEntity >[2] m_hBotDebugRoamTarget; // offset 0xC94, size 0x8, align 4
    uint8[2] m_BotDebugRoshan; // offset 0xC9C, size 0x2, align 1
    char _pad_0C9E[0x2]; // offset 0xC9E
    ERoshanSpawnPhase m_nRoshanRespawnPhase; // offset 0xCA0, size 0x4, align 4
    GameTime_t m_flRoshanRespawnPhaseEndTime; // offset 0xCA4, size 0x4, align 255
    C_UtlVectorEmbeddedNetworkVar< CDOTA_AbilityDraftAbilityState > m_AbilityDraftAbilities; // offset 0xCA8, size 0x68, align 8
    C_UtlVectorEmbeddedNetworkVar< CDOTA_AbilityDraftHeroState > m_AbilityDraftHeroes; // offset 0xD10, size 0x68, align 8
    bool m_bAbilityDraftCurrentPlayerHasPicked; // offset 0xD78, size 0x1, align 1
    char _pad_0D79[0x3]; // offset 0xD79
    int32 m_nAbilityDraftPlayerTracker; // offset 0xD7C, size 0x4, align 4
    int32 m_nAbilityDraftRoundNumber; // offset 0xD80, size 0x4, align 4
    int32 m_nAbilityDraftAdvanceSteps; // offset 0xD84, size 0x4, align 4
    int32 m_nAbilityDraftPhase; // offset 0xD88, size 0x4, align 4
    bool m_bIsPlayerDraft; // offset 0xD8C, size 0x1, align 1
    char _pad_0D8D[0x3]; // offset 0xD8D
    DOTA_PlayerDraftState m_ePlayerDraftState; // offset 0xD90, size 0x4, align 4
    char _pad_0D94[0x4]; // offset 0xD94
    C_NetworkUtlVectorBase< uint8 > m_vecPlayerDraftPickOrder; // offset 0xD98, size 0x18, align 8
    int32 m_nPlayerDraftPick; // offset 0xDB0, size 0x4, align 4
    int32 m_nPlayerDraftActiveTeam; // offset 0xDB4, size 0x4, align 4
    float32[2] m_flPlayerDraftTimeBank; // offset 0xDB8, size 0x8, align 4
    CUtlVector< KeyValues* >[2] m_vecARDMHeroes; // offset 0xDC0, size 0x30, align 8
    int32 m_nARDMHeroesPrecached; // offset 0xDF0, size 0x4, align 4
    float32 m_fLastARDMPrecache; // offset 0xDF4, size 0x4, align 4
    int32 m_nAllDraftPhase; // offset 0xDF8, size 0x4, align 4
    bool m_bAllDraftRadiantFirst; // offset 0xDFC, size 0x1, align 1
    bool m_bAllowOverrideVPK; // offset 0xDFD, size 0x1, align 1
    char _pad_0DFE[0x2]; // offset 0xDFE
    int32[2] m_nARDMHeroesRemaining; // offset 0xE00, size 0x8, align 4
    bool m_bUpdateHeroStatues; // offset 0xE08, size 0x1, align 1
    char _pad_0E09[0x27]; // offset 0xE09
    bool m_bExperimentalGameplay; // offset 0xE30, size 0x1, align 1
    char _pad_0E31[0x47]; // offset 0xE31
    uint32 m_lobbyType; // offset 0xE78, size 0x4, align 4
    LeagueID_t m_lobbyLeagueID; // offset 0xE7C, size 0x4, align 255
    char[256] m_lobbyGameName; // offset 0xE80, size 0x100, align 1
    C_UtlVectorEmbeddedNetworkVar< CHeroStatueLiked > m_vecHeroStatueLiked; // offset 0xF80, size 0x68, align 8
    int32[15] m_CustomGameTeamMaxPlayers; // offset 0xFE8, size 0x3C, align 4
    int32[5] m_iMutations; // offset 0x1024, size 0x14, align 4
    C_NetworkUtlVectorBase< CHandle< C_IngameEvent_Base > > m_vecIngameEvents; // offset 0x1038, size 0x18, align 8
    int8 m_nPrimaryIngameEventIndex; // offset 0x1050, size 0x1, align 1
    char _pad_1051[0x3]; // offset 0x1051
    CHandle< C_IngameEvent_Base > m_hObsoleteIngameEvent; // offset 0x1054, size 0x4, align 4
    uint32 m_nOfrendaPledges; // offset 0x1058, size 0x4, align 4
    uint32 m_nRadiantOfrendas; // offset 0x105C, size 0x4, align 4
    uint32 m_nDireOfrendas; // offset 0x1060, size 0x4, align 4
    bool m_bOfrendaEnabled; // offset 0x1064, size 0x1, align 1
    char _pad_1065[0x43]; // offset 0x1065
    C_NetworkUtlVectorBase< NeutralSpawnBoxes_t > m_NeutralSpawnBoxes; // offset 0x10A8, size 0x18, align 8
    C_NetworkUtlVectorBase< RegionTriggerBoxes_t > m_RegionTriggerBoxes; // offset 0x10C0, size 0x18, align 8
    char _pad_10D8[0xFB8]; // offset 0x10D8
    float64 m_flLastPerfSampleTime; // offset 0x2090, size 0x8, align 8
    char _pad_2098[0x3ED0]; // offset 0x2098
    int32 m_nMultipleTickFrameCount; // offset 0x5F68, size 0x4, align 4
    int32 m_nTimesPlayersDisconnected; // offset 0x5F6C, size 0x4, align 4
    float64 m_flLastPerfSampleSendTime; // offset 0x5F70, size 0x8, align 8
    bool m_bDidSeeStrategyTime; // offset 0x5F78, size 0x1, align 1
    char _pad_5F79[0x9D0F]; // offset 0x5F79
    float64 m_flLastUnfocusedSleepTime; // offset 0xFC88, size 0x8, align 8
};
