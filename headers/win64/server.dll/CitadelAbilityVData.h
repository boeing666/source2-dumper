#pragma once

class CitadelAbilityVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x13E8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults MVDataOverlayType}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    EAbilityType_t m_eAbilityType; // offset 0x28, size 0x1, align 1 | MPropertyStartGroup
    EItemSlotTypes_t m_eItemSlotType; // offset 0x29, size 0x1, align 1 | MPropertyStartGroup
    bool m_bDisabled; // offset 0x2A, size 0x1, align 1
    bool m_bDisabledOnExperimental; // offset 0x2B, size 0x1, align 1
    bool m_bInDevelopment; // offset 0x2C, size 0x1, align 1
    bool m_bStartTrained; // offset 0x2D, size 0x1, align 1
    char _pad_002E[0x2]; // offset 0x2E
    int32 m_iMaxLevel; // offset 0x30, size 0x4, align 4
    int32 m_nAbilityPointsCost; // offset 0x34, size 0x4, align 4
    int32 m_nAbillityUnlocksCost; // offset 0x38, size 0x4, align 4
    char _pad_003C[0x4]; // offset 0x3C
    uint64 m_iUpdateTime; // offset 0x40, size 0x8, align 8
    char _pad_0048[0x4]; // offset 0x48
    CBitVecEnum< EAbilityBehavior_t > m_AbilityBehaviorsBits; // offset 0x4C, size 0xC, align 4 | MPropertyStartGroup
    EAbilityTargetingLocation_t m_eAbilityTargetingLocation; // offset 0x58, size 0x4, align 4 | MPropertyDescription
    EAbilityTargetingShape_t m_eAbilityTargetingShape; // offset 0x5C, size 0x4, align 4 | MPropertyDescription
    float32 m_flTargetingConeAngle; // offset 0x60, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flTargetingConeHalfWidth; // offset 0x64, size 0x4, align 4 | MPropertySuppressExpr
    bool m_bIncludeExtra2DCone; // offset 0x68, size 0x1, align 1 | MPropertyDescription MPropertySuppressExpr
    bool m_bUseCameraOffsetsForCone; // offset 0x69, size 0x1, align 1 | MPropertySuppressExpr MPropertyDescription
    bool m_bCollectNearbyTargetsWithCone; // offset 0x6A, size 0x1, align 1 | MPropertySuppressExpr MPropertyDescription
    char _pad_006B[0x1]; // offset 0x6B
    float32 m_flNearbySweepOffset; // offset 0x6C, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flNearbySweepRadius; // offset 0x70, size 0x4, align 4 | MPropertySuppressExpr
    bool m_bTargetingPreviewDesaturatesScreen; // offset 0x74, size 0x1, align 1 | MPropertyDescription
    char _pad_0075[0x3]; // offset 0x75
    EAbilityActivation_t m_eAbilityActivation; // offset 0x78, size 0x4, align 4
    float32 m_flToggleOffDelay; // offset 0x7C, size 0x4, align 4
    InputBitMask_t m_TriggerButtonPreReqButton; // offset 0x80, size 0x8, align 8 | MPropertyDescription
    InputBitMask_t m_TriggerButtonOverride; // offset 0x88, size 0x8, align 8 | MPropertyDescription
    EAbilitySpectatePriority m_eAbilitySpectatePriority; // offset 0x90, size 0x1, align 1
    char _pad_0091[0x3]; // offset 0x91
    CBitVecEnum< EModifierState > m_bitsInterruptingStates; // offset 0x94, size 0x2C, align 4
    IncompatibleFilter_t m_IncompatibleFilter; // offset 0xC0, size 0x14, align 4
    CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // offset 0xD4, size 0x4, align 4
    CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // offset 0xD8, size 0x4, align 4
    ELOSCheck m_eTargettingLOSCheck; // offset 0xDC, size 0x4, align 4
    CBitVecEnum< EModifierState > m_bitsPreCastEnabledStateMask; // offset 0xE0, size 0x2C, align 4 | MPropertyDescription
    CBitVecEnum< EModifierState > m_bitsChannelEnabledStateMask; // offset 0x10C, size 0x2C, align 4 | MPropertyDescription
    CBitVecEnum< EModifierState > m_bitsPostCastEnabledStateMask; // offset 0x138, size 0x2C, align 4 | MPropertyDescription
    ECitadelTargetAbilityEffects m_TargetAbilityEffectsToApply; // offset 0x164, size 0x4, align 4 | MPropertyDescription
    float32 m_flBossDamageScale; // offset 0x168, size 0x4, align 4 | MPropertyDescription
    bool m_bShowTargetingPreviewWhileChanneling; // offset 0x16C, size 0x1, align 1
    bool m_bShowTargetingPreviewWhileCasting; // offset 0x16D, size 0x1, align 1
    char _pad_016E[0x2]; // offset 0x16E
    CUtlOrderedMap< CGlobalSymbol, CCitadelWeaponInfo > m_mapWeaponInfos; // offset 0x170, size 0x28, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    ProjectileInfo_t m_projectileInfo; // offset 0x198, size 0x3A0, align 8 | MPropertyFriendlyName
    DeploymentInfo_t m_deploymentInfo; // offset 0x538, size 0x200, align 8 | MPropertyFriendlyName
    CUtlDict< CitadelAbilityProperty_t > m_mapAbilityProperties; // offset 0x738, size 0x28, align 8 | MPropertyStartGroup
    CUtlOrderedMap< CSubclassName< 4 >, AbilityDependencyDescription_t > m_mapDependentAbilities; // offset 0x760, size 0x28, align 8 | MPropertyMapKeyLeafChoiceProviderFn
    CUtlVector< AbilityUpgrade_t > m_vecAbilityUpgrades; // offset 0x788, size 0x18, align 8
    bool m_bSuppressOutOfCombatOnCast; // offset 0x7A0, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    bool m_bSuppressOutOfCombatWhileChanneling; // offset 0x7A1, size 0x1, align 1 | MPropertyDescription
    char _pad_07A2[0x6]; // offset 0x7A2
    CGlobalSymbol m_strAG2SourceName; // offset 0x7A8, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    CGlobalSymbol m_strAG2CastingAction; // offset 0x7B0, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    CGlobalSymbol m_strAG2ChannelingAction; // offset 0x7B8, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    CGlobalSymbol m_strAG2CastCompletedAction; // offset 0x7C0, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    CGlobalSymbol m_strAG2CastFailedAction; // offset 0x7C8, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    AbilityTooltipDetails_t m_AbilityTooltipDetails; // offset 0x7D0, size 0x30, align 8 | MPropertyStartGroup MPropertySuppressExpr
    CUtlString m_strCSSClass; // offset 0x800, size 0x8, align 8
    CPanoramaImageName m_strAbilityImage; // offset 0x808, size 0x10, align 8
    CitadelAbilityHUDPanel_t m_HUDPanel; // offset 0x818, size 0x38, align 8
    bool m_bShowInPassiveItemsArea; // offset 0x850, size 0x1, align 1
    bool m_bForceHideHUDPanel; // offset 0x851, size 0x1, align 1
    bool m_bForceShowHUDPanel; // offset 0x852, size 0x1, align 1
    bool m_bUsesFlightControls; // offset 0x853, size 0x1, align 1
    char _pad_0854[0x4]; // offset 0x854
    CUtlString m_strFlyUpLocString; // offset 0x858, size 0x8, align 8
    CUtlString m_strFlyDownLocString; // offset 0x860, size 0x8, align 8
    CUtlString m_strSubCastUICSSClass; // offset 0x868, size 0x8, align 8 | MPropertyDescription
    CUtlString m_sCustomStackLabel; // offset 0x870, size 0x8, align 8 | MPropertyFriendlyName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCPanoramaStyle > > m_HudSharedStyle; // offset 0x878, size 0xE0, align 8 | MPropertyDescription
    CUtlString m_sCustomTooltipID; // offset 0x958, size 0x8, align 8 | MPropertyFriendlyName
    bool m_bCustomTooltipInteractive; // offset 0x960, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0961[0x7]; // offset 0x961
    AdditionalAbilities_t m_additionalAbilities; // offset 0x968, size 0x20, align 8 | MPropertyFriendlyName
    CUtlString m_strSecondaryStatName; // offset 0x988, size 0x8, align 8
    CUtlString m_strCastButtonLocToken; // offset 0x990, size 0x8, align 8 | MPropertyDescription
    CUtlString m_strAltCastButtonLocToken; // offset 0x998, size 0x8, align 8 | MPropertyDescription
    CitadelCameraOperationsSequence_t m_cameraSequenceCastStart; // offset 0x9A0, size 0xA0, align 8 | MPropertyStartGroup MPropertyDescription
    bool m_bEndCastStartSequenceOnCastComplete; // offset 0xA40, size 0x1, align 1 | MPropertyDescription
    char _pad_0A41[0x7]; // offset 0xA41
    CitadelCameraOperationsSequence_t m_cameraSequenceCastComplete; // offset 0xA48, size 0xA0, align 8 | MPropertyDescription
    CitadelCameraOperationsSequence_t m_cameraSequenceChannelStart; // offset 0xAE8, size 0xA0, align 8 | MPropertyDescription
    bool m_bEndChannelStartSequenceOnChannelComplete; // offset 0xB88, size 0x1, align 1 | MPropertyDescription
    char _pad_0B89[0x7]; // offset 0xB89
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_previewParticle; // offset 0xB90, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription
    CUtlString m_strPreviewParticleEffectConfig; // offset 0xC70, size 0x8, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewPathParticle; // offset 0xC78, size 0xE0, align 8 | MPropertyDescription
    bool m_bUseSatShapesOnPreview; // offset 0xD58, size 0x1, align 1 | MPropertyDescription
    char _pad_0D59[0x7]; // offset 0xD59
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEPreviewParticleOverride; // offset 0xD60, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ConePreviewParticleOverride; // offset 0xE40, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LinePreviewParticleOverride; // offset 0xF20, size 0xE0, align 8 | MPropertyDescription
    CUtlOrderedMap< AbilityCastEvent_t, CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > > m_mapCastEventParticles; // offset 0x1000, size 0x28, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_skillshotHitParticle; // offset 0x1028, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_skillshotMissParticle; // offset 0x1108, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingPreviewParticle; // offset 0x11E8, size 0xE0, align 8 | MPropertyDescription
    CSoundEventName m_strSelectedSound; // offset 0x12C8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strUnselectedSound; // offset 0x12D8, size 0x10, align 8
    CSoundEventName m_strSelectedLoopSound; // offset 0x12E8, size 0x10, align 8
    CSoundEventName m_strCastSound; // offset 0x12F8, size 0x10, align 8
    CSoundEventName m_strChannelSound; // offset 0x1308, size 0x10, align 8
    CSoundEventName m_strChannelLoopSound; // offset 0x1318, size 0x10, align 8
    CSoundEventName m_strCastDelaySound; // offset 0x1328, size 0x10, align 8
    CSoundEventName m_strCastDelayLoopSound; // offset 0x1338, size 0x10, align 8
    CSoundEventName m_strHitConfirmationSound; // offset 0x1348, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strDamageTakenSound; // offset 0x1358, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strAbilityOffCooldownSound; // offset 0x1368, size 0x10, align 8
    CSoundEventName m_strAbilityChargeReadySound; // offset 0x1378, size 0x10, align 8
    bool m_bPlayMeepMop; // offset 0x1388, size 0x1, align 1
    char _pad_1389[0x7]; // offset 0x1389
    CEmbeddedSubclass< CBaseModifier > m_AutoChannelModifier; // offset 0x1390, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_AutoCastDelayModifier; // offset 0x13A0, size 0x10, align 8
    CUtlVector< CEmbeddedSubclass< CBaseModifier > > m_AutoIntrinsicModifiers; // offset 0x13B0, size 0x18, align 8
    AbilityCosmeticInfo_t m_cosmeticInfo; // offset 0x13C8, size 0x8, align 8 | MPropertySuppressExpr
    CUtlVector< ItemSectionInfo_t > m_vecTooltipSectionInfo; // offset 0x13D0, size 0x18, align 8 | MPropertySuppressExpr MPropertyFriendlyName
};
