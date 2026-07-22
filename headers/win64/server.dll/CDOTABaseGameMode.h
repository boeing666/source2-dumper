#pragma once

class CDOTABaseGameMode : public CBaseEntity /*0x0*/  // sizeof 0x7D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CUtlString m_ForcedHUDSkin; // offset 0x4B0, size 0x8, align 8
    HeroID_t m_nCustomGameForceHeroSelectionId; // offset 0x4B8, size 0x4, align 255
    HeroFacetID_t m_nCustomGameForceHeroVariant; // offset 0x4BC, size 0x4, align 255
    bool m_bAlwaysShowPlayerInventory; // offset 0x4C0, size 0x1, align 1
    bool m_bGoldSoundDisabled; // offset 0x4C1, size 0x1, align 1
    bool m_bRecommendedItemsDisabled; // offset 0x4C2, size 0x1, align 1
    bool m_bStickyItemDisabled; // offset 0x4C3, size 0x1, align 1
    bool m_bStashPurchasingDisabled; // offset 0x4C4, size 0x1, align 1
    bool m_bFogOfWarDisabled; // offset 0x4C5, size 0x1, align 1
    bool m_bUseUnseenFOW; // offset 0x4C6, size 0x1, align 1
    bool m_bUseCustomBuybackCost; // offset 0x4C7, size 0x1, align 1
    bool m_bUseCustomBuybackCooldown; // offset 0x4C8, size 0x1, align 1
    bool m_bBuybackEnabled; // offset 0x4C9, size 0x1, align 1
    bool m_bUseTurboCouriers; // offset 0x4CA, size 0x1, align 1
    char _pad_04CB[0x1]; // offset 0x4CB
    float32 m_flCameraDistanceOverride; // offset 0x4CC, size 0x4, align 4
    int32 m_nCameraSmoothCountOverride; // offset 0x4D0, size 0x4, align 4
    CHandle< CDOTA_BaseNPC > m_hOverrideSelectionEntity; // offset 0x4D4, size 0x4, align 4
    bool m_bTopBarTeamValuesOverride; // offset 0x4D8, size 0x1, align 1
    bool m_bTopBarTeamValuesVisible; // offset 0x4D9, size 0x1, align 1
    char _pad_04DA[0x2]; // offset 0x4DA
    int32 m_nTeamGoodGuysTopBarValue; // offset 0x4DC, size 0x4, align 4
    int32 m_nTeamBadGuysTopBarValue; // offset 0x4E0, size 0x4, align 4
    bool m_bAlwaysShowPlayerNames; // offset 0x4E4, size 0x1, align 1
    bool m_bUseCustomHeroLevels; // offset 0x4E5, size 0x1, align 1
    char _pad_04E6[0x2]; // offset 0x4E6
    CNetworkUtlVectorBase< int32 > m_nCustomXPRequiredToReachNextLevel; // offset 0x4E8, size 0x18, align 8
    bool m_bTowerBackdoorProtectionEnabled; // offset 0x500, size 0x1, align 1
    bool m_bBotThinkingEnabled; // offset 0x501, size 0x1, align 1
    bool m_bAnnouncerDisabled; // offset 0x502, size 0x1, align 1
    bool m_bAnnouncerGameModeAnnounceDisabled; // offset 0x503, size 0x1, align 1
    bool m_bDeathTipsDisabled; // offset 0x504, size 0x1, align 1
    bool m_bFilterPlayerHeroAvailability; // offset 0x505, size 0x1, align 1
    bool m_bKillingSpreeAnnouncerDisabled; // offset 0x506, size 0x1, align 1
    char _pad_0507[0x1]; // offset 0x507
    float32 m_flFixedRespawnTime; // offset 0x508, size 0x4, align 4
    float32 m_flBuybackCostScale; // offset 0x50C, size 0x4, align 4
    float32 m_flRespawnTimeScale; // offset 0x510, size 0x4, align 4
    bool m_bLoseGoldOnDeath; // offset 0x514, size 0x1, align 1
    bool m_bKillableTombstones; // offset 0x515, size 0x1, align 1
    char _pad_0516[0x2]; // offset 0x516
    uint32 m_nHUDVisibilityBits; // offset 0x518, size 0x4, align 4
    float32 m_flMinimumAttackSpeed; // offset 0x51C, size 0x4, align 4
    float32 m_flMaximumAttackSpeed; // offset 0x520, size 0x4, align 4
    bool m_bIsDaynightCycleDisabled; // offset 0x524, size 0x1, align 1
    char _pad_0525[0x3]; // offset 0x525
    float32 m_flDaynightCycleAdvanceRate; // offset 0x528, size 0x4, align 4
    bool m_bAreWeatherEffectsDisabled; // offset 0x52C, size 0x1, align 1
    bool m_bDisableHudFlip; // offset 0x52D, size 0x1, align 1
    bool m_bEnableFriendlyBuildingMoveTo; // offset 0x52E, size 0x1, align 1
    bool m_bIsDeathOverlayDisabled; // offset 0x52F, size 0x1, align 1
    bool m_bIsHudCombatEventsDisabled; // offset 0x530, size 0x1, align 1
    char _pad_0531[0x7]; // offset 0x531
    CUtlString m_strDefaultStickyItem; // offset 0x538, size 0x8, align 8
    CUtlString m_sCustomTerrainWeatherEffect; // offset 0x540, size 0x8, align 8
    CUtlString m_strTPScrollSlotItemOverride; // offset 0x548, size 0x8, align 8
    float32 m_flStrengthDamage; // offset 0x550, size 0x4, align 4
    float32 m_flStrengthHP; // offset 0x554, size 0x4, align 4
    float32 m_flStrengthHPRegen; // offset 0x558, size 0x4, align 4
    float32 m_flAgilityDamage; // offset 0x55C, size 0x4, align 4
    float32 m_flAgilityArmor; // offset 0x560, size 0x4, align 4
    float32 m_flAgilityAttackSpeed; // offset 0x564, size 0x4, align 4
    float32 m_flAgilityMovementSpeedPercent; // offset 0x568, size 0x4, align 4
    float32 m_flIntelligenceDamage; // offset 0x56C, size 0x4, align 4
    float32 m_flIntelligenceMana; // offset 0x570, size 0x4, align 4
    float32 m_flIntelligenceManaRegen; // offset 0x574, size 0x4, align 4
    float32 m_flIntelligenceMres; // offset 0x578, size 0x4, align 4
    float32 m_flIntelligenceSpellAmpPercent; // offset 0x57C, size 0x4, align 4
    float32 m_flStrengthMagicResistancePercent; // offset 0x580, size 0x4, align 4
    float32 m_flAttributeAllDamage; // offset 0x584, size 0x4, align 4
    float32 m_flDraftingHeroPickSelectTimeOverride; // offset 0x588, size 0x4, align 4
    float32 m_flDraftingBanningTimeOverride; // offset 0x58C, size 0x4, align 4
    bool m_bPauseEnabled; // offset 0x590, size 0x1, align 1
    char _pad_0591[0x3]; // offset 0x591
    int32 m_iCustomScanMaxCharges; // offset 0x594, size 0x4, align 4
    float32 m_flCustomScanCooldown; // offset 0x598, size 0x4, align 4
    float32 m_flCustomGlyphCooldown; // offset 0x59C, size 0x4, align 4
    float32 m_flCustomBackpackSwapCooldown; // offset 0x5A0, size 0x4, align 4
    float32 m_flCustomBackpackCooldownPercent; // offset 0x5A4, size 0x4, align 4
    bool m_bDefaultRuneSpawnLogic; // offset 0x5A8, size 0x1, align 1
    bool m_bEnableFreeCourierMode; // offset 0x5A9, size 0x1, align 1
    bool m_bAllowNeutralItemDrops; // offset 0x5AA, size 0x1, align 1
    bool m_bEnableNeutralStash; // offset 0x5AB, size 0x1, align 1
    bool m_bEnableNeutralStashTeamViewOnly; // offset 0x5AC, size 0x1, align 1
    bool m_bEnableNeutralItemHideUndiscovered; // offset 0x5AD, size 0x1, align 1
    bool m_bEnableSendToStash; // offset 0x5AE, size 0x1, align 1
    bool m_bForceRightClickAttackDisabled; // offset 0x5AF, size 0x1, align 1
    CUtlVectorEmbeddedNetworkVar< CDOTACustomShopInfo > m_vecCustomShopInfo; // offset 0x5B0, size 0x68, align 8
    bool m_bCanSellAnywhere; // offset 0x618, size 0x1, align 1
    char _pad_0619[0x3]; // offset 0x619
    float32 m_flCameraNearZ; // offset 0x61C, size 0x4, align 4
    float32 m_flCameraFarZ; // offset 0x620, size 0x4, align 4
    int32 m_nCustomRadiantScore; // offset 0x624, size 0x4, align 4
    int32 m_nCustomDireScore; // offset 0x628, size 0x4, align 4
    bool m_bAbilityUpgradeWhitelistEnabled; // offset 0x62C, size 0x1, align 1
    char _pad_062D[0x3]; // offset 0x62D
    CNetworkUtlVectorBase< AbilityID_t > m_vecAbilityUpgradeWhitelist; // offset 0x630, size 0x18, align 8
    bool m_bGiveFreeTPOnDeath; // offset 0x648, size 0x1, align 1
    char _pad_0649[0x3]; // offset 0x649
    int32 m_nInnateMeleeDamageBlockPct; // offset 0x64C, size 0x4, align 4
    int32 m_nInnateMeleeDamageBlockAmount; // offset 0x650, size 0x4, align 4
    int32 m_nInnateMeleeDamageBlockPerLevelAmount; // offset 0x654, size 0x4, align 4
    float32 m_flWaterRuneSpawnInterval; // offset 0x658, size 0x4, align 4
    char _pad_065C[0x4]; // offset 0x65C
    CNetworkUtlVectorBase< CHandle< CDOTA_BaseNPC > > m_vecBigHealthBarUnits; // offset 0x660, size 0x18, align 8
    char _pad_0678[0x30]; // offset 0x678
    bool m_bSelectionGoldPenaltyEnabled; // offset 0x6A8, size 0x1, align 1
    bool m_bRemoveIllusionsOnDeath; // offset 0x6A9, size 0x1, align 1
    bool m_bRandomHeroBonusItemGrantDisabled; // offset 0x6AA, size 0x1, align 1
    bool m_bDisableClumpingBehaviorByDefault; // offset 0x6AB, size 0x1, align 1
    bool[10] m_bRuneTypeEnabled; // offset 0x6AC, size 0xA, align 1
    bool m_bOverrideBotLateGame; // offset 0x6B6, size 0x1, align 1
    bool m_bBotsAlwaysPushWithHuman; // offset 0x6B7, size 0x1, align 1
    bool m_bBotsInLateGame; // offset 0x6B8, size 0x1, align 1
    char _pad_06B9[0x3]; // offset 0x6B9
    int32 m_nBotMaxPushTier; // offset 0x6BC, size 0x4, align 4
    float32 m_flFountainPercentageHealthRegen; // offset 0x6C0, size 0x4, align 4
    float32 m_flFountainPercentageManaRegen; // offset 0x6C4, size 0x4, align 4
    float32 m_flFountainConstantManaRegen; // offset 0x6C8, size 0x4, align 4
    float32 m_flPowerRuneSpawnInterval; // offset 0x6CC, size 0x4, align 4
    float32 m_flBountyRuneSpawnInterval; // offset 0x6D0, size 0x4, align 4
    float32 m_flXPRuneSpawnInterval; // offset 0x6D4, size 0x4, align 4
    float32 m_flThinkInterval; // offset 0x6D8, size 0x4, align 4
    int32 m_nForcedHeroCapOnReset; // offset 0x6DC, size 0x4, align 4
    char _pad_06E0[0xF8]; // offset 0x6E0
};
