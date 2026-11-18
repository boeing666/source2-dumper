#pragma once

class C_OP_RenderModels : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x2EE0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    bool m_bOnlyRenderInEffectsBloomPass; // offset 0x228, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bOnlyRenderInEffectsWaterPass; // offset 0x229, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bUseMixedResolutionRendering; // offset 0x22A, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bOnlyRenderInEffecsGameOverlay; // offset 0x22B, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_022C[0x4]; // offset 0x22C
    CUtlVector< ModelReference_t > m_ModelList; // offset 0x230, size 0x18, align 8 | MPropertyFriendlyName MParticleRequireDefaultArrayEntry MPropertyAutoExpandSelf MPropertySortPriority
    ParticleAttributeIndex_t m_nBodyGroupField; // offset 0x248, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nSubModelField; // offset 0x24C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bIgnoreNormal; // offset 0x250, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bOrientZ; // offset 0x251, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bCenterOffset; // offset 0x252, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_0253[0x5]; // offset 0x253
    CPerParticleVecInput m_vecLocalOffset; // offset 0x258, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySortPriority
    CPerParticleVecInput m_vecLocalRotation; // offset 0x930, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySortPriority
    bool m_bIgnoreRadius; // offset 0x1008, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_1009[0x3]; // offset 0x1009
    int32 m_nModelScaleCP; // offset 0x100C, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CPerParticleVecInput m_vecComponentScale; // offset 0x1010, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySortPriority
    bool m_bLocalScale; // offset 0x16E8, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_16E9[0x3]; // offset 0x16E9
    int32 m_nSizeCullBloat; // offset 0x16EC, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bAnimated; // offset 0x16F0, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_16F1[0x7]; // offset 0x16F1
    CPerParticleFloatInput m_flAnimationRate; // offset 0x16F8, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bScaleAnimationRate; // offset 0x1870, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bForceLoopingAnimation; // offset 0x1871, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bResetAnimOnStop; // offset 0x1872, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bManualAnimFrame; // offset 0x1873, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    ParticleAttributeIndex_t m_nAnimationScaleField; // offset 0x1874, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority MPropertySuppressExpr
    ParticleAttributeIndex_t m_nAnimationField; // offset 0x1878, size 0x4, align 255 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    ParticleAttributeIndex_t m_nManualFrameField; // offset 0x187C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority MPropertySuppressExpr
    char[256] m_ActivityName; // offset 0x1880, size 0x100, align 1 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    char[256] m_SequenceName; // offset 0x1980, size 0x100, align 1 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    bool m_bEnableClothSimulation; // offset 0x1A80, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDisableClothGroundCollision; // offset 0x1A81, size 0x1, align 1 | MPropertyFriendlyName
    char[64] m_ClothEffectName; // offset 0x1A82, size 0x40, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_1AC2[0x6]; // offset 0x1AC2
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // offset 0x1AC8, size 0x8, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bOverrideTranslucentMaterials; // offset 0x1AD0, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_1AD1[0x7]; // offset 0x1AD1
    CPerParticleFloatInput m_nSkin; // offset 0x1AD8, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    CUtlVector< MaterialVariable_t > m_MaterialVars; // offset 0x1C50, size 0x18, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf MPropertySortPriority
    CPerParticleFloatInput m_flRenderFilter; // offset 0x1C68, size 0x178, align 8 | MPropertyStartGroup MPropertyFriendlyName
    CPerParticleFloatInput m_flManualModelSelection; // offset 0x1DE0, size 0x178, align 8 | MPropertyFriendlyName
    CParticleModelInput m_modelInput; // offset 0x1F58, size 0x60, align 8 | MPropertyFriendlyName MParticleInputOptional
    int32 m_nLOD; // offset 0x1FB8, size 0x4, align 4 | MPropertyFriendlyName
    char[256] m_EconSlotName; // offset 0x1FBC, size 0x100, align 1 | MPropertyFriendlyName
    bool m_bOriginalModel; // offset 0x20BC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSuppressTint; // offset 0x20BD, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_20BE[0x2]; // offset 0x20BE
    RenderModelSubModelFieldType_t m_nSubModelFieldType; // offset 0x20C0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bDisableShadows; // offset 0x20C4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDisableDepthPrepass; // offset 0x20C5, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAcceptsDecals; // offset 0x20C6, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bForceDrawInterlevedWithSiblings; // offset 0x20C7, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDoNotDrawInParticlePass; // offset 0x20C8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAllowApproximateTransforms; // offset 0x20C9, size 0x1, align 1 | MPropertyFriendlyName
    char[260] m_szRenderAttribute; // offset 0x20CA, size 0x104, align 1 | MPropertyFriendlyName
    char _pad_21CE[0x2]; // offset 0x21CE
    CParticleCollectionFloatInput m_flRadiusScale; // offset 0x21D0, size 0x178, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flAlphaScale; // offset 0x2348, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flRollScale; // offset 0x24C0, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nAlpha2Field; // offset 0x2638, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    char _pad_263C[0x4]; // offset 0x263C
    CParticleCollectionVecInput m_vecColorScale; // offset 0x2640, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x2D18, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_2D1C[0x4]; // offset 0x2D1C
    CUtlString m_strLightStyle; // offset 0x2D20, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor MPropertySortPriority
    CPerParticleFloatInput m_flLightStyleTime; // offset 0x2D28, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    char _pad_2EA0[0x40]; // offset 0x2EA0
};
