#pragma once

class CitadelAbilityVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x1818, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataOverlayType MVDataOutlinerLeafNameFn}
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
    EAbilityActivation_t m_eAbilityActivation; // offset 0x74, size 0x4, align 4
    InputBitMask_t m_TriggerButtonPreReqButton; // offset 0x78, size 0x8, align 8 | MPropertyDescription
    InputBitMask_t m_TriggerButtonOverride; // offset 0x80, size 0x8, align 8 | MPropertyDescription
    EAbilitySpectatePriority m_eAbilitySpectatePriority; // offset 0x88, size 0x1, align 1
    char _pad_0089[0x3]; // offset 0x89
    CBitVecEnum< EModifierState > m_bitsInterruptingStates; // offset 0x8C, size 0x28, align 4
    IncompatibleFilter_t m_IncompatibleFilter; // offset 0xB4, size 0x14, align 4
    CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // offset 0xC8, size 0x4, align 4
    CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // offset 0xCC, size 0x4, align 4
    ELOSCheck m_eTargettingLOSCheck; // offset 0xD0, size 0x4, align 4
    CBitVecEnum< EModifierState > m_bitsPreCastEnabledStateMask; // offset 0xD4, size 0x28, align 4 | MPropertyDescription
    CBitVecEnum< EModifierState > m_bitsChannelEnabledStateMask; // offset 0xFC, size 0x28, align 4 | MPropertyDescription
    CBitVecEnum< EModifierState > m_bitsPostCastEnabledStateMask; // offset 0x124, size 0x28, align 4 | MPropertyDescription
    ECitadelTargetAbilityEffects m_TargetAbilityEffectsToApply; // offset 0x14C, size 0x4, align 4 | MPropertyDescription
    float32 m_flBossDamageScale; // offset 0x150, size 0x4, align 4 | MPropertyDescription
    bool m_bShowTargetingPreviewWhileChanneling; // offset 0x154, size 0x1, align 1
    bool m_bShowTargetingPreviewWhileCasting; // offset 0x155, size 0x1, align 1
    char _pad_0156[0x2]; // offset 0x156
    CCitadelWeaponInfo m_WeaponInfo; // offset 0x158, size 0x778, align 8 | MPropertyStartGroup MPropertyFriendlyName
    ProjectileInfo_t m_projectileInfo; // offset 0x8D0, size 0x398, align 8 | MPropertyFriendlyName
    DeploymentInfo_t m_deploymentInfo; // offset 0xC68, size 0x200, align 8 | MPropertyFriendlyName
    CUtlOrderedMap< CUtlString, CitadelAbilityProperty_t > m_mapAbilityProperties; // offset 0xE68, size 0x28, align 8 | MPropertyStartGroup
    CUtlOrderedMap< CSubclassName< 4 >, AbilityDependencyDescription_t > m_mapDependentAbilities; // offset 0xE90, size 0x28, align 8 | MPropertyMapKeyLeafChoiceProviderFn
    CUtlVector< AbilityUpgrade_t > m_vecAbilityUpgrades; // offset 0xEB8, size 0x18, align 8
    CGlobalSymbol m_strCastAnimGraphParam; // offset 0xED0, size 0x8, align 8 | MPropertyStartGroup
    CUtlString m_strSelectionNameOverride; // offset 0xED8, size 0x8, align 8 | MPropertyDescription
    CUtlString m_strCastAnimSequenceName; // offset 0xEE0, size 0x8, align 8
    bool m_bSuppressOutOfCombatOnCast; // offset 0xEE8, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    bool m_bSuppressOutOfCombatWhileChanneling; // offset 0xEE9, size 0x1, align 1 | MPropertyDescription
    char _pad_0EEA[0x6]; // offset 0xEEA
    CGlobalSymbol m_strAG2SourceName; // offset 0xEF0, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    CGlobalSymbol m_strAG2CastingAction; // offset 0xEF8, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    CGlobalSymbol m_strAG2ChannelingAction; // offset 0xF00, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    CGlobalSymbol m_strAG2CastCompletedAction; // offset 0xF08, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    AbilityTooltipDetails_t m_AbilityTooltipDetails; // offset 0xF10, size 0x30, align 8 | MPropertyStartGroup MPropertySuppressExpr
    CUtlString m_strCSSClass; // offset 0xF40, size 0x8, align 8
    CPanoramaImageName m_strAbilityImage; // offset 0xF48, size 0x10, align 8
    CUtlString m_strMoviePreviewPath; // offset 0xF58, size 0x8, align 8
    CitadelAbilityHUDPanel_t m_HUDPanel; // offset 0xF60, size 0x38, align 8
    bool m_bShowInPassiveItemsArea; // offset 0xF98, size 0x1, align 1
    bool m_bForceHideHUDPanel; // offset 0xF99, size 0x1, align 1
    bool m_bForceShowHUDPanel; // offset 0xF9A, size 0x1, align 1
    bool m_bUsesFlightControls; // offset 0xF9B, size 0x1, align 1
    char _pad_0F9C[0x4]; // offset 0xF9C
    CUtlString m_strFlyUpLocString; // offset 0xFA0, size 0x8, align 8
    CUtlString m_strFlyDownLocString; // offset 0xFA8, size 0x8, align 8
    CUtlString m_strSubCastUICSSClass; // offset 0xFB0, size 0x8, align 8 | MPropertyDescription
    AdditionalAbilities_t m_additionalAbilities; // offset 0xFB8, size 0x20, align 8 | MPropertyFriendlyName
    CUtlString m_strSecondaryStatName; // offset 0xFD8, size 0x8, align 8
    CUtlString m_strCastButtonLocToken; // offset 0xFE0, size 0x8, align 8 | MPropertyDescription
    CUtlString m_strAltCastButtonLocToken; // offset 0xFE8, size 0x8, align 8 | MPropertyDescription
    CitadelCameraOperationsSequence_t m_cameraSequenceCastStart; // offset 0xFF0, size 0x88, align 8 | MPropertyStartGroup MPropertyDescription
    bool m_bEndCastStartSequenceOnCastComplete; // offset 0x1078, size 0x1, align 1 | MPropertyDescription
    char _pad_1079[0x7]; // offset 0x1079
    CitadelCameraOperationsSequence_t m_cameraSequenceCastComplete; // offset 0x1080, size 0x88, align 8 | MPropertyDescription
    CitadelCameraOperationsSequence_t m_cameraSequenceChannelStart; // offset 0x1108, size 0x88, align 8 | MPropertyDescription
    bool m_bEndChannelStartSequenceOnChannelComplete; // offset 0x1190, size 0x1, align 1 | MPropertyDescription
    char _pad_1191[0x3]; // offset 0x1191
    float32 m_flCameraPreviewOffset; // offset 0x1194, size 0x4, align 4
    float32 m_flCameraPreviewDistance; // offset 0x1198, size 0x4, align 4
    float32 m_flCameraPreviewSpeed; // offset 0x119C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_previewParticle; // offset 0x11A0, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription
    CUtlString m_strPreviewParticleEffectConfig; // offset 0x1280, size 0x8, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewPathParticle; // offset 0x1288, size 0xE0, align 8 | MPropertyDescription
    CUtlOrderedMap< AbilityCastEvent_t, CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > > m_mapCastEventParticles; // offset 0x1368, size 0x28, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_skillshotHitParticle; // offset 0x1390, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_skillshotMissParticle; // offset 0x1470, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingPreviewParticle; // offset 0x1550, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCPanoramaStyle > > m_HudSharedStyle; // offset 0x1630, size 0xE0, align 8 | MPropertyDescription
    CSoundEventName m_strSelectedSound; // offset 0x1710, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strUnselectedSound; // offset 0x1720, size 0x10, align 8
    CSoundEventName m_strSelectedLoopSound; // offset 0x1730, size 0x10, align 8
    CSoundEventName m_strCastSound; // offset 0x1740, size 0x10, align 8
    CSoundEventName m_strChannelSound; // offset 0x1750, size 0x10, align 8
    CSoundEventName m_strChannelLoopSound; // offset 0x1760, size 0x10, align 8
    CSoundEventName m_strCastDelaySound; // offset 0x1770, size 0x10, align 8
    CSoundEventName m_strCastDelayLoopSound; // offset 0x1780, size 0x10, align 8
    CSoundEventName m_strHitConfirmationSound; // offset 0x1790, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strDamageTakenSound; // offset 0x17A0, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strAbilityOffCooldownSound; // offset 0x17B0, size 0x10, align 8
    CSoundEventName m_strAbilityChargeReadySound; // offset 0x17C0, size 0x10, align 8
    bool m_bPlayMeepMop; // offset 0x17D0, size 0x1, align 1
    char _pad_17D1[0x7]; // offset 0x17D1
    CEmbeddedSubclass< CBaseModifier > m_AutoChannelModifier; // offset 0x17D8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_AutoCastDelayModifier; // offset 0x17E8, size 0x10, align 8
    CUtlVector< CEmbeddedSubclass< CBaseModifier > > m_AutoIntrinsicModifiers; // offset 0x17F8, size 0x18, align 8
    AbilityCosmeticInfo_t m_cosmeticInfo; // offset 0x1810, size 0x1, align 1 | MPropertySuppressExpr
    char _pad_1811[0x7]; // offset 0x1811
};
