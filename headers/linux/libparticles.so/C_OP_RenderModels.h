#pragma once

class C_OP_RenderModels : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x3CF0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x221]; // offset 0x0
    bool m_bOnlyRenderInEffectsBloomPass; // offset 0x221, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bOnlyRenderInEffectsWaterPass; // offset 0x222, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bUseMixedResolutionRendering; // offset 0x223, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bOnlyRenderInEffecsGameOverlay; // offset 0x224, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_0225[0x3]; // offset 0x225
    CUtlVector< ModelReference_t > m_ModelList; // offset 0x228, size 0x18, align 8 | MPropertyFriendlyName MParticleRequireDefaultArrayEntry MPropertyAutoExpandSelf MPropertySortPriority
    ParticleAttributeIndex_t m_nBodyGroupField; // offset 0x240, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nSubModelField; // offset 0x244, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bIgnoreNormal; // offset 0x248, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bOrientZ; // offset 0x249, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bCenterOffset; // offset 0x24A, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_024B[0x5]; // offset 0x24B
    CPerParticleVecInput m_vecLocalOffset; // offset 0x250, size 0x6B0, align 8 | MPropertyFriendlyName MPropertySortPriority
    CPerParticleVecInput m_vecLocalRotation; // offset 0x900, size 0x6B0, align 8 | MPropertyFriendlyName MPropertySortPriority
    bool m_bIgnoreRadius; // offset 0xFB0, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_0FB1[0x3]; // offset 0xFB1
    int32 m_nModelScaleCP; // offset 0xFB4, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CPerParticleVecInput m_vecComponentScale; // offset 0xFB8, size 0x6B0, align 8 | MPropertyFriendlyName MPropertySortPriority
    bool m_bLocalScale; // offset 0x1668, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_1669[0x3]; // offset 0x1669
    int32 m_nSizeCullBloat; // offset 0x166C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bAnimated; // offset 0x1670, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_1671[0x7]; // offset 0x1671
    CPerParticleFloatInput m_flAnimationRate; // offset 0x1678, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bScaleAnimationRate; // offset 0x17E8, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bForceLoopingAnimation; // offset 0x17E9, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bResetAnimOnStop; // offset 0x17EA, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bManualAnimFrame; // offset 0x17EB, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    ParticleAttributeIndex_t m_nAnimationScaleField; // offset 0x17EC, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority MPropertySuppressExpr
    ParticleAttributeIndex_t m_nAnimationField; // offset 0x17F0, size 0x4, align 255 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    ParticleAttributeIndex_t m_nManualFrameField; // offset 0x17F4, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority MPropertySuppressExpr
    char[256] m_ActivityName; // offset 0x17F8, size 0x100, align 1 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    char[256] m_SequenceName; // offset 0x18F8, size 0x100, align 1 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    bool m_bEnableClothSimulation; // offset 0x19F8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDisableClothGroundCollision; // offset 0x19F9, size 0x1, align 1 | MPropertyFriendlyName
    char[64] m_ClothEffectName; // offset 0x19FA, size 0x40, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_1A3A[0x6]; // offset 0x1A3A
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // offset 0x1A40, size 0x8, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bOverrideTranslucentMaterials; // offset 0x1A48, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_1A49[0x7]; // offset 0x1A49
    CPerParticleFloatInput m_nSkin; // offset 0x1A50, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CUtlVector< MaterialVariable_t > m_MaterialVars; // offset 0x1BC0, size 0x18, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf MPropertySortPriority
    CPerParticleFloatInput m_flRenderFilter; // offset 0x1BD8, size 0x170, align 8 | MPropertyStartGroup MPropertyFriendlyName
    CPerParticleFloatInput m_flManualModelSelection; // offset 0x1D48, size 0x170, align 8 | MPropertyFriendlyName
    CParticleModelInput m_modelInput; // offset 0x1EB8, size 0x58, align 8 | MPropertyFriendlyName MParticleInputOptional
    int32 m_nLOD; // offset 0x1F10, size 0x4, align 4 | MPropertyFriendlyName
    char[256] m_EconSlotName; // offset 0x1F14, size 0x100, align 1 | MPropertyFriendlyName
    bool m_bOriginalModel; // offset 0x2014, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSuppressTint; // offset 0x2015, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_2016[0x2]; // offset 0x2016
    RenderModelSubModelFieldType_t m_nSubModelFieldType; // offset 0x2018, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bDisableShadows; // offset 0x201C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDisableDepthPrepass; // offset 0x201D, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAcceptsDecals; // offset 0x201E, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bForceDrawInterlevedWithSiblings; // offset 0x201F, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDoNotDrawInParticlePass; // offset 0x2020, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAllowApproximateTransforms; // offset 0x2021, size 0x1, align 1 | MPropertyFriendlyName
    char[4096] m_szRenderAttribute; // offset 0x2022, size 0x1000, align 1 | MPropertyFriendlyName
    char _pad_3022[0x6]; // offset 0x3022
    CParticleCollectionFloatInput m_flRadiusScale; // offset 0x3028, size 0x170, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flAlphaScale; // offset 0x3198, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flRollScale; // offset 0x3308, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nAlpha2Field; // offset 0x3478, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    char _pad_347C[0x4]; // offset 0x347C
    CParticleCollectionVecInput m_vecColorScale; // offset 0x3480, size 0x6B0, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x3B30, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_3B34[0x4]; // offset 0x3B34
    CUtlString m_strLightStyle; // offset 0x3B38, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor MPropertySortPriority
    CPerParticleFloatInput m_flLightStyleTime; // offset 0x3B40, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    char _pad_3CB0[0x40]; // offset 0x3CB0
};
