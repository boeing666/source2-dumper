#pragma once

class C_OP_RenderModels : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x2E20, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
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
    CPerParticleVecInput m_vecLocalOffset; // offset 0x258, size 0x6B8, align 8 | MPropertyFriendlyName MPropertySortPriority
    CPerParticleVecInput m_vecLocalRotation; // offset 0x910, size 0x6B8, align 8 | MPropertyFriendlyName MPropertySortPriority
    bool m_bIgnoreRadius; // offset 0xFC8, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_0FC9[0x3]; // offset 0xFC9
    int32 m_nModelScaleCP; // offset 0xFCC, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CPerParticleVecInput m_vecComponentScale; // offset 0xFD0, size 0x6B8, align 8 | MPropertyFriendlyName MPropertySortPriority
    bool m_bLocalScale; // offset 0x1688, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_1689[0x3]; // offset 0x1689
    int32 m_nSizeCullBloat; // offset 0x168C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bAnimated; // offset 0x1690, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_1691[0x7]; // offset 0x1691
    CPerParticleFloatInput m_flAnimationRate; // offset 0x1698, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bScaleAnimationRate; // offset 0x1808, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bForceLoopingAnimation; // offset 0x1809, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bResetAnimOnStop; // offset 0x180A, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bManualAnimFrame; // offset 0x180B, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    ParticleAttributeIndex_t m_nAnimationScaleField; // offset 0x180C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority MPropertySuppressExpr
    ParticleAttributeIndex_t m_nAnimationField; // offset 0x1810, size 0x4, align 255 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    ParticleAttributeIndex_t m_nManualFrameField; // offset 0x1814, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority MPropertySuppressExpr
    char[256] m_ActivityName; // offset 0x1818, size 0x100, align 1 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    char[256] m_SequenceName; // offset 0x1918, size 0x100, align 1 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    bool m_bEnableClothSimulation; // offset 0x1A18, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDisableClothGroundCollision; // offset 0x1A19, size 0x1, align 1 | MPropertyFriendlyName
    char[64] m_ClothEffectName; // offset 0x1A1A, size 0x40, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_1A5A[0x6]; // offset 0x1A5A
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // offset 0x1A60, size 0x8, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bOverrideTranslucentMaterials; // offset 0x1A68, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_1A69[0x7]; // offset 0x1A69
    CPerParticleFloatInput m_nSkin; // offset 0x1A70, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CUtlVector< MaterialVariable_t > m_MaterialVars; // offset 0x1BE0, size 0x18, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf MPropertySortPriority
    CPerParticleFloatInput m_flRenderFilter; // offset 0x1BF8, size 0x170, align 8 | MPropertyStartGroup MPropertyFriendlyName
    CPerParticleFloatInput m_flManualModelSelection; // offset 0x1D68, size 0x170, align 8 | MPropertyFriendlyName
    CParticleModelInput m_modelInput; // offset 0x1ED8, size 0x60, align 8 | MPropertyFriendlyName MParticleInputOptional
    int32 m_nLOD; // offset 0x1F38, size 0x4, align 4 | MPropertyFriendlyName
    char[256] m_EconSlotName; // offset 0x1F3C, size 0x100, align 1 | MPropertyFriendlyName
    bool m_bOriginalModel; // offset 0x203C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSuppressTint; // offset 0x203D, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_203E[0x2]; // offset 0x203E
    RenderModelSubModelFieldType_t m_nSubModelFieldType; // offset 0x2040, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bDisableShadows; // offset 0x2044, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDisableDepthPrepass; // offset 0x2045, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAcceptsDecals; // offset 0x2046, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bForceDrawInterlevedWithSiblings; // offset 0x2047, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDoNotDrawInParticlePass; // offset 0x2048, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAllowApproximateTransforms; // offset 0x2049, size 0x1, align 1 | MPropertyFriendlyName
    char[260] m_szRenderAttribute; // offset 0x204A, size 0x104, align 1 | MPropertyFriendlyName
    char _pad_214E[0x2]; // offset 0x214E
    CParticleCollectionFloatInput m_flRadiusScale; // offset 0x2150, size 0x170, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flAlphaScale; // offset 0x22C0, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flRollScale; // offset 0x2430, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nAlpha2Field; // offset 0x25A0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    char _pad_25A4[0x4]; // offset 0x25A4
    CParticleCollectionVecInput m_vecColorScale; // offset 0x25A8, size 0x6B8, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x2C60, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_2C64[0x4]; // offset 0x2C64
    CUtlString m_strLightStyle; // offset 0x2C68, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor MPropertySortPriority
    CPerParticleFloatInput m_flLightStyleTime; // offset 0x2C70, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    char _pad_2DE0[0x40]; // offset 0x2DE0
};
