#pragma once

class CCitadel_Pickup_VData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0xA10, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_friendlyParticle; // offset 0x28, size 0xE0, align 8 | MPropertyStartGroup MPropertyFriendlyName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_enemyParticle; // offset 0x108, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_friendlyModelParticle; // offset 0x1E8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_enemyModelParticle; // offset 0x2C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_friendlyInteractiveParticle; // offset 0x3A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_enemyInteractiveParticle; // offset 0x488, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_gainedParticle; // offset 0x568, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_vacuumStartParticle; // offset 0x648, size 0xE0, align 8
    Color m_Color; // offset 0x728, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    char _pad_072C[0x4]; // offset 0x72C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel; // offset 0x730, size 0xE0, align 8 | MPropertyDescription MPropertyProvidesEditContextString
    bool m_bShowModelOverhead; // offset 0x810, size 0x1, align 1
    char _pad_0811[0x7]; // offset 0x811
    CModelMaterialGroupName m_sDefaultMaterialGroupName; // offset 0x818, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    CUtlString m_sVacuumAttachmentTarget; // offset 0x820, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_sNameLocString; // offset 0x828, size 0x8, align 8 | MPropertyStartGroup MPropertyFriendlyName
    int32 m_nNameOffset; // offset 0x830, size 0x4, align 4
    bool m_bShowOnMinimap; // offset 0x834, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bIsPermanentPickup; // offset 0x835, size 0x1, align 1
    char _pad_0836[0x2]; // offset 0x836
    CUtlString m_sBuffTypeLocString; // offset 0x838, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription MPropertySuppressExpr
    Color m_BuffTypeGraphColor; // offset 0x840, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription MPropertySuppressExpr
    EPermanentBuffValueUnit m_eBuffTypeValueUnit; // offset 0x844, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription MPropertySuppressExpr
    int32 m_iTempParticleSheetIndex; // offset 0x848, size 0x4, align 4
    float32 m_flParticleRadius; // offset 0x84C, size 0x4, align 4
    CUtlString m_strMinimapClass; // offset 0x850, size 0x8, align 8
    CPanoramaImageName m_strPingIcon; // offset 0x858, size 0x10, align 8 | MPropertyFriendlyName MPropertyDescription
    CSoundEventName m_sPickupSound; // offset 0x868, size 0x10, align 8 | MPropertyStartGroup MPropertyFriendlyName
    CSoundEventName m_strGainedSound; // offset 0x878, size 0x10, align 8
    CSoundEventName m_sSpawnSound; // offset 0x888, size 0x10, align 8 | MPropertyFriendlyName
    CSoundEventName m_sBecomeInteractiveSound; // offset 0x898, size 0x10, align 8 | MPropertyFriendlyName
    CSoundEventName m_strVacuumStartSound; // offset 0x8A8, size 0x10, align 8 | MPropertyFriendlyName MPropertyDescription MPropertySuppressExpr
    CSoundEventName m_sAmbientSound; // offset 0x8B8, size 0x10, align 8 | MPropertyFriendlyName
    CSoundEventName m_sHitSound; // offset 0x8C8, size 0x10, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    EPickupCollectionMethod m_eCollectionMethod; // offset 0x8D8, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    bool m_bGiveToWholeTeam; // offset 0x8DC, size 0x1, align 1 | MPropertyDescription
    char _pad_08DD[0x3]; // offset 0x8DD
    TimeScalingValue_t m_flPickupRadius; // offset 0x8E0, size 0x10, align 4 | MPropertyFriendlyName
    bool m_bLosCheckOnTouchRadius; // offset 0x8F0, size 0x1, align 1
    bool m_bPickupExpires; // offset 0x8F1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_08F2[0x2]; // offset 0x8F2
    TimeScalingValue_t m_flPickupExpirationDuration; // offset 0x8F4, size 0x10, align 4
    bool bPhysicallyDropToTheGroundOnSpawn; // offset 0x904, size 0x1, align 1 | MPropertyDescription
    char _pad_0905[0x3]; // offset 0x905
    float32 m_flSolidRadius; // offset 0x908, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription MPropertySuppressExpr
    CRangeFloat m_fInitialSpawnXYSpeed; // offset 0x90C, size 0x8, align 255 | MPropertySuppressExpr
    CRangeFloat m_fInitialSpawnZSpeed; // offset 0x914, size 0x8, align 255 | MPropertySuppressExpr
    float32 m_flFallGravity; // offset 0x91C, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flHoverOffset; // offset 0x920, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    int32 m_iHitsRequired; // offset 0x924, size 0x4, align 4 | MPropertyStartGroup MPropertyStartGroup MPropertySuppressExpr
    bool m_bHeavyMeleeOnly; // offset 0x928, size 0x1, align 1 | MPropertySuppressExpr
    char _pad_0929[0x3]; // offset 0x929
    float32 m_flCollisionRadius; // offset 0x92C, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flCenterHeightOffset; // offset 0x930, size 0x4, align 4 | MPropertySuppressExpr
    char _pad_0934[0x4]; // offset 0x934
    CEmbeddedSubclass< CBaseModifier > m_ParryCheckModifier; // offset 0x938, size 0x10, align 8
    bool m_bPicupIsVacuum; // offset 0x948, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    char _pad_0949[0x3]; // offset 0x949
    CRangeFloat m_flInitialVacuumSideSpeed; // offset 0x94C, size 0x8, align 255 | MPropertyStartGroup MPropertySuppressExpr
    CRangeFloat m_flInitialVacuumUpSpeed; // offset 0x954, size 0x8, align 255 | MPropertySuppressExpr
    char _pad_095C[0x4]; // offset 0x95C
    CPiecewiseCurve m_VacuumToPlayerSpeedCurve; // offset 0x960, size 0x40, align 8 | MPropertySuppressExpr
    CPiecewiseCurve m_VacuumInitialVelSpeedCurve; // offset 0x9A0, size 0x40, align 8 | MPropertySuppressExpr
    float32 m_flVacuumCloseEnoughToPickup; // offset 0x9E0, size 0x4, align 4 | MPropertySuppressExpr
    CRemapFloat m_EffectDistanceToRadiusRemap; // offset 0x9E4, size 0x10, align 255 | MPropertySuppressExpr
    bool m_bSameTeamOnly; // offset 0x9F4, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    char _pad_09F5[0x3]; // offset 0x9F5
    float32 m_flOutlineRange; // offset 0x9F8, size 0x4, align 4 | MPropertyStartGroup
    Color m_OutlineColor; // offset 0x9FC, size 0x4, align 4 | MPropertyColorPlusAlpha
    CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // offset 0xA00, size 0x10, align 8
};
