#pragma once

struct CitadelHeroData_t  // sizeof 0xF08, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataRoot MVDataAssociatedFile MVDataOverlayType MVDataOutlinerLeafNameFn}
{
    char _pad_0000[0x8]; // offset 0x0
    CUtlVector< HeroAnimGraphDefaultValueOverride_t > m_vecAnimGraphDefaultValueOverrides; // offset 0x8, size 0x18, align 8
    char _pad_0020[0x8]; // offset 0x20
    HeroID_t m_HeroID; // offset 0x28, size 0x4, align 255
    char _pad_002C[0x4]; // offset 0x2C
    CUtlString m_strHeroSortName; // offset 0x30, size 0x8, align 8
    CUtlString m_strHeroSearchName; // offset 0x38, size 0x8, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hDamageTakenParticle; // offset 0x40, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hGroundDamageTakenParticle; // offset 0x120, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hDeathParticle; // offset 0x200, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hLowHealthParticle; // offset 0x2E0, size 0xE0, align 8
    CPanoramaImageName m_strIconImageSmall; // offset 0x3C0, size 0x10, align 8 | MPropertyStartGroup
    CPanoramaImageName m_strIconHeroCard; // offset 0x3D0, size 0x10, align 8
    CPanoramaImageName m_strIconHeroCardCritical; // offset 0x3E0, size 0x10, align 8
    CPanoramaImageName m_strIconHeroCardGloat; // offset 0x3F0, size 0x10, align 8
    CPanoramaImageName m_strMinimapImage; // offset 0x400, size 0x10, align 8
    CPanoramaImageName m_strTopBarVertical; // offset 0x410, size 0x10, align 8
    CPanoramaImageName m_strLogoImageEnglish; // offset 0x420, size 0x10, align 8
    CPanoramaImageName m_strLogoImageLocalized; // offset 0x430, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hRespawnParticle; // offset 0x440, size 0xE0, align 8
    Color m_colorUI; // offset 0x520, size 0x4, align 1
    char _pad_0524[0x4]; // offset 0x524
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strModelName; // offset 0x528, size 0xE0, align 8
    int32 m_nModelSkin; // offset 0x608, size 0x4, align 4
    char _pad_060C[0x4]; // offset 0x60C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strWIPModelName; // offset 0x610, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strMainOnlyModelName; // offset 0x6F0, size 0xE0, align 8 | MPropertyDescription
    bool m_bUseMainOnlyModelForExperimental; // offset 0x7D0, size 0x1, align 1 | MPropertyDescription
    char _pad_07D1[0x7]; // offset 0x7D1
    CUtlString m_strUIPortraitMap; // offset 0x7D8, size 0x8, align 8 | MPropertyStartGroup MPropertyAttributeEditor
    CUtlString m_strUIShoppingMap; // offset 0x7E0, size 0x8, align 8 | MPropertyAttributeEditor
    CUtlString m_strUITeamRevealMap; // offset 0x7E8, size 0x8, align 8 | MPropertyAttributeEditor
    CUtlString m_strUIPostgamePortraitMap; // offset 0x7F0, size 0x8, align 8 | MPropertyAttributeEditor
    HeroStatsUI_t m_heroStatsUI; // offset 0x7F8, size 0x30, align 8
    HeroStatsDisplay_t m_heroStatsDisplay; // offset 0x828, size 0x90, align 8
    CitadelStatsDisplay_t m_ShopStatDisplay; // offset 0x8B8, size 0xA8, align 8
    CSoundEventName m_strDeathVOSound; // offset 0x960, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDeathSound; // offset 0x970, size 0x10, align 8
    CSoundEventName m_strLastHitSound; // offset 0x980, size 0x10, align 8
    CSoundEventName m_strRosterSelectedSound; // offset 0x990, size 0x10, align 8
    CSoundEventName m_strRosterRemovedSound; // offset 0x9A0, size 0x10, align 8
    CSoundEventName m_strRosterAvoidedSound; // offset 0x9B0, size 0x10, align 8
    CSoundEventName m_strVoteRevealSound; // offset 0x9C0, size 0x10, align 8
    CSoundEventName m_strLowHealthSound; // offset 0x9D0, size 0x10, align 8
    CSoundEventName m_strHeroSpecificLowHealthSound; // offset 0x9E0, size 0x10, align 8
    CSoundEventName m_strMovementLoop; // offset 0x9F0, size 0x10, align 8
    CSoundEventName m_strPostGameVictorySound; // offset 0xA00, size 0x10, align 8
    CSoundEventName m_strPostGameDefeatSound; // offset 0xA10, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVSoundEventScriptList > > m_hGameSoundEventScript; // offset 0xA20, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVSoundEventScriptList > > m_hGeneratedVOEventScript; // offset 0xB00, size 0xE0, align 8
    float32 m_flStealthSpeedMetersPerSecond; // offset 0xBE0, size 0x4, align 4
    bool m_bInDevelopment; // offset 0xBE4, size 0x1, align 1 | MPropertyStartGroup
    bool m_bAssignedPlayersOnly; // offset 0xBE5, size 0x1, align 1
    bool m_bNewPlayerRecommended; // offset 0xBE6, size 0x1, align 1
    bool m_bLaneTestingRecommended; // offset 0xBE7, size 0x1, align 1
    bool m_bNeedsTesting; // offset 0xBE8, size 0x1, align 1
    bool m_bLimitedTesting; // offset 0xBE9, size 0x1, align 1
    bool m_bDisabled; // offset 0xBEA, size 0x1, align 1
    bool m_bPlayerSelectable; // offset 0xBEB, size 0x1, align 1
    bool m_bPrereleaseOnly; // offset 0xBEC, size 0x1, align 1
    char _pad_0BED[0x3]; // offset 0xBED
    int32 m_nComplexity; // offset 0xBF0, size 0x4, align 4
    int32 m_nAllyBotDifficulty; // offset 0xBF4, size 0x4, align 4 | MPropertyDescription MPropertyAttributeRange
    int32 m_nEnemyBotDifficulty; // offset 0xBF8, size 0x4, align 4 | MPropertyDescription MPropertyAttributeRange
    float32 m_flMinLowHealthPercentage; // offset 0xBFC, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription MPropertyAttributeRange
    float32 m_flMaxLowHealthPercentage; // offset 0xC00, size 0x4, align 4 | MPropertyDescription MPropertyAttributeRange
    float32 m_flMinMidHealthPercentage; // offset 0xC04, size 0x4, align 4 | MPropertyDescription MPropertyAttributeRange
    float32 m_flMaxMidHealthPercentage; // offset 0xC08, size 0x4, align 4 | MPropertyDescription MPropertyAttributeRange
    float32 m_flMinHealthForThreshold; // offset 0xC0C, size 0x4, align 4 | MPropertyDescription
    float32 m_flMaxHealthForThreshold; // offset 0xC10, size 0x4, align 4 | MPropertyDescription
    float32 m_flInCombatWithHeroDuration; // offset 0xC14, size 0x4, align 4 | MPropertyDescription
    float32 m_flInCombatWithNonHeroDuration; // offset 0xC18, size 0x4, align 4 | MPropertyDescription
    float32 m_flInCombatWithNeutralDuration; // offset 0xC1C, size 0x4, align 4 | MPropertyDescription
    bool m_bNAGunFalloffRange; // offset 0xC20, size 0x1, align 1 | MPropertyDescription
    bool m_bAllowedInTunnels; // offset 0xC21, size 0x1, align 1 | MPropertyDescription
    char _pad_0C22[0x6]; // offset 0xC22
    CUtlOrderedMap< EStatsType, float32 > m_mapStartingStats; // offset 0xC28, size 0x28, align 8 | MPropertyStartGroup
    CUtlOrderedMap< EStatsType, HeroScalingStat_t > m_mapScalingStats; // offset 0xC50, size 0x28, align 8
    CPiecewiseCurve m_groundDashPositionCurve; // offset 0xC78, size 0x40, align 8
    CUtlOrderedMap< EItemSlotTypes_t, CUtlVector< ModCostBonuses_t > > m_mapModCostBonuses; // offset 0xCB8, size 0x28, align 8
    char _pad_0CE0[0x18]; // offset 0xCE0
    CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapBoundAbilities; // offset 0xCF8, size 0x28, align 8
    CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapWIPAbilities; // offset 0xD20, size 0x28, align 8
    CUtlOrderedMap< EItemSlotTypes_t, ItemSlotInfo_t > m_mapItemSlotInfo; // offset 0xD48, size 0x28, align 8
    char _pad_0D70[0x50]; // offset 0xD70
    EAbilityResourceType m_eAbilityResourceType; // offset 0xDC0, size 0x4, align 4
    char _pad_0DC4[0x4]; // offset 0xDC4
    CUtlString m_strGunTag; // offset 0xDC8, size 0x8, align 8
    CUtlVector< CUtlString > m_vecHeroTags; // offset 0xDD0, size 0x18, align 8
    EHeroType m_eHeroType; // offset 0xDE8, size 0x4, align 4
    char _pad_0DEC[0x4]; // offset 0xDEC
    CUtlString m_strRosterBackgroundLayout; // offset 0xDF0, size 0x8, align 8
    CUtlString m_strHideoutRichPresence; // offset 0xDF8, size 0x8, align 8
    CUtlOrderedMap< CUtlString, float32 > m_mapItemDraftCounterWeights; // offset 0xE00, size 0x28, align 8 | MPropertyMapKeyLeafChoiceProviderFn
    char _pad_0E28[0x18]; // offset 0xE28
    CUtlOrderedMap< EModifierValue, float32 > m_mapStandardLevelUpUpgrades; // offset 0xE40, size 0x28, align 8
    CUtlOrderedMap< int32, HeroLevel_t > m_mapLevelInfo; // offset 0xE68, size 0x28, align 8
    CUtlOrderedMap< EItemSlotTypes_t, CUtlVector< HeroPurchaseBonus_t > > m_mapPurchaseBonuses; // offset 0xE90, size 0x28, align 8
    CUtlOrderedMap< CUtlString, ItemDraftWeight_t > m_mapItemDraftBucketing; // offset 0xEB8, size 0x28, align 8 | MPropertyMapKeyLeafChoiceProviderFn
    char _pad_0EE0[0x28]; // offset 0xEE0
};
