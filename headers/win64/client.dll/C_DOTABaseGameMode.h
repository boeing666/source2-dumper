#pragma once

class C_DOTABaseGameMode : public C_BaseEntity /*0x0*/  // sizeof 0x7D8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    CUtlString m_ForcedHUDSkin; // offset 0x5F0, size 0x8, align 8
    HeroID_t m_nCustomGameForceHeroSelectionId; // offset 0x5F8, size 0x4, align 255
    HeroFacetID_t m_nCustomGameForceHeroVariant; // offset 0x5FC, size 0x4, align 255
    bool m_bAlwaysShowPlayerInventory; // offset 0x600, size 0x1, align 1
    bool m_bGoldSoundDisabled; // offset 0x601, size 0x1, align 1
    bool m_bRecommendedItemsDisabled; // offset 0x602, size 0x1, align 1
    bool m_bStickyItemDisabled; // offset 0x603, size 0x1, align 1
    bool m_bStashPurchasingDisabled; // offset 0x604, size 0x1, align 1
    bool m_bFogOfWarDisabled; // offset 0x605, size 0x1, align 1
    bool m_bUseUnseenFOW; // offset 0x606, size 0x1, align 1
    bool m_bUseCustomBuybackCost; // offset 0x607, size 0x1, align 1
    bool m_bUseCustomBuybackCooldown; // offset 0x608, size 0x1, align 1
    bool m_bBuybackEnabled; // offset 0x609, size 0x1, align 1
    bool m_bUseTurboCouriers; // offset 0x60A, size 0x1, align 1
    char _pad_060B[0x1]; // offset 0x60B
    float32 m_flCameraDistanceOverride; // offset 0x60C, size 0x4, align 4
    int32 m_nCameraSmoothCountOverride; // offset 0x610, size 0x4, align 4
    CHandle< C_DOTA_BaseNPC > m_hOverrideSelectionEntity; // offset 0x614, size 0x4, align 4
    bool m_bTopBarTeamValuesOverride; // offset 0x618, size 0x1, align 1
    bool m_bTopBarTeamValuesVisible; // offset 0x619, size 0x1, align 1
    char _pad_061A[0x2]; // offset 0x61A
    int32 m_nTeamGoodGuysTopBarValue; // offset 0x61C, size 0x4, align 4
    int32 m_nTeamBadGuysTopBarValue; // offset 0x620, size 0x4, align 4
    bool m_bAlwaysShowPlayerNames; // offset 0x624, size 0x1, align 1
    bool m_bUseCustomHeroLevels; // offset 0x625, size 0x1, align 1
    char _pad_0626[0x2]; // offset 0x626
    C_NetworkUtlVectorBase< int32 > m_nCustomXPRequiredToReachNextLevel; // offset 0x628, size 0x18, align 8
    bool m_bTowerBackdoorProtectionEnabled; // offset 0x640, size 0x1, align 1
    bool m_bBotThinkingEnabled; // offset 0x641, size 0x1, align 1
    bool m_bAnnouncerDisabled; // offset 0x642, size 0x1, align 1
    bool m_bAnnouncerGameModeAnnounceDisabled; // offset 0x643, size 0x1, align 1
    bool m_bDeathTipsDisabled; // offset 0x644, size 0x1, align 1
    bool m_bFilterPlayerHeroAvailability; // offset 0x645, size 0x1, align 1
    bool m_bKillingSpreeAnnouncerDisabled; // offset 0x646, size 0x1, align 1
    char _pad_0647[0x1]; // offset 0x647
    float32 m_flFixedRespawnTime; // offset 0x648, size 0x4, align 4
    float32 m_flBuybackCostScale; // offset 0x64C, size 0x4, align 4
    float32 m_flRespawnTimeScale; // offset 0x650, size 0x4, align 4
    bool m_bLoseGoldOnDeath; // offset 0x654, size 0x1, align 1
    bool m_bKillableTombstones; // offset 0x655, size 0x1, align 1
    char _pad_0656[0x2]; // offset 0x656
    uint32 m_nHUDVisibilityBits; // offset 0x658, size 0x4, align 4
    float32 m_flMinimumAttackSpeed; // offset 0x65C, size 0x4, align 4
    float32 m_flMaximumAttackSpeed; // offset 0x660, size 0x4, align 4
    bool m_bIsDaynightCycleDisabled; // offset 0x664, size 0x1, align 1
    char _pad_0665[0x3]; // offset 0x665
    float32 m_flDaynightCycleAdvanceRate; // offset 0x668, size 0x4, align 4
    bool m_bAreWeatherEffectsDisabled; // offset 0x66C, size 0x1, align 1
    bool m_bDisableHudFlip; // offset 0x66D, size 0x1, align 1
    bool m_bEnableFriendlyBuildingMoveTo; // offset 0x66E, size 0x1, align 1
    bool m_bIsDeathOverlayDisabled; // offset 0x66F, size 0x1, align 1
    bool m_bIsHudCombatEventsDisabled; // offset 0x670, size 0x1, align 1
    char _pad_0671[0x7]; // offset 0x671
    CUtlString m_strDefaultStickyItem; // offset 0x678, size 0x8, align 8
    CUtlString m_sCustomTerrainWeatherEffect; // offset 0x680, size 0x8, align 8
    CUtlString m_strTPScrollSlotItemOverride; // offset 0x688, size 0x8, align 8
    float32 m_flStrengthDamage; // offset 0x690, size 0x4, align 4
    float32 m_flStrengthHP; // offset 0x694, size 0x4, align 4
    float32 m_flStrengthHPRegen; // offset 0x698, size 0x4, align 4
    float32 m_flAgilityDamage; // offset 0x69C, size 0x4, align 4
    float32 m_flAgilityArmor; // offset 0x6A0, size 0x4, align 4
    float32 m_flAgilityAttackSpeed; // offset 0x6A4, size 0x4, align 4
    float32 m_flAgilityMovementSpeedPercent; // offset 0x6A8, size 0x4, align 4
    float32 m_flIntelligenceDamage; // offset 0x6AC, size 0x4, align 4
    float32 m_flIntelligenceMana; // offset 0x6B0, size 0x4, align 4
    float32 m_flIntelligenceManaRegen; // offset 0x6B4, size 0x4, align 4
    float32 m_flIntelligenceMres; // offset 0x6B8, size 0x4, align 4
    float32 m_flIntelligenceSpellAmpPercent; // offset 0x6BC, size 0x4, align 4
    float32 m_flStrengthMagicResistancePercent; // offset 0x6C0, size 0x4, align 4
    float32 m_flAttributeAllDamage; // offset 0x6C4, size 0x4, align 4
    float32 m_flDraftingHeroPickSelectTimeOverride; // offset 0x6C8, size 0x4, align 4
    float32 m_flDraftingBanningTimeOverride; // offset 0x6CC, size 0x4, align 4
    bool m_bPauseEnabled; // offset 0x6D0, size 0x1, align 1
    char _pad_06D1[0x3]; // offset 0x6D1
    int32 m_iCustomScanMaxCharges; // offset 0x6D4, size 0x4, align 4
    float32 m_flCustomScanCooldown; // offset 0x6D8, size 0x4, align 4
    float32 m_flCustomGlyphCooldown; // offset 0x6DC, size 0x4, align 4
    float32 m_flCustomBackpackSwapCooldown; // offset 0x6E0, size 0x4, align 4
    float32 m_flCustomBackpackCooldownPercent; // offset 0x6E4, size 0x4, align 4
    bool m_bDefaultRuneSpawnLogic; // offset 0x6E8, size 0x1, align 1
    bool m_bEnableFreeCourierMode; // offset 0x6E9, size 0x1, align 1
    bool m_bAllowNeutralItemDrops; // offset 0x6EA, size 0x1, align 1
    bool m_bEnableNeutralStash; // offset 0x6EB, size 0x1, align 1
    bool m_bEnableNeutralStashTeamViewOnly; // offset 0x6EC, size 0x1, align 1
    bool m_bEnableNeutralItemHideUndiscovered; // offset 0x6ED, size 0x1, align 1
    bool m_bEnableSendToStash; // offset 0x6EE, size 0x1, align 1
    bool m_bForceRightClickAttackDisabled; // offset 0x6EF, size 0x1, align 1
    C_UtlVectorEmbeddedNetworkVar< CDOTACustomShopInfo > m_vecCustomShopInfo; // offset 0x6F0, size 0x68, align 8
    bool m_bCanSellAnywhere; // offset 0x758, size 0x1, align 1
    char _pad_0759[0x3]; // offset 0x759
    float32 m_flCameraNearZ; // offset 0x75C, size 0x4, align 4
    float32 m_flCameraFarZ; // offset 0x760, size 0x4, align 4
    int32 m_nCustomRadiantScore; // offset 0x764, size 0x4, align 4
    int32 m_nCustomDireScore; // offset 0x768, size 0x4, align 4
    bool m_bAbilityUpgradeWhitelistEnabled; // offset 0x76C, size 0x1, align 1
    char _pad_076D[0x3]; // offset 0x76D
    C_NetworkUtlVectorBase< AbilityID_t > m_vecAbilityUpgradeWhitelist; // offset 0x770, size 0x18, align 8
    bool m_bGiveFreeTPOnDeath; // offset 0x788, size 0x1, align 1
    char _pad_0789[0x3]; // offset 0x789
    int32 m_nInnateMeleeDamageBlockPct; // offset 0x78C, size 0x4, align 4
    int32 m_nInnateMeleeDamageBlockAmount; // offset 0x790, size 0x4, align 4
    int32 m_nInnateMeleeDamageBlockPerLevelAmount; // offset 0x794, size 0x4, align 4
    float32 m_flWaterRuneSpawnInterval; // offset 0x798, size 0x4, align 4
    char _pad_079C[0x4]; // offset 0x79C
    C_NetworkUtlVectorBase< CHandle< C_DOTA_BaseNPC > > m_vecBigHealthBarUnits; // offset 0x7A0, size 0x18, align 8
    char _pad_07B8[0x18]; // offset 0x7B8
    uint32 m_nHUDVisibilityBitsPrevious; // offset 0x7D0, size 0x4, align 4
    char _pad_07D4[0x4]; // offset 0x7D4
};
