#pragma once

class C_OP_RenderModels : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x3C28, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x219]; // offset 0x0
    bool m_bOnlyRenderInEffectsBloomPass; // offset 0x219, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bOnlyRenderInEffectsWaterPass; // offset 0x21A, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bUseMixedResolutionRendering; // offset 0x21B, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bOnlyRenderInEffecsGameOverlay; // offset 0x21C, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_021D[0x3]; // offset 0x21D
    CUtlVector< ModelReference_t > m_ModelList; // offset 0x220, size 0x18, align 8 | MPropertyFriendlyName MParticleRequireDefaultArrayEntry MPropertyAutoExpandSelf MPropertySortPriority
    ParticleAttributeIndex_t m_nBodyGroupField; // offset 0x238, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nSubModelField; // offset 0x23C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bIgnoreNormal; // offset 0x240, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bOrientZ; // offset 0x241, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bCenterOffset; // offset 0x242, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_0243[0x5]; // offset 0x243
    CPerParticleVecInput m_vecLocalOffset; // offset 0x248, size 0x690, align 8 | MPropertyFriendlyName MPropertySortPriority
    CPerParticleVecInput m_vecLocalRotation; // offset 0x8D8, size 0x690, align 8 | MPropertyFriendlyName MPropertySortPriority
    bool m_bIgnoreRadius; // offset 0xF68, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_0F69[0x3]; // offset 0xF69
    int32 m_nModelScaleCP; // offset 0xF6C, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CPerParticleVecInput m_vecComponentScale; // offset 0xF70, size 0x690, align 8 | MPropertyFriendlyName MPropertySortPriority
    bool m_bLocalScale; // offset 0x1600, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_1601[0x3]; // offset 0x1601
    int32 m_nSizeCullBloat; // offset 0x1604, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bAnimated; // offset 0x1608, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_1609[0x7]; // offset 0x1609
    CPerParticleFloatInput m_flAnimationRate; // offset 0x1610, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bScaleAnimationRate; // offset 0x1778, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bForceLoopingAnimation; // offset 0x1779, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bResetAnimOnStop; // offset 0x177A, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bManualAnimFrame; // offset 0x177B, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    ParticleAttributeIndex_t m_nAnimationScaleField; // offset 0x177C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority MPropertySuppressExpr
    ParticleAttributeIndex_t m_nAnimationField; // offset 0x1780, size 0x4, align 255 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    ParticleAttributeIndex_t m_nManualFrameField; // offset 0x1784, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority MPropertySuppressExpr
    char[256] m_ActivityName; // offset 0x1788, size 0x100, align 1 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    char[256] m_SequenceName; // offset 0x1888, size 0x100, align 1 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    bool m_bEnableClothSimulation; // offset 0x1988, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDisableClothGroundCollision; // offset 0x1989, size 0x1, align 1 | MPropertyFriendlyName
    char[64] m_ClothEffectName; // offset 0x198A, size 0x40, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_19CA[0x6]; // offset 0x19CA
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // offset 0x19D0, size 0x8, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bOverrideTranslucentMaterials; // offset 0x19D8, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_19D9[0x7]; // offset 0x19D9
    CPerParticleFloatInput m_nSkin; // offset 0x19E0, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority
    CUtlVector< MaterialVariable_t > m_MaterialVars; // offset 0x1B48, size 0x18, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf MPropertySortPriority
    CPerParticleFloatInput m_flRenderFilter; // offset 0x1B60, size 0x168, align 8 | MPropertyStartGroup MPropertyFriendlyName
    CPerParticleFloatInput m_flManualModelSelection; // offset 0x1CC8, size 0x168, align 8 | MPropertyFriendlyName
    CParticleModelInput m_modelInput; // offset 0x1E30, size 0x58, align 8 | MPropertyFriendlyName MParticleInputOptional
    int32 m_nLOD; // offset 0x1E88, size 0x4, align 4 | MPropertyFriendlyName
    char[256] m_EconSlotName; // offset 0x1E8C, size 0x100, align 1 | MPropertyFriendlyName
    bool m_bOriginalModel; // offset 0x1F8C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSuppressTint; // offset 0x1F8D, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1F8E[0x2]; // offset 0x1F8E
    RenderModelSubModelFieldType_t m_nSubModelFieldType; // offset 0x1F90, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bDisableShadows; // offset 0x1F94, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDisableDepthPrepass; // offset 0x1F95, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAcceptsDecals; // offset 0x1F96, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bForceDrawInterlevedWithSiblings; // offset 0x1F97, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDoNotDrawInParticlePass; // offset 0x1F98, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAllowApproximateTransforms; // offset 0x1F99, size 0x1, align 1 | MPropertyFriendlyName
    char[4096] m_szRenderAttribute; // offset 0x1F9A, size 0x1000, align 1 | MPropertyFriendlyName
    char _pad_2F9A[0x6]; // offset 0x2F9A
    CParticleCollectionFloatInput m_flRadiusScale; // offset 0x2FA0, size 0x168, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flAlphaScale; // offset 0x3108, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flRollScale; // offset 0x3270, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nAlpha2Field; // offset 0x33D8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    char _pad_33DC[0x4]; // offset 0x33DC
    CParticleCollectionVecInput m_vecColorScale; // offset 0x33E0, size 0x690, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x3A70, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_3A74[0x4]; // offset 0x3A74
    CUtlString m_strLightStyle; // offset 0x3A78, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor MPropertySortPriority
    CPerParticleFloatInput m_flLightStyleTime; // offset 0x3A80, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    char _pad_3BE8[0x40]; // offset 0x3BE8
};
