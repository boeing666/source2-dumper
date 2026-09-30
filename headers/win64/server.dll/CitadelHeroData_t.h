#pragma once

struct CitadelHeroData_t  // sizeof 0x1078, align 0x8 [vtable] (server) {MGetKV3ClassDefaults MVDataRoot MVDataAssociatedFile MVDataOverlayType}
{
    char _pad_0000[0x8]; // offset 0x0
    CUtlVector< HeroAnimGraphDefaultValueOverride_t > m_vecAnimGraphDefaultValueOverrides; // offset 0x8, size 0x18, align 8
    char _pad_0020[0x8]; // offset 0x20
    HeroID_t m_HeroID; // offset 0x28, size 0x4, align 255
    char _pad_002C[0x4]; // offset 0x2C
    CUtlString m_strHeroSortName; // offset 0x30, size 0x8, align 8
    CUtlString m_strHeroSearchName; // offset 0x38, size 0x8, align 8
    CUtlString m_strHeroGender; // offset 0x40, size 0x8, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hDamageTakenParticle; // offset 0x48, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hGroundDamageTakenParticle; // offset 0x128, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hDeathParticle; // offset 0x208, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hLowHealthParticle; // offset 0x2E8, size 0xE0, align 8
    CPanoramaImageName m_strIconImageSmall; // offset 0x3C8, size 0x10, align 8 | MPropertyStartGroup
    CPanoramaImageName m_strIconHeroCard; // offset 0x3D8, size 0x10, align 8
    CPanoramaImageName m_strIconHeroCardCritical; // offset 0x3E8, size 0x10, align 8
    CPanoramaImageName m_strIconHeroCardGloat; // offset 0x3F8, size 0x10, align 8
    CPanoramaImageName m_strMinimapImage; // offset 0x408, size 0x10, align 8
    CPanoramaImageName m_strTopBarVertical; // offset 0x418, size 0x10, align 8
    CPanoramaImageName m_strVoteSticker; // offset 0x428, size 0x10, align 8
    CPanoramaImageName m_strLogoImageEnglish; // offset 0x438, size 0x10, align 8
    CPanoramaImageName m_strLogoImageLocalized; // offset 0x448, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hRespawnParticle; // offset 0x458, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hVisibilityParticle; // offset 0x538, size 0xE0, align 8
    Color m_colorUI; // offset 0x618, size 0x4, align 4
    char _pad_061C[0x4]; // offset 0x61C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strModelName; // offset 0x620, size 0xE0, align 8
    int32 m_nModelSkin; // offset 0x700, size 0x4, align 4
    char _pad_0704[0x4]; // offset 0x704
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strWIPModelName; // offset 0x708, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strMainOnlyModelName; // offset 0x7E8, size 0xE0, align 8 | MPropertyDescription
    bool m_bUseMainOnlyModelForExperimental; // offset 0x8C8, size 0x1, align 1 | MPropertyDescription
    char _pad_08C9[0x7]; // offset 0x8C9
    CUtlString m_strUIPortraitMap; // offset 0x8D0, size 0x8, align 8 | MPropertyStartGroup MPropertyAttributeEditor
    CUtlString m_strUIShoppingMap; // offset 0x8D8, size 0x8, align 8 | MPropertyAttributeEditor
    CUtlString m_strUITeamRevealMap; // offset 0x8E0, size 0x8, align 8 | MPropertyAttributeEditor
    CUtlString m_strUIPostgamePortraitMap; // offset 0x8E8, size 0x8, align 8 | MPropertyAttributeEditor
    CUtlString m_strUIHeroRevealMap; // offset 0x8F0, size 0x8, align 8 | MPropertyAttributeEditor
    HeroStatsUI_t m_heroStatsUI; // offset 0x8F8, size 0x30, align 8
    HeroStatsDisplay_t m_heroStatsDisplay; // offset 0x928, size 0x90, align 8
    CitadelStatsDisplay_t m_ShopStatDisplay; // offset 0x9B8, size 0xA8, align 8
    CSoundEventName m_strDeathVOSound; // offset 0xA60, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDeathSound; // offset 0xA70, size 0x10, align 8
    CSoundEventName m_strLastHitSound; // offset 0xA80, size 0x10, align 8
    CSoundEventName m_strRosterSelectedSound; // offset 0xA90, size 0x10, align 8
    CSoundEventName m_strRosterRemovedSound; // offset 0xAA0, size 0x10, align 8
    CSoundEventName m_strRosterAvoidedSound; // offset 0xAB0, size 0x10, align 8
    CSoundEventName m_strHeroVotedSound; // offset 0xAC0, size 0x10, align 8
    CSoundEventName m_strCharacterRevealDialog; // offset 0xAD0, size 0x10, align 8
    CSoundEventName m_strCharacterRevealSfxStart; // offset 0xAE0, size 0x10, align 8
    CSoundEventName m_strCharacterRevealSfxStop; // offset 0xAF0, size 0x10, align 8
    CSoundEventName m_strLowHealthSound; // offset 0xB00, size 0x10, align 8
    CSoundEventName m_strHeroSpecificLowHealthSound; // offset 0xB10, size 0x10, align 8
    CSoundEventName m_strMovementLoop; // offset 0xB20, size 0x10, align 8
    CSoundEventName m_strMovementLoopStart; // offset 0xB30, size 0x10, align 8
    CSoundEventName m_strMovementLoopStop; // offset 0xB40, size 0x10, align 8
    CSoundEventName m_strSlideLoop; // offset 0xB50, size 0x10, align 8
    CSoundEventName m_strPostGameVictorySound; // offset 0xB60, size 0x10, align 8
    CSoundEventName m_strPostGameDefeatSound; // offset 0xB70, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVSoundEventScriptList > > m_hGameSoundEventScript; // offset 0xB80, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVSoundEventScriptList > > m_hGeneratedVOEventScript; // offset 0xC60, size 0xE0, align 8
    float32 m_flStealthSpeedMetersPerSecond; // offset 0xD40, size 0x4, align 4
    EHeroDevelopmentState m_eHeroDevelopmentState; // offset 0xD44, size 0x1, align 1 | MPropertyStartGroup
    bool m_bInDevelopment; // offset 0xD45, size 0x1, align 1
    bool m_bNewPlayerRecommended; // offset 0xD46, size 0x1, align 1
    bool m_bLaneTestingRecommended; // offset 0xD47, size 0x1, align 1
    bool m_bNeedsTesting; // offset 0xD48, size 0x1, align 1
    bool m_bLimitedTesting; // offset 0xD49, size 0x1, align 1
    bool m_bDisabled; // offset 0xD4A, size 0x1, align 1
    char _pad_0D4B[0x1]; // offset 0xD4B
    int32 m_nComplexity; // offset 0xD4C, size 0x4, align 4
    int32 m_nAllyBotDifficulty; // offset 0xD50, size 0x4, align 4 | MPropertyDescription MPropertyAttributeRange
    int32 m_nEnemyBotDifficulty; // offset 0xD54, size 0x4, align 4 | MPropertyDescription MPropertyAttributeRange
    float32 m_flMinLowHealthPercentage; // offset 0xD58, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription MPropertyAttributeRange
    float32 m_flMaxLowHealthPercentage; // offset 0xD5C, size 0x4, align 4 | MPropertyDescription MPropertyAttributeRange
    float32 m_flMinMidHealthPercentage; // offset 0xD60, size 0x4, align 4 | MPropertyDescription MPropertyAttributeRange
    float32 m_flMaxMidHealthPercentage; // offset 0xD64, size 0x4, align 4 | MPropertyDescription MPropertyAttributeRange
    float32 m_flMinHealthForThreshold; // offset 0xD68, size 0x4, align 4 | MPropertyDescription
    float32 m_flMaxHealthForThreshold; // offset 0xD6C, size 0x4, align 4 | MPropertyDescription
    float32 m_flInCombatWithHeroDuration; // offset 0xD70, size 0x4, align 4 | MPropertyDescription
    float32 m_flInCombatWithNonHeroDuration; // offset 0xD74, size 0x4, align 4 | MPropertyDescription
    float32 m_flInCombatWithNeutralDuration; // offset 0xD78, size 0x4, align 4 | MPropertyDescription
    bool m_bNAGunFalloffRange; // offset 0xD7C, size 0x1, align 1 | MPropertyDescription
    bool m_bAllowedInTunnels; // offset 0xD7D, size 0x1, align 1 | MPropertyDescription
    char _pad_0D7E[0x2]; // offset 0xD7E
    CUtlOrderedMap< EStatsType, float32 > m_mapStartingStats; // offset 0xD80, size 0x28, align 8 | MPropertyStartGroup
    CUtlOrderedMap< EStatsType, HeroScalingStat_t > m_mapScalingStats; // offset 0xDA8, size 0x28, align 8
    CPiecewiseCurve m_groundDashPositionCurve; // offset 0xDD0, size 0x40, align 8
    CUtlOrderedMap< EItemSlotTypes_t, CUtlVector< ModCostBonuses_t > > m_mapModCostBonuses; // offset 0xE10, size 0x28, align 8
    CUtlOrderedMap< EItemSlotTypes_t, ItemSlotInfo_t > m_mapItemSlotInfo; // offset 0xE38, size 0x28, align 8
    char _pad_0E60[0x50]; // offset 0xE60
    EAbilityResourceType m_eAbilityResourceType; // offset 0xEB0, size 0x4, align 4
    char _pad_0EB4[0x4]; // offset 0xEB4
    CUtlString m_strGunTag; // offset 0xEB8, size 0x8, align 8
    CUtlVector< CUtlString > m_vecHeroTags; // offset 0xEC0, size 0x18, align 8
    EHeroType m_eHeroType; // offset 0xED8, size 0x4, align 4
    char _pad_0EDC[0x4]; // offset 0xEDC
    CUtlString m_strRosterBackgroundLayout; // offset 0xEE0, size 0x8, align 8
    CUtlString m_strHideoutRichPresence; // offset 0xEE8, size 0x8, align 8 | MPropertyDescription
    CUtlDict< float32 > m_mapItemDraftCounterWeights; // offset 0xEF0, size 0x28, align 8 | MPropertyMapKeyLeafChoiceProviderFn
    char _pad_0F18[0x18]; // offset 0xF18
    CUtlOrderedMap< EModifierValue, float32 > m_mapStandardLevelUpUpgrades; // offset 0xF30, size 0x28, align 8
    ItemPopularity_t m_PopularItems; // offset 0xF58, size 0x58, align 8
    CUtlOrderedMap< int32, HeroLevel_t > m_mapLevelInfo; // offset 0xFB0, size 0x28, align 8
    CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapBoundAbilities; // offset 0xFD8, size 0x28, align 8
    CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapWIPAbilities; // offset 0x1000, size 0x28, align 8
    CUtlOrderedMap< CUtlString, ItemDraftWeight_t > m_mapItemDraftBucketing; // offset 0x1028, size 0x28, align 8 | MPropertyMapKeyLeafChoiceProviderFn
    char _pad_1050[0x28]; // offset 0x1050
};
