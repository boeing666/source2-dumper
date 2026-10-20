#pragma once

class CitadelAbilityVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x1070, align 0x8 [vtable] (server) {MGetKV3ClassDefaults MVDataOverlayType}
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
    bool m_bAffectedByRushMovementTimeScale; // offset 0x16E, size 0x1, align 1
    char _pad_016F[0x1]; // offset 0x16F
    CUtlOrderedMap< CGlobalSymbol, CCitadelWeaponInfo > m_mapWeaponInfos; // offset 0x170, size 0x28, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    CUtlOrderedMap< CGlobalSymbol, CEmbeddedSubclassGeneric< 0 > > m_mapProjectileInfos; // offset 0x198, size 0x28, align 8 | MPropertyFriendlyName MPropertyDescription
    DeploymentInfo_t m_deploymentInfo; // offset 0x1C0, size 0x200, align 8 | MPropertyFriendlyName
    CUtlDict< CitadelAbilityProperty_t > m_mapAbilityProperties; // offset 0x3C0, size 0x28, align 8 | MPropertyStartGroup
    CUtlOrderedMap< CSubclassName< 4 >, AbilityDependencyDescription_t > m_mapDependentAbilities; // offset 0x3E8, size 0x28, align 8 | MPropertyMapKeyLeafChoiceProviderFn
    CUtlVector< AbilityUpgrade_t > m_vecAbilityUpgrades; // offset 0x410, size 0x18, align 8
    bool m_bSuppressOutOfCombatOnCast; // offset 0x428, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    bool m_bSuppressOutOfCombatWhileChanneling; // offset 0x429, size 0x1, align 1 | MPropertyDescription
    char _pad_042A[0x6]; // offset 0x42A
    CGlobalSymbol m_strAG2SourceName; // offset 0x430, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    CGlobalSymbol m_strAG2CastingAction; // offset 0x438, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    CGlobalSymbol m_strAG2ChannelingAction; // offset 0x440, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    CGlobalSymbol m_strAG2CastCompletedAction; // offset 0x448, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    CGlobalSymbol m_strAG2CastFailedAction; // offset 0x450, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    AbilityTooltipDetails_t m_AbilityTooltipDetails; // offset 0x458, size 0x30, align 8 | MPropertyStartGroup MPropertySuppressExpr
    CUtlString m_strCSSClass; // offset 0x488, size 0x8, align 8
    CPanoramaImageName m_strAbilityImage; // offset 0x490, size 0x10, align 8
    CitadelAbilityHUDPanel_t m_HUDPanel; // offset 0x4A0, size 0x38, align 8
    bool m_bShowInPassiveItemsArea; // offset 0x4D8, size 0x1, align 1
    bool m_bForceHideHUDPanel; // offset 0x4D9, size 0x1, align 1
    bool m_bForceShowHUDPanel; // offset 0x4DA, size 0x1, align 1
    bool m_bUsesFlightControls; // offset 0x4DB, size 0x1, align 1
    char _pad_04DC[0x4]; // offset 0x4DC
    CUtlString m_strFlyUpLocString; // offset 0x4E0, size 0x8, align 8
    CUtlString m_strFlyDownLocString; // offset 0x4E8, size 0x8, align 8
    CUtlString m_strSubCastUICSSClass; // offset 0x4F0, size 0x8, align 8 | MPropertyDescription
    CUtlString m_sCustomStackLabel; // offset 0x4F8, size 0x8, align 8 | MPropertyFriendlyName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCPanoramaStyle > > m_HudSharedStyle; // offset 0x500, size 0xE0, align 8 | MPropertyDescription
    CUtlString m_sCustomTooltipID; // offset 0x5E0, size 0x8, align 8 | MPropertyFriendlyName
    bool m_bCustomTooltipInteractive; // offset 0x5E8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_05E9[0x7]; // offset 0x5E9
    AdditionalAbilities_t m_additionalAbilities; // offset 0x5F0, size 0x20, align 8 | MPropertyFriendlyName
    CUtlString m_strSecondaryStatName; // offset 0x610, size 0x8, align 8
    CUtlString m_strCastButtonLocToken; // offset 0x618, size 0x8, align 8 | MPropertyDescription
    CUtlString m_strAltCastButtonLocToken; // offset 0x620, size 0x8, align 8 | MPropertyDescription
    CitadelCameraOperationsSequence_t m_cameraSequenceCastStart; // offset 0x628, size 0xA0, align 8 | MPropertyStartGroup MPropertyDescription
    bool m_bEndCastStartSequenceOnCastComplete; // offset 0x6C8, size 0x1, align 1 | MPropertyDescription
    char _pad_06C9[0x7]; // offset 0x6C9
    CitadelCameraOperationsSequence_t m_cameraSequenceCastComplete; // offset 0x6D0, size 0xA0, align 8 | MPropertyDescription
    CitadelCameraOperationsSequence_t m_cameraSequenceChannelStart; // offset 0x770, size 0xA0, align 8 | MPropertyDescription
    bool m_bEndChannelStartSequenceOnChannelComplete; // offset 0x810, size 0x1, align 1 | MPropertyDescription
    char _pad_0811[0x7]; // offset 0x811
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_previewParticle; // offset 0x818, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription
    CUtlString m_strPreviewParticleEffectConfig; // offset 0x8F8, size 0x8, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewPathParticle; // offset 0x900, size 0xE0, align 8 | MPropertyDescription
    bool m_bUseSatShapesOnPreview; // offset 0x9E0, size 0x1, align 1 | MPropertyDescription
    char _pad_09E1[0x7]; // offset 0x9E1
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEPreviewParticleOverride; // offset 0x9E8, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ConePreviewParticleOverride; // offset 0xAC8, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LinePreviewParticleOverride; // offset 0xBA8, size 0xE0, align 8 | MPropertyDescription
    CUtlOrderedMap< AbilityCastEvent_t, CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > > m_mapCastEventParticles; // offset 0xC88, size 0x28, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_skillshotHitParticle; // offset 0xCB0, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_skillshotMissParticle; // offset 0xD90, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingPreviewParticle; // offset 0xE70, size 0xE0, align 8 | MPropertyDescription
    CSoundEventName m_strSelectedSound; // offset 0xF50, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strUnselectedSound; // offset 0xF60, size 0x10, align 8
    CSoundEventName m_strSelectedLoopSound; // offset 0xF70, size 0x10, align 8
    CSoundEventName m_strCastSound; // offset 0xF80, size 0x10, align 8
    CSoundEventName m_strChannelSound; // offset 0xF90, size 0x10, align 8
    CSoundEventName m_strChannelLoopSound; // offset 0xFA0, size 0x10, align 8
    CSoundEventName m_strCastDelaySound; // offset 0xFB0, size 0x10, align 8
    CSoundEventName m_strCastDelayLoopSound; // offset 0xFC0, size 0x10, align 8
    CSoundEventName m_strHitConfirmationSound; // offset 0xFD0, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strDamageTakenSound; // offset 0xFE0, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strAbilityOffCooldownSound; // offset 0xFF0, size 0x10, align 8
    CSoundEventName m_strAbilityChargeReadySound; // offset 0x1000, size 0x10, align 8
    bool m_bPlayMeepMop; // offset 0x1010, size 0x1, align 1
    char _pad_1011[0x7]; // offset 0x1011
    CEmbeddedSubclass< CBaseModifier > m_AutoChannelModifier; // offset 0x1018, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_AutoCastDelayModifier; // offset 0x1028, size 0x10, align 8
    CUtlVector< CEmbeddedSubclass< CBaseModifier > > m_AutoIntrinsicModifiers; // offset 0x1038, size 0x18, align 8
    AbilityCosmeticInfo_t m_cosmeticInfo; // offset 0x1050, size 0x8, align 8 | MPropertySuppressExpr
    CUtlVector< ItemSectionInfo_t > m_vecTooltipSectionInfo; // offset 0x1058, size 0x18, align 8 | MPropertySuppressExpr MPropertyFriendlyName
};
