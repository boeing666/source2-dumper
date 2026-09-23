#pragma once

class C_OP_RenderModels : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x2EE8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x230]; // offset 0x0
    bool m_bOnlyRenderInEffectsBloomPass; // offset 0x230, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bOnlyRenderInEffectsWaterPass; // offset 0x231, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bUseMixedResolutionRendering; // offset 0x232, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bOnlyRenderInEffecsGameOverlay; // offset 0x233, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_0234[0x4]; // offset 0x234
    CUtlVector< ModelReference_t > m_ModelList; // offset 0x238, size 0x18, align 8 | MPropertyFriendlyName MParticleRequireDefaultArrayEntry MPropertyAutoExpandSelf MPropertySortPriority
    ParticleAttributeIndex_t m_nBodyGroupField; // offset 0x250, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nSubModelField; // offset 0x254, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bIgnoreNormal; // offset 0x258, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bOrientZ; // offset 0x259, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bCenterOffset; // offset 0x25A, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_025B[0x5]; // offset 0x25B
    CPerParticleVecInput m_vecLocalOffset; // offset 0x260, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySortPriority
    CPerParticleVecInput m_vecLocalRotation; // offset 0x938, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySortPriority
    bool m_bIgnoreRadius; // offset 0x1010, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_1011[0x3]; // offset 0x1011
    int32 m_nModelScaleCP; // offset 0x1014, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CPerParticleVecInput m_vecComponentScale; // offset 0x1018, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySortPriority
    bool m_bLocalScale; // offset 0x16F0, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_16F1[0x3]; // offset 0x16F1
    int32 m_nSizeCullBloat; // offset 0x16F4, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bAnimated; // offset 0x16F8, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_16F9[0x7]; // offset 0x16F9
    CPerParticleFloatInput m_flAnimationRate; // offset 0x1700, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bScaleAnimationRate; // offset 0x1878, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bForceLoopingAnimation; // offset 0x1879, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bResetAnimOnStop; // offset 0x187A, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bManualAnimFrame; // offset 0x187B, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    ParticleAttributeIndex_t m_nAnimationScaleField; // offset 0x187C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority MPropertySuppressExpr
    ParticleAttributeIndex_t m_nAnimationField; // offset 0x1880, size 0x4, align 255 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    ParticleAttributeIndex_t m_nManualFrameField; // offset 0x1884, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority MPropertySuppressExpr
    char[256] m_ActivityName; // offset 0x1888, size 0x100, align 1 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    char[256] m_SequenceName; // offset 0x1988, size 0x100, align 1 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    bool m_bEnableClothSimulation; // offset 0x1A88, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDisableClothGroundCollision; // offset 0x1A89, size 0x1, align 1 | MPropertyFriendlyName
    char[64] m_ClothEffectName; // offset 0x1A8A, size 0x40, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_1ACA[0x6]; // offset 0x1ACA
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // offset 0x1AD0, size 0x8, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bOverrideTranslucentMaterials; // offset 0x1AD8, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_1AD9[0x7]; // offset 0x1AD9
    CPerParticleFloatInput m_nSkin; // offset 0x1AE0, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    CUtlVector< MaterialVariable_t > m_MaterialVars; // offset 0x1C58, size 0x18, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf MPropertySortPriority
    CPerParticleFloatInput m_flRenderFilter; // offset 0x1C70, size 0x178, align 8 | MPropertyStartGroup MPropertyFriendlyName
    CPerParticleFloatInput m_flManualModelSelection; // offset 0x1DE8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleModelInput m_modelInput; // offset 0x1F60, size 0x60, align 8 | MPropertyFriendlyName MParticleInputOptional
    int32 m_nLOD; // offset 0x1FC0, size 0x4, align 4 | MPropertyFriendlyName
    char[256] m_EconSlotName; // offset 0x1FC4, size 0x100, align 1 | MPropertyFriendlyName
    bool m_bOriginalModel; // offset 0x20C4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSuppressTint; // offset 0x20C5, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_20C6[0x2]; // offset 0x20C6
    RenderModelSubModelFieldType_t m_nSubModelFieldType; // offset 0x20C8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bDisableShadows; // offset 0x20CC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDisableDepthPrepass; // offset 0x20CD, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAcceptsDecals; // offset 0x20CE, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bForceDrawInterlevedWithSiblings; // offset 0x20CF, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDoNotDrawInParticlePass; // offset 0x20D0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAllowApproximateTransforms; // offset 0x20D1, size 0x1, align 1 | MPropertyFriendlyName
    char[260] m_szRenderAttribute; // offset 0x20D2, size 0x104, align 1 | MPropertyFriendlyName
    char _pad_21D6[0x2]; // offset 0x21D6
    CParticleCollectionFloatInput m_flRadiusScale; // offset 0x21D8, size 0x178, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flAlphaScale; // offset 0x2350, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flRollScale; // offset 0x24C8, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nAlpha2Field; // offset 0x2640, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    char _pad_2644[0x4]; // offset 0x2644
    CParticleCollectionVecInput m_vecColorScale; // offset 0x2648, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x2D20, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_2D24[0x4]; // offset 0x2D24
    CUtlString m_strLightStyle; // offset 0x2D28, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor MPropertySortPriority
    CPerParticleFloatInput m_flLightStyleTime; // offset 0x2D30, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    char _pad_2EA8[0x40]; // offset 0x2EA8
};
