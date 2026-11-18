#pragma once

class C_DOTAGamerules : public C_MultiplayRules /*0x0*/  // sizeof 0xFE70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x40]; // offset 0x0
    int32 m_nRuneCycle; // offset 0x40, size 0x4, align 4
    int32 m_iMiscHeroPickCounter; // offset 0x44, size 0x4, align 4
    CHandle< C_BaseEntity > m_hEndGameCinematicEntity; // offset 0x48, size 0x4, align 4
    CHandle< C_DOTA_BaseNPC > m_hOverlayHealthBarUnit; // offset 0x4C, size 0x4, align 4
    int32 m_nOverlayHealthBarType; // offset 0x50, size 0x4, align 4
    bool m_bIsInCinematicMode; // offset 0x54, size 0x1, align 1
    bool m_bIsInClientSideCinematicMode; // offset 0x55, size 0x1, align 1
    bool m_bFreeCourierMode; // offset 0x56, size 0x1, align 1
    char _pad_0057[0x1]; // offset 0x57
    int32 m_nStartingGold; // offset 0x58, size 0x4, align 4
    int32 m_nGoldPerTick; // offset 0x5C, size 0x4, align 4
    float32 m_flGoldTickTime; // offset 0x60, size 0x4, align 4
    bool m_bItemWhiteListChanged; // offset 0x64, size 0x1, align 1
    bool m_bEnableSuggestAbilities; // offset 0x65, size 0x1, align 1
    bool m_bEnableSuggestItems; // offset 0x66, size 0x1, align 1
    char _pad_0067[0x1]; // offset 0x67
    uint32 m_unFanfareGoodGuys; // offset 0x68, size 0x4, align 4
    uint32 m_unFanfareBadGuys; // offset 0x6C, size 0x4, align 4
    int32 m_iMapType; // offset 0x70, size 0x4, align 4
    int32 m_nServerGameState; // offset 0x74, size 0x4, align 4
    DOTA_HeroPickState m_nServerHeroPickState; // offset 0x78, size 0x4, align 4
    int32 m_nGameState; // offset 0x7C, size 0x4, align 4
    DOTA_HeroPickState m_nHeroPickState; // offset 0x80, size 0x4, align 4
    bool m_bAlternateHeroGridsEnabled; // offset 0x84, size 0x1, align 1
    char _pad_0085[0x3]; // offset 0x85
    GameTime_t m_flStateTransitionTime; // offset 0x88, size 0x4, align 255
    float32 m_flOverride_dota_hero_selection_time; // offset 0x8C, size 0x4, align 4
    float32 m_flOverride_dota_pregame_time; // offset 0x90, size 0x4, align 4
    float32 m_flOverride_dota_postgame_time; // offset 0x94, size 0x4, align 4
    float32 m_flOverride_dota_strategy_time; // offset 0x98, size 0x4, align 4
    float32 m_flOverride_dota_team_showcase_duration; // offset 0x9C, size 0x4, align 4
    float32 m_flOverride_dota_rune_spawn_time; // offset 0xA0, size 0x4, align 4
    float32[15] m_flShowcaseTime; // offset 0xA4, size 0x3C, align 4
    float32 m_flNeutralInitialSpawnOffset; // offset 0xE0, size 0x4, align 4
    int32 m_iGameMode; // offset 0xE4, size 0x4, align 4
    CHandle< C_BaseEntity > m_hGameModeEntity; // offset 0xE8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hCustomHeroPickRulesEntity; // offset 0xEC, size 0x4, align 4
    GameTime_t m_flHeroPickStateTransitionTime; // offset 0xF0, size 0x4, align 255
    char _pad_00F4[0x4]; // offset 0xF4
    uint64 m_iPlayerIDsInControl; // offset 0xF8, size 0x8, align 8
    bool m_bSameHeroSelectionEnabled; // offset 0x100, size 0x1, align 1
    bool m_bUseCustomHeroXPValue; // offset 0x101, size 0x1, align 1
    bool m_bUseBaseGoldBountyOnHeroes; // offset 0x102, size 0x1, align 1
    bool m_bUseUniversalShopMode; // offset 0x103, size 0x1, align 1
    bool m_bHideKillMessageHeaders; // offset 0x104, size 0x1, align 1
    char _pad_0105[0x3]; // offset 0x105
    float32 m_flHeroMinimapIconScale; // offset 0x108, size 0x4, align 4
    float32 m_flCreepMinimapIconScale; // offset 0x10C, size 0x4, align 4
    bool m_bCreepSpawningEnabled; // offset 0x110, size 0x1, align 1
    char _pad_0111[0x3]; // offset 0x111
    float32 m_flRuneMinimapIconScale; // offset 0x114, size 0x4, align 4
    char[256] m_CustomVictoryMessage; // offset 0x118, size 0x100, align 1
    float32 m_flCustomGameEndDelay; // offset 0x218, size 0x4, align 4
    float32 m_flCustomGameSetupAutoLaunchDelay; // offset 0x21C, size 0x4, align 4
    float32 m_flCustomGameSetupTimeout; // offset 0x220, size 0x4, align 4
    float32 m_flCustomVictoryMessageDuration; // offset 0x224, size 0x4, align 4
    float32 m_flHeroSelectPenaltyTime; // offset 0x228, size 0x4, align 4
    bool m_bCustomGameSetupAutoLaunchEnabled; // offset 0x22C, size 0x1, align 1
    bool m_bCustomGameTeamSelectionLocked; // offset 0x22D, size 0x1, align 1
    bool m_bCustomGameEnablePickRules; // offset 0x22E, size 0x1, align 1
    bool m_bCustomGameAllowHeroPickMusic; // offset 0x22F, size 0x1, align 1
    bool m_bCustomGameAllowMusicAtGameStart; // offset 0x230, size 0x1, align 1
    bool m_bCustomGameAllowBattleMusic; // offset 0x231, size 0x1, align 1
    bool m_bCustomGameDisableIK; // offset 0x232, size 0x1, align 1
    bool m_bCustomGameAllowSecondaryAbilitiesOnOtherUnits; // offset 0x233, size 0x1, align 1
    int32 m_iCMModePickBanOrder; // offset 0x234, size 0x4, align 4
    int32 m_iCDModePickBanOrder; // offset 0x238, size 0x4, align 4
    int32 m_nGGTeam; // offset 0x23C, size 0x4, align 4
    GameTime_t m_flGGEndsAtTime; // offset 0x240, size 0x4, align 255
    bool m_bGGCalled; // offset 0x244, size 0x1, align 1
    bool m_bWhiteListEnabled; // offset 0x245, size 0x1, align 1
    char _pad_0246[0x2]; // offset 0x246
    uint64[4] m_bItemWhiteList; // offset 0x248, size 0x20, align 8
    int32 m_nLastHitUIMode; // offset 0x268, size 0x4, align 4
    bool m_bHUDTimerTutorialMode; // offset 0x26C, size 0x1, align 1
    char _pad_026D[0x3]; // offset 0x26D
    CountdownTimer m_HeroPickMiscTimer; // offset 0x270, size 0x18, align 8
    CountdownTimer m_ExtraTimeTimer; // offset 0x288, size 0x18, align 8
    float32[2] m_fExtraTimeRemaining; // offset 0x2A0, size 0x8, align 4
    bool m_bHeroRespawnEnabled; // offset 0x2A8, size 0x1, align 1
    bool m_bIsRandomingEnabled; // offset 0x2A9, size 0x1, align 1
    char _pad_02AA[0x2]; // offset 0x2AA
    PlayerID_t[2] m_iCaptainPlayerIDs; // offset 0x2AC, size 0x8, align 4
    HeroID_t[24] m_BannedHeroes; // offset 0x2B4, size 0x60, align 4
    HeroID_t[24] m_SelectedHeroes; // offset 0x314, size 0x60, align 4
    int32 m_iActiveTeam; // offset 0x374, size 0x4, align 4
    int32 m_iStartingTeam; // offset 0x378, size 0x4, align 4
    int32 m_iPenaltyLevelRadiant; // offset 0x37C, size 0x4, align 4
    int32 m_iPenaltyLevelDire; // offset 0x380, size 0x4, align 4
    bool m_bIsLoadingScenario; // offset 0x384, size 0x1, align 1
    char _pad_0385[0x3]; // offset 0x385
    C_NetworkUtlVectorBase< HeroID_t > m_vecNewBannedHeroes; // offset 0x388, size 0x18, align 8
    C_NetworkUtlVectorBase< HeroID_t > m_vecWhitelistedHeroes; // offset 0x3A0, size 0x18, align 8
    C_NetworkUtlVectorBase< HeroID_t > m_vecBlacklistedHeroes; // offset 0x3B8, size 0x18, align 8
    bool m_bHideBlacklistedHeroes; // offset 0x3D0, size 0x1, align 1
    char _pad_03D1[0x3]; // offset 0x3D1
    int32 m_nSeriesType; // offset 0x3D4, size 0x4, align 4
    int32 m_nRadiantSeriesWins; // offset 0x3D8, size 0x4, align 4
    int32 m_nDireSeriesWins; // offset 0x3DC, size 0x4, align 4
    C_UtlVectorEmbeddedNetworkVar< CHeroesPerPlayer > m_vecAvailableHerosPerPlayerID; // offset 0x3E0, size 0x68, align 8
    C_UtlVectorEmbeddedNetworkVar< CHeroesPerPlayer > m_vecLockedHerosByPlayerID; // offset 0x448, size 0x68, align 8
    C_UtlVectorEmbeddedNetworkVar< CHeroesPerPlayer > m_vecDisabledRandomHerosByPlayerID; // offset 0x4B0, size 0x68, align 8
    HeroID_t[24] m_CustomGameForceSelectHero; // offset 0x518, size 0x60, align 4
    float32 m_flGoldTime; // offset 0x578, size 0x4, align 4
    float32 m_flXPTime; // offset 0x57C, size 0x4, align 4
    GameTime_t m_flCreepSpawntime; // offset 0x580, size 0x4, align 255
    float32 m_flAnnounceStartTime; // offset 0x584, size 0x4, align 4
    int32 m_iGoodTomeCount; // offset 0x588, size 0x4, align 4
    int32 m_iBadTomeCount; // offset 0x58C, size 0x4, align 4
    GameTime_t m_flPreGameStartTime; // offset 0x590, size 0x4, align 255
    GameTime_t m_flGameStartTime; // offset 0x594, size 0x4, align 255
    GameTime_t m_flGameEndTime; // offset 0x598, size 0x4, align 255
    float32 m_flGameLoadTime; // offset 0x59C, size 0x4, align 4
    int32[2] m_iCustomGameScore; // offset 0x5A0, size 0x8, align 4
    int32 m_nCustomGameDifficulty; // offset 0x5A8, size 0x4, align 4
    bool m_bEnemyModifiersEnabled; // offset 0x5AC, size 0x1, align 1
    char _pad_05AD[0x3]; // offset 0x5AD
    int32 m_iWaves; // offset 0x5B0, size 0x4, align 4
    int32 m_iCreepUpgradeState; // offset 0x5B4, size 0x4, align 4
    GameTime_t m_fGoodGlyphCooldown; // offset 0x5B8, size 0x4, align 255
    GameTime_t m_fBadGlyphCooldown; // offset 0x5BC, size 0x4, align 255
    GameTime_t[15] m_flGlyphCooldowns; // offset 0x5C0, size 0x3C, align 4
    int32 m_iGoodGlyphCharges; // offset 0x5FC, size 0x4, align 4
    int32 m_iBadGlyphCharges; // offset 0x600, size 0x4, align 4
    int32[15] m_iGlyphCharges; // offset 0x604, size 0x3C, align 4
    GameTime_t m_fGoodGlyphActiveEndTime; // offset 0x640, size 0x4, align 255
    GameTime_t m_fBadGlyphActiveEndTime; // offset 0x644, size 0x4, align 255
    GameTime_t[15] m_flGlyphActiveEndTimes; // offset 0x648, size 0x3C, align 4
    GameTime_t[15] m_flGlyphUseCooldowns; // offset 0x684, size 0x3C, align 4
    GameTime_t m_fGoodRadarCooldown; // offset 0x6C0, size 0x4, align 255
    GameTime_t m_fBadRadarCooldown; // offset 0x6C4, size 0x4, align 255
    GameTime_t[15] m_flRadarCooldowns; // offset 0x6C8, size 0x3C, align 4
    GameTime_t[15] m_flGreaterHornOfBattleCooldowns; // offset 0x704, size 0x3C, align 4
    int32 m_iGoodRadarCharges; // offset 0x740, size 0x4, align 4
    int32 m_iBadRadarCharges; // offset 0x744, size 0x4, align 4
    int32[15] m_iRadarCharges; // offset 0x748, size 0x3C, align 4
    float32[24] m_flOutpostTimes; // offset 0x784, size 0x60, align 4
    bool m_bIsNightstalkerNight; // offset 0x7E4, size 0x1, align 1
    bool m_bIsTemporaryNight; // offset 0x7E5, size 0x1, align 1
    bool m_bIsTemporaryDay; // offset 0x7E6, size 0x1, align 1
    char _pad_07E7[0x1]; // offset 0x7E7
    int32 m_nRiverType; // offset 0x7E8, size 0x4, align 4
    HeroID_t m_nTemporaryDayNightSource; // offset 0x7EC, size 0x4, align 255
    PlayerID_t[15] m_nTeamFeaturedPlayerID; // offset 0x7F0, size 0x3C, align 4
    item_definition_index_t[15] m_nTeamVersusScreen; // offset 0x82C, size 0x3C, align 4
    float32 m_flGoldRedistributeTime; // offset 0x868, size 0x4, align 4
    int32[2] m_nGoldToRedistribute; // offset 0x86C, size 0x8, align 4
    GameTime_t m_flNextPreGameThink; // offset 0x874, size 0x4, align 255
    GameTime_t m_flNextAllDraftGoldThink; // offset 0x878, size 0x4, align 255
    char _pad_087C[0x4]; // offset 0x87C
    float64 m_flTimeEnteredState; // offset 0x880, size 0x8, align 8
    uint32 m_unRiverAccountID; // offset 0x888, size 0x4, align 4
    char _pad_088C[0x4]; // offset 0x88C
    itemid_t m_ulRiverItemID; // offset 0x890, size 0x8, align 255
    char _pad_0898[0x40]; // offset 0x898
    C_UtlVectorEmbeddedNetworkVar< CDOTA_ItemStockInfo > m_vecItemStockInfo; // offset 0x8D8, size 0x68, align 8
    DOTA_AssassinMinigameNetworkState m_AssassinMiniGameNetData; // offset 0x940, size 0x10, align 255
    int32 m_nGameWinner; // offset 0x950, size 0x4, align 4
    char _pad_0954[0x4]; // offset 0x954
    MatchID_t m_unMatchID64; // offset 0x958, size 0x8, align 255
    bool m_bMatchSignoutComplete; // offset 0x960, size 0x1, align 1
    char _pad_0961[0x3]; // offset 0x961
    CHandle< C_BaseEntity > m_hSideShop1; // offset 0x964, size 0x4, align 4
    CHandle< C_BaseEntity > m_hSideShop2; // offset 0x968, size 0x4, align 4
    CHandle< C_BaseEntity > m_hSecretShop1; // offset 0x96C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hSecretShop2; // offset 0x970, size 0x4, align 4
    CHandle< C_BaseEntity >[15] m_hTeamFountains; // offset 0x974, size 0x3C, align 4
    CHandle< C_BaseEntity >[15] m_hTeamForts; // offset 0x9B0, size 0x3C, align 4
    CHandle< C_BaseEntity >[15] m_hTeamShops; // offset 0x9EC, size 0x3C, align 4
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hWatchers; // offset 0xA28, size 0x18, align 8
    CHandle< C_BaseEntity >[15] m_hWisdomShrines; // offset 0xA40, size 0x3C, align 4
    CHandle< C_BaseEntity >[15] m_hLotusPools; // offset 0xA7C, size 0x3C, align 4
    CHandle< C_BaseEntity > m_hAnnouncerGood; // offset 0xAB8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hAnnouncerBad; // offset 0xABC, size 0x4, align 4
    CHandle< C_BaseEntity > m_hAnnouncerSpectator; // offset 0xAC0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hAnnouncerGood_KillingSpree; // offset 0xAC4, size 0x4, align 4
    CHandle< C_BaseEntity > m_hAnnouncerBad_KillingSpree; // offset 0xAC8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hAnnouncerSpectator_KillingSpree; // offset 0xACC, size 0x4, align 4
    bool[15] m_arrTier1TowerDestroyed; // offset 0xAD0, size 0xF, align 1
    bool[15] m_arrTier2TowerDestroyed; // offset 0xADF, size 0xF, align 1
    bool[15] m_arrTier3TowerDestroyed; // offset 0xAEE, size 0xF, align 1
    bool[15] m_arrMeleeBarracksDestroyed; // offset 0xAFD, size 0xF, align 1
    bool m_bTier1TowerDestroyed; // offset 0xB0C, size 0x1, align 1
    bool m_bTier2TowerDestroyed; // offset 0xB0D, size 0x1, align 1
    bool m_bTier3TowerDestroyed; // offset 0xB0E, size 0x1, align 1
    bool m_bMeleeBarracksDestroyed; // offset 0xB0F, size 0x1, align 1
    float32 m_fTimeOfDay; // offset 0xB10, size 0x4, align 4
    int32 m_iNetTimeOfDay; // offset 0xB14, size 0x4, align 4
    float32 m_flDaytimeStart; // offset 0xB18, size 0x4, align 4
    float32 m_flNighttimeStart; // offset 0xB1C, size 0x4, align 4
    int32 m_nLoadedPlayers; // offset 0xB20, size 0x4, align 4
    int32 m_nExpectedPlayers; // offset 0xB24, size 0x4, align 4
    char _pad_0B28[0x8]; // offset 0xB28
    int32 m_iMinimapDebugGridState; // offset 0xB30, size 0x4, align 4
    char _pad_0B34[0x7C]; // offset 0xB34
    int32 m_iFoWFrameNumber; // offset 0xBB0, size 0x4, align 4
    char _pad_0BB4[0x4]; // offset 0xBB4
    C_UtlVectorEmbeddedNetworkVar< CDOTA_FoWRevealedRegion > m_vecFoWRevealedRegions; // offset 0xBB8, size 0x68, align 8
    Vector m_vWeatherWindDirection; // offset 0xC20, size 0xC, align 4
    char _pad_0C2C[0x4]; // offset 0xC2C
    CTormentorSpawnPhase m_tormentorSpawnPhase; // offset 0xC30, size 0x40, align 255
    C_UtlVectorEmbeddedNetworkVar< CTormentorSpawnPhase > m_vecTormentorSpawnPhases; // offset 0xC70, size 0x68, align 8
    C_NetworkUtlVectorBase< AbilityID_t > m_vecDeityBlessings; // offset 0xCD8, size 0x18, align 8
    C_UtlVectorEmbeddedNetworkVar< NeutralArtifactPoolState_t > m_arrArtifactPools; // offset 0xCF0, size 0x68, align 8
    HeroID_t[24] m_vecRequiredPlaytestHeroesStorage; // offset 0xD58, size 0x60, align 4
    HeroID_t[24] m_vecRecommendedPlaytestHeroesStorage; // offset 0xDB8, size 0x60, align 4
    bool m_bAllRequiredPlaytestHeroesPicked; // offset 0xE18, size 0x1, align 1
    char _pad_0E19[0x3]; // offset 0xE19
    int32 m_nLastPlaytestPickPhase; // offset 0xE1C, size 0x4, align 4
    int32 m_nCustomGameFowTeamCount; // offset 0xE20, size 0x4, align 4
    bool m_bUseAlternateABRules; // offset 0xE24, size 0x1, align 1
    bool m_bLobbyIsAssociatedWithGame; // offset 0xE25, size 0x1, align 1
    char _pad_0E26[0x2]; // offset 0xE26
    CountdownTimer m_BotDebugTimer; // offset 0xE28, size 0x18, align 8
    uint8[18] m_BotDebugPushLane; // offset 0xE40, size 0x12, align 1
    uint8[18] m_BotDebugDefendLane; // offset 0xE52, size 0x12, align 1
    uint8[6] m_BotDebugFarmLane; // offset 0xE64, size 0x6, align 1
    uint8[8] m_BotDebugRoam; // offset 0xE6A, size 0x8, align 1
    char _pad_0E72[0x2]; // offset 0xE72
    CHandle< C_BaseEntity >[2] m_hBotDebugRoamTarget; // offset 0xE74, size 0x8, align 4
    uint8[2] m_BotDebugRoshan; // offset 0xE7C, size 0x2, align 1
    char _pad_0E7E[0x2]; // offset 0xE7E
    ERoshanSpawnPhase m_nRoshanRespawnPhase; // offset 0xE80, size 0x4, align 4
    GameTime_t m_flRoshanRespawnPhaseEndTime; // offset 0xE84, size 0x4, align 255
    C_UtlVectorEmbeddedNetworkVar< CDOTA_AbilityDraftAbilityState > m_AbilityDraftAbilities; // offset 0xE88, size 0x68, align 8
    C_UtlVectorEmbeddedNetworkVar< CDOTA_AbilityDraftHeroState > m_AbilityDraftHeroes; // offset 0xEF0, size 0x68, align 8
    bool m_bAbilityDraftCurrentPlayerHasPicked; // offset 0xF58, size 0x1, align 1
    char _pad_0F59[0x3]; // offset 0xF59
    int32 m_nAbilityDraftPlayerTracker; // offset 0xF5C, size 0x4, align 4
    int32 m_nAbilityDraftRoundNumber; // offset 0xF60, size 0x4, align 4
    int32 m_nAbilityDraftAdvanceSteps; // offset 0xF64, size 0x4, align 4
    int32 m_nAbilityDraftPhase; // offset 0xF68, size 0x4, align 4
    bool m_bIsPlayerDraft; // offset 0xF6C, size 0x1, align 1
    char _pad_0F6D[0x3]; // offset 0xF6D
    DOTA_PlayerDraftState m_ePlayerDraftState; // offset 0xF70, size 0x4, align 4
    char _pad_0F74[0x4]; // offset 0xF74
    C_NetworkUtlVectorBase< uint8 > m_vecPlayerDraftPickOrder; // offset 0xF78, size 0x18, align 8
    int32 m_nPlayerDraftPick; // offset 0xF90, size 0x4, align 4
    int32 m_nPlayerDraftActiveTeam; // offset 0xF94, size 0x4, align 4
    float32[2] m_flPlayerDraftTimeBank; // offset 0xF98, size 0x8, align 4
    CUtlVector< KeyValues* >[2] m_vecARDMHeroes; // offset 0xFA0, size 0x30, align 8
    int32 m_nARDMHeroesPrecached; // offset 0xFD0, size 0x4, align 4
    float32 m_fLastARDMPrecache; // offset 0xFD4, size 0x4, align 4
    int32 m_nAllDraftPhase; // offset 0xFD8, size 0x4, align 4
    bool m_bAllDraftRadiantFirst; // offset 0xFDC, size 0x1, align 1
    bool m_bAllowOverrideVPK; // offset 0xFDD, size 0x1, align 1
    char _pad_0FDE[0x2]; // offset 0xFDE
    int32[2] m_nARDMHeroesRemaining; // offset 0xFE0, size 0x8, align 4
    bool m_bUpdateHeroStatues; // offset 0xFE8, size 0x1, align 1
    char _pad_0FE9[0x27]; // offset 0xFE9
    bool m_bExperimentalGameplay; // offset 0x1010, size 0x1, align 1
    char _pad_1011[0x47]; // offset 0x1011
    uint32 m_lobbyType; // offset 0x1058, size 0x4, align 4
    LeagueID_t m_lobbyLeagueID; // offset 0x105C, size 0x4, align 255
    char[256] m_lobbyGameName; // offset 0x1060, size 0x100, align 1
    C_UtlVectorEmbeddedNetworkVar< CHeroStatueLiked > m_vecHeroStatueLiked; // offset 0x1160, size 0x68, align 8
    int32[15] m_CustomGameTeamMaxPlayers; // offset 0x11C8, size 0x3C, align 4
    int32[5] m_iMutations; // offset 0x1204, size 0x14, align 4
    C_NetworkUtlVectorBase< CHandle< C_IngameEvent_Base > > m_vecIngameEvents; // offset 0x1218, size 0x18, align 8
    int8 m_nPrimaryIngameEventIndex; // offset 0x1230, size 0x1, align 1
    char _pad_1231[0x3]; // offset 0x1231
    CHandle< C_IngameEvent_Base > m_hObsoleteIngameEvent; // offset 0x1234, size 0x4, align 4
    uint32 m_nOfrendaPledges; // offset 0x1238, size 0x4, align 4
    uint32 m_nRadiantOfrendas; // offset 0x123C, size 0x4, align 4
    uint32 m_nDireOfrendas; // offset 0x1240, size 0x4, align 4
    bool m_bOfrendaEnabled; // offset 0x1244, size 0x1, align 1
    char _pad_1245[0x43]; // offset 0x1245
    C_NetworkUtlVectorBase< NeutralSpawnBoxes_t > m_NeutralSpawnBoxes; // offset 0x1288, size 0x18, align 8
    C_NetworkUtlVectorBase< RegionTriggerBoxes_t > m_RegionTriggerBoxes; // offset 0x12A0, size 0x18, align 8
    char _pad_12B8[0xFB8]; // offset 0x12B8
    float64 m_flLastPerfSampleTime; // offset 0x2270, size 0x8, align 8
    char _pad_2278[0x3ED0]; // offset 0x2278
    int32 m_nMultipleTickFrameCount; // offset 0x6148, size 0x4, align 4
    int32 m_nTimesPlayersDisconnected; // offset 0x614C, size 0x4, align 4
    float64 m_flLastPerfSampleSendTime; // offset 0x6150, size 0x8, align 8
    bool m_bDidSeeStrategyTime; // offset 0x6158, size 0x1, align 1
    char _pad_6159[0x9D0F]; // offset 0x6159
    float64 m_flLastUnfocusedSleepTime; // offset 0xFE68, size 0x8, align 8
};
