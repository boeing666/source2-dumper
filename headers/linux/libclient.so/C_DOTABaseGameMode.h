#pragma once

class C_DOTABaseGameMode : public C_BaseEntity /*0x0*/  // sizeof 0x958, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    CUtlString m_ForcedHUDSkin; // offset 0x770, size 0x8, align 8
    HeroID_t m_nCustomGameForceHeroSelectionId; // offset 0x778, size 0x4, align 255
    HeroFacetID_t m_nCustomGameForceHeroVariant; // offset 0x77C, size 0x4, align 255
    bool m_bAlwaysShowPlayerInventory; // offset 0x780, size 0x1, align 1
    bool m_bGoldSoundDisabled; // offset 0x781, size 0x1, align 1
    bool m_bRecommendedItemsDisabled; // offset 0x782, size 0x1, align 1
    bool m_bStickyItemDisabled; // offset 0x783, size 0x1, align 1
    bool m_bStashPurchasingDisabled; // offset 0x784, size 0x1, align 1
    bool m_bFogOfWarDisabled; // offset 0x785, size 0x1, align 1
    bool m_bUseUnseenFOW; // offset 0x786, size 0x1, align 1
    bool m_bUseCustomBuybackCost; // offset 0x787, size 0x1, align 1
    bool m_bUseCustomBuybackCooldown; // offset 0x788, size 0x1, align 1
    bool m_bBuybackEnabled; // offset 0x789, size 0x1, align 1
    bool m_bUseTurboCouriers; // offset 0x78A, size 0x1, align 1
    char _pad_078B[0x1]; // offset 0x78B
    float32 m_flCameraDistanceOverride; // offset 0x78C, size 0x4, align 4
    int32 m_nCameraSmoothCountOverride; // offset 0x790, size 0x4, align 4
    CHandle< C_DOTA_BaseNPC > m_hOverrideSelectionEntity; // offset 0x794, size 0x4, align 4
    bool m_bTopBarTeamValuesOverride; // offset 0x798, size 0x1, align 1
    bool m_bTopBarTeamValuesVisible; // offset 0x799, size 0x1, align 1
    char _pad_079A[0x2]; // offset 0x79A
    int32 m_nTeamGoodGuysTopBarValue; // offset 0x79C, size 0x4, align 4
    int32 m_nTeamBadGuysTopBarValue; // offset 0x7A0, size 0x4, align 4
    bool m_bAlwaysShowPlayerNames; // offset 0x7A4, size 0x1, align 1
    bool m_bUseCustomHeroLevels; // offset 0x7A5, size 0x1, align 1
    char _pad_07A6[0x2]; // offset 0x7A6
    C_NetworkUtlVectorBase< int32 > m_nCustomXPRequiredToReachNextLevel; // offset 0x7A8, size 0x18, align 8
    bool m_bTowerBackdoorProtectionEnabled; // offset 0x7C0, size 0x1, align 1
    bool m_bBotThinkingEnabled; // offset 0x7C1, size 0x1, align 1
    bool m_bAnnouncerDisabled; // offset 0x7C2, size 0x1, align 1
    bool m_bAnnouncerGameModeAnnounceDisabled; // offset 0x7C3, size 0x1, align 1
    bool m_bDeathTipsDisabled; // offset 0x7C4, size 0x1, align 1
    bool m_bFilterPlayerHeroAvailability; // offset 0x7C5, size 0x1, align 1
    bool m_bKillingSpreeAnnouncerDisabled; // offset 0x7C6, size 0x1, align 1
    char _pad_07C7[0x1]; // offset 0x7C7
    float32 m_flFixedRespawnTime; // offset 0x7C8, size 0x4, align 4
    float32 m_flBuybackCostScale; // offset 0x7CC, size 0x4, align 4
    float32 m_flRespawnTimeScale; // offset 0x7D0, size 0x4, align 4
    bool m_bLoseGoldOnDeath; // offset 0x7D4, size 0x1, align 1
    bool m_bKillableTombstones; // offset 0x7D5, size 0x1, align 1
    char _pad_07D6[0x2]; // offset 0x7D6
    uint32 m_nHUDVisibilityBits; // offset 0x7D8, size 0x4, align 4
    float32 m_flMinimumAttackSpeed; // offset 0x7DC, size 0x4, align 4
    float32 m_flMaximumAttackSpeed; // offset 0x7E0, size 0x4, align 4
    bool m_bIsDaynightCycleDisabled; // offset 0x7E4, size 0x1, align 1
    char _pad_07E5[0x3]; // offset 0x7E5
    float32 m_flDaynightCycleAdvanceRate; // offset 0x7E8, size 0x4, align 4
    bool m_bAreWeatherEffectsDisabled; // offset 0x7EC, size 0x1, align 1
    bool m_bDisableHudFlip; // offset 0x7ED, size 0x1, align 1
    bool m_bEnableFriendlyBuildingMoveTo; // offset 0x7EE, size 0x1, align 1
    bool m_bIsDeathOverlayDisabled; // offset 0x7EF, size 0x1, align 1
    bool m_bIsHudCombatEventsDisabled; // offset 0x7F0, size 0x1, align 1
    char _pad_07F1[0x7]; // offset 0x7F1
    CUtlString m_strDefaultStickyItem; // offset 0x7F8, size 0x8, align 8
    CUtlString m_sCustomTerrainWeatherEffect; // offset 0x800, size 0x8, align 8
    CUtlString m_strTPScrollSlotItemOverride; // offset 0x808, size 0x8, align 8
    float32 m_flStrengthDamage; // offset 0x810, size 0x4, align 4
    float32 m_flStrengthHP; // offset 0x814, size 0x4, align 4
    float32 m_flStrengthHPRegen; // offset 0x818, size 0x4, align 4
    float32 m_flAgilityDamage; // offset 0x81C, size 0x4, align 4
    float32 m_flAgilityArmor; // offset 0x820, size 0x4, align 4
    float32 m_flAgilityAttackSpeed; // offset 0x824, size 0x4, align 4
    float32 m_flAgilityMovementSpeedPercent; // offset 0x828, size 0x4, align 4
    float32 m_flIntelligenceDamage; // offset 0x82C, size 0x4, align 4
    float32 m_flIntelligenceMana; // offset 0x830, size 0x4, align 4
    float32 m_flIntelligenceManaRegen; // offset 0x834, size 0x4, align 4
    float32 m_flIntelligenceMres; // offset 0x838, size 0x4, align 4
    float32 m_flIntelligenceSpellAmpPercent; // offset 0x83C, size 0x4, align 4
    float32 m_flStrengthMagicResistancePercent; // offset 0x840, size 0x4, align 4
    float32 m_flAttributeAllDamage; // offset 0x844, size 0x4, align 4
    float32 m_flDraftingHeroPickSelectTimeOverride; // offset 0x848, size 0x4, align 4
    float32 m_flDraftingBanningTimeOverride; // offset 0x84C, size 0x4, align 4
    bool m_bPauseEnabled; // offset 0x850, size 0x1, align 1
    char _pad_0851[0x3]; // offset 0x851
    int32 m_iCustomScanMaxCharges; // offset 0x854, size 0x4, align 4
    float32 m_flCustomScanCooldown; // offset 0x858, size 0x4, align 4
    float32 m_flCustomGlyphCooldown; // offset 0x85C, size 0x4, align 4
    float32 m_flCustomBackpackSwapCooldown; // offset 0x860, size 0x4, align 4
    float32 m_flCustomBackpackCooldownPercent; // offset 0x864, size 0x4, align 4
    bool m_bDefaultRuneSpawnLogic; // offset 0x868, size 0x1, align 1
    bool m_bEnableFreeCourierMode; // offset 0x869, size 0x1, align 1
    bool m_bAllowNeutralItemDrops; // offset 0x86A, size 0x1, align 1
    bool m_bEnableNeutralStash; // offset 0x86B, size 0x1, align 1
    bool m_bEnableNeutralStashTeamViewOnly; // offset 0x86C, size 0x1, align 1
    bool m_bEnableNeutralItemHideUndiscovered; // offset 0x86D, size 0x1, align 1
    bool m_bEnableSendToStash; // offset 0x86E, size 0x1, align 1
    bool m_bForceRightClickAttackDisabled; // offset 0x86F, size 0x1, align 1
    C_UtlVectorEmbeddedNetworkVar< CDOTACustomShopInfo > m_vecCustomShopInfo; // offset 0x870, size 0x68, align 8
    bool m_bCanSellAnywhere; // offset 0x8D8, size 0x1, align 1
    char _pad_08D9[0x3]; // offset 0x8D9
    float32 m_flCameraNearZ; // offset 0x8DC, size 0x4, align 4
    float32 m_flCameraFarZ; // offset 0x8E0, size 0x4, align 4
    int32 m_nCustomRadiantScore; // offset 0x8E4, size 0x4, align 4
    int32 m_nCustomDireScore; // offset 0x8E8, size 0x4, align 4
    bool m_bAbilityUpgradeWhitelistEnabled; // offset 0x8EC, size 0x1, align 1
    char _pad_08ED[0x3]; // offset 0x8ED
    C_NetworkUtlVectorBase< AbilityID_t > m_vecAbilityUpgradeWhitelist; // offset 0x8F0, size 0x18, align 8
    bool m_bGiveFreeTPOnDeath; // offset 0x908, size 0x1, align 1
    char _pad_0909[0x3]; // offset 0x909
    int32 m_nInnateMeleeDamageBlockPct; // offset 0x90C, size 0x4, align 4
    int32 m_nInnateMeleeDamageBlockAmount; // offset 0x910, size 0x4, align 4
    int32 m_nInnateMeleeDamageBlockPerLevelAmount; // offset 0x914, size 0x4, align 4
    float32 m_flWaterRuneSpawnInterval; // offset 0x918, size 0x4, align 4
    char _pad_091C[0x4]; // offset 0x91C
    C_NetworkUtlVectorBase< CHandle< C_DOTA_BaseNPC > > m_vecBigHealthBarUnits; // offset 0x920, size 0x18, align 8
    char _pad_0938[0x18]; // offset 0x938
    uint32 m_nHUDVisibilityBitsPrevious; // offset 0x950, size 0x4, align 4
    char _pad_0954[0x4]; // offset 0x954
};
