#pragma once

class CDOTABaseGameMode : public CBaseEntity /*0x0*/  // sizeof 0xAB8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CUtlString m_ForcedHUDSkin; // offset 0x790, size 0x8, align 8
    HeroID_t m_nCustomGameForceHeroSelectionId; // offset 0x798, size 0x4, align 255
    HeroFacetID_t m_nCustomGameForceHeroVariant; // offset 0x79C, size 0x4, align 255
    bool m_bAlwaysShowPlayerInventory; // offset 0x7A0, size 0x1, align 1
    bool m_bGoldSoundDisabled; // offset 0x7A1, size 0x1, align 1
    bool m_bRecommendedItemsDisabled; // offset 0x7A2, size 0x1, align 1
    bool m_bStickyItemDisabled; // offset 0x7A3, size 0x1, align 1
    bool m_bStashPurchasingDisabled; // offset 0x7A4, size 0x1, align 1
    bool m_bFogOfWarDisabled; // offset 0x7A5, size 0x1, align 1
    bool m_bUseUnseenFOW; // offset 0x7A6, size 0x1, align 1
    bool m_bUseCustomBuybackCost; // offset 0x7A7, size 0x1, align 1
    bool m_bUseCustomBuybackCooldown; // offset 0x7A8, size 0x1, align 1
    bool m_bBuybackEnabled; // offset 0x7A9, size 0x1, align 1
    bool m_bUseTurboCouriers; // offset 0x7AA, size 0x1, align 1
    char _pad_07AB[0x1]; // offset 0x7AB
    float32 m_flCameraDistanceOverride; // offset 0x7AC, size 0x4, align 4
    int32 m_nCameraSmoothCountOverride; // offset 0x7B0, size 0x4, align 4
    CHandle< CDOTA_BaseNPC > m_hOverrideSelectionEntity; // offset 0x7B4, size 0x4, align 4
    bool m_bTopBarTeamValuesOverride; // offset 0x7B8, size 0x1, align 1
    bool m_bTopBarTeamValuesVisible; // offset 0x7B9, size 0x1, align 1
    char _pad_07BA[0x2]; // offset 0x7BA
    int32 m_nTeamGoodGuysTopBarValue; // offset 0x7BC, size 0x4, align 4
    int32 m_nTeamBadGuysTopBarValue; // offset 0x7C0, size 0x4, align 4
    bool m_bAlwaysShowPlayerNames; // offset 0x7C4, size 0x1, align 1
    bool m_bUseCustomHeroLevels; // offset 0x7C5, size 0x1, align 1
    char _pad_07C6[0x2]; // offset 0x7C6
    CNetworkUtlVectorBase< int32 > m_nCustomXPRequiredToReachNextLevel; // offset 0x7C8, size 0x18, align 8
    bool m_bTowerBackdoorProtectionEnabled; // offset 0x7E0, size 0x1, align 1
    bool m_bBotThinkingEnabled; // offset 0x7E1, size 0x1, align 1
    bool m_bAnnouncerDisabled; // offset 0x7E2, size 0x1, align 1
    bool m_bAnnouncerGameModeAnnounceDisabled; // offset 0x7E3, size 0x1, align 1
    bool m_bDeathTipsDisabled; // offset 0x7E4, size 0x1, align 1
    bool m_bFilterPlayerHeroAvailability; // offset 0x7E5, size 0x1, align 1
    bool m_bKillingSpreeAnnouncerDisabled; // offset 0x7E6, size 0x1, align 1
    char _pad_07E7[0x1]; // offset 0x7E7
    float32 m_flFixedRespawnTime; // offset 0x7E8, size 0x4, align 4
    float32 m_flBuybackCostScale; // offset 0x7EC, size 0x4, align 4
    float32 m_flRespawnTimeScale; // offset 0x7F0, size 0x4, align 4
    bool m_bLoseGoldOnDeath; // offset 0x7F4, size 0x1, align 1
    bool m_bKillableTombstones; // offset 0x7F5, size 0x1, align 1
    char _pad_07F6[0x2]; // offset 0x7F6
    uint32 m_nHUDVisibilityBits; // offset 0x7F8, size 0x4, align 4
    float32 m_flMinimumAttackSpeed; // offset 0x7FC, size 0x4, align 4
    float32 m_flMaximumAttackSpeed; // offset 0x800, size 0x4, align 4
    bool m_bIsDaynightCycleDisabled; // offset 0x804, size 0x1, align 1
    char _pad_0805[0x3]; // offset 0x805
    float32 m_flDaynightCycleAdvanceRate; // offset 0x808, size 0x4, align 4
    bool m_bAreWeatherEffectsDisabled; // offset 0x80C, size 0x1, align 1
    bool m_bDisableHudFlip; // offset 0x80D, size 0x1, align 1
    bool m_bEnableFriendlyBuildingMoveTo; // offset 0x80E, size 0x1, align 1
    bool m_bIsDeathOverlayDisabled; // offset 0x80F, size 0x1, align 1
    bool m_bIsHudCombatEventsDisabled; // offset 0x810, size 0x1, align 1
    char _pad_0811[0x7]; // offset 0x811
    CUtlString m_strDefaultStickyItem; // offset 0x818, size 0x8, align 8
    CUtlString m_sCustomTerrainWeatherEffect; // offset 0x820, size 0x8, align 8
    CUtlString m_strTPScrollSlotItemOverride; // offset 0x828, size 0x8, align 8
    float32 m_flStrengthDamage; // offset 0x830, size 0x4, align 4
    float32 m_flStrengthHP; // offset 0x834, size 0x4, align 4
    float32 m_flStrengthHPRegen; // offset 0x838, size 0x4, align 4
    float32 m_flAgilityDamage; // offset 0x83C, size 0x4, align 4
    float32 m_flAgilityArmor; // offset 0x840, size 0x4, align 4
    float32 m_flAgilityAttackSpeed; // offset 0x844, size 0x4, align 4
    float32 m_flAgilityMovementSpeedPercent; // offset 0x848, size 0x4, align 4
    float32 m_flIntelligenceDamage; // offset 0x84C, size 0x4, align 4
    float32 m_flIntelligenceMana; // offset 0x850, size 0x4, align 4
    float32 m_flIntelligenceManaRegen; // offset 0x854, size 0x4, align 4
    float32 m_flIntelligenceMres; // offset 0x858, size 0x4, align 4
    float32 m_flIntelligenceSpellAmpPercent; // offset 0x85C, size 0x4, align 4
    float32 m_flStrengthMagicResistancePercent; // offset 0x860, size 0x4, align 4
    float32 m_flAttributeAllDamage; // offset 0x864, size 0x4, align 4
    float32 m_flDraftingHeroPickSelectTimeOverride; // offset 0x868, size 0x4, align 4
    float32 m_flDraftingBanningTimeOverride; // offset 0x86C, size 0x4, align 4
    bool m_bPauseEnabled; // offset 0x870, size 0x1, align 1
    char _pad_0871[0x3]; // offset 0x871
    int32 m_iCustomScanMaxCharges; // offset 0x874, size 0x4, align 4
    float32 m_flCustomScanCooldown; // offset 0x878, size 0x4, align 4
    float32 m_flCustomGlyphCooldown; // offset 0x87C, size 0x4, align 4
    float32 m_flCustomBackpackSwapCooldown; // offset 0x880, size 0x4, align 4
    float32 m_flCustomBackpackCooldownPercent; // offset 0x884, size 0x4, align 4
    bool m_bDefaultRuneSpawnLogic; // offset 0x888, size 0x1, align 1
    bool m_bEnableFreeCourierMode; // offset 0x889, size 0x1, align 1
    bool m_bAllowNeutralItemDrops; // offset 0x88A, size 0x1, align 1
    bool m_bEnableNeutralStash; // offset 0x88B, size 0x1, align 1
    bool m_bEnableNeutralStashTeamViewOnly; // offset 0x88C, size 0x1, align 1
    bool m_bEnableNeutralItemHideUndiscovered; // offset 0x88D, size 0x1, align 1
    bool m_bEnableSendToStash; // offset 0x88E, size 0x1, align 1
    bool m_bForceRightClickAttackDisabled; // offset 0x88F, size 0x1, align 1
    CUtlVectorEmbeddedNetworkVar< CDOTACustomShopInfo > m_vecCustomShopInfo; // offset 0x890, size 0x68, align 8
    bool m_bCanSellAnywhere; // offset 0x8F8, size 0x1, align 1
    char _pad_08F9[0x3]; // offset 0x8F9
    float32 m_flCameraNearZ; // offset 0x8FC, size 0x4, align 4
    float32 m_flCameraFarZ; // offset 0x900, size 0x4, align 4
    int32 m_nCustomRadiantScore; // offset 0x904, size 0x4, align 4
    int32 m_nCustomDireScore; // offset 0x908, size 0x4, align 4
    bool m_bAbilityUpgradeWhitelistEnabled; // offset 0x90C, size 0x1, align 1
    char _pad_090D[0x3]; // offset 0x90D
    CNetworkUtlVectorBase< AbilityID_t > m_vecAbilityUpgradeWhitelist; // offset 0x910, size 0x18, align 8
    bool m_bGiveFreeTPOnDeath; // offset 0x928, size 0x1, align 1
    char _pad_0929[0x3]; // offset 0x929
    int32 m_nInnateMeleeDamageBlockPct; // offset 0x92C, size 0x4, align 4
    int32 m_nInnateMeleeDamageBlockAmount; // offset 0x930, size 0x4, align 4
    int32 m_nInnateMeleeDamageBlockPerLevelAmount; // offset 0x934, size 0x4, align 4
    float32 m_flWaterRuneSpawnInterval; // offset 0x938, size 0x4, align 4
    char _pad_093C[0x4]; // offset 0x93C
    CNetworkUtlVectorBase< CHandle< CDOTA_BaseNPC > > m_vecBigHealthBarUnits; // offset 0x940, size 0x18, align 8
    char _pad_0958[0x30]; // offset 0x958
    bool m_bSelectionGoldPenaltyEnabled; // offset 0x988, size 0x1, align 1
    bool m_bRemoveIllusionsOnDeath; // offset 0x989, size 0x1, align 1
    bool m_bRandomHeroBonusItemGrantDisabled; // offset 0x98A, size 0x1, align 1
    bool m_bDisableClumpingBehaviorByDefault; // offset 0x98B, size 0x1, align 1
    bool[10] m_bRuneTypeEnabled; // offset 0x98C, size 0xA, align 1
    bool m_bOverrideBotLateGame; // offset 0x996, size 0x1, align 1
    bool m_bBotsAlwaysPushWithHuman; // offset 0x997, size 0x1, align 1
    bool m_bBotsInLateGame; // offset 0x998, size 0x1, align 1
    char _pad_0999[0x3]; // offset 0x999
    int32 m_nBotMaxPushTier; // offset 0x99C, size 0x4, align 4
    float32 m_flFountainPercentageHealthRegen; // offset 0x9A0, size 0x4, align 4
    float32 m_flFountainPercentageManaRegen; // offset 0x9A4, size 0x4, align 4
    float32 m_flFountainConstantManaRegen; // offset 0x9A8, size 0x4, align 4
    float32 m_flPowerRuneSpawnInterval; // offset 0x9AC, size 0x4, align 4
    float32 m_flBountyRuneSpawnInterval; // offset 0x9B0, size 0x4, align 4
    float32 m_flXPRuneSpawnInterval; // offset 0x9B4, size 0x4, align 4
    float32 m_flThinkInterval; // offset 0x9B8, size 0x4, align 4
    int32 m_nForcedHeroCapOnReset; // offset 0x9BC, size 0x4, align 4
    char _pad_09C0[0xF8]; // offset 0x9C0
};
