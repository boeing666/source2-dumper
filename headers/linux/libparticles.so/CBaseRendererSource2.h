#pragma once

class CBaseRendererSource2 : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x2D00, align 0xFF [vtable abstract] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x220]; // offset 0x0
    CParticleCollectionRendererFloatInput m_flRadiusScale; // offset 0x220, size 0x168, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flAlphaScale; // offset 0x388, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flRollScale; // offset 0x4F0, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nAlpha2Field; // offset 0x658, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    char _pad_065C[0x4]; // offset 0x65C
    CParticleCollectionRendererVecInput m_vecColorScale; // offset 0x660, size 0x690, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleColorBlendType_t m_nColorBlendType; // offset 0xCF0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    SpriteCardShaderType_t m_nShaderType; // offset 0xCF4, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CUtlString m_strShaderOverride; // offset 0xCF8, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flCenterXOffset; // offset 0xD00, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flCenterYOffset; // offset 0xE68, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flBumpStrength; // offset 0xFD0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleSequenceCropOverride_t m_nCropTextureOverride; // offset 0xFD4, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CUtlLeanVector< TextureGroup_t > m_vecTexturesInput; // offset 0xFD8, size 0x10, align 8 | MPropertyFriendlyName MParticleRequireDefaultArrayEntry MPropertyAutoExpandSelf MPropertySortPriority
    float32 m_flAnimationRate; // offset 0xFE8, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    AnimationType_t m_nAnimationType; // offset 0xFEC, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    bool m_bAnimateInFPS; // offset 0xFF0, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_0FF1[0x7]; // offset 0xFF1
    CParticleCollectionRendererFloatInput m_flMotionVectorScaleU; // offset 0xFF8, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flMotionVectorScaleV; // offset 0x1160, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flSelfIllumAmount; // offset 0x12C8, size 0x168, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flDiffuseAmount; // offset 0x1430, size 0x168, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flDiffuseClamp; // offset 0x1598, size 0x168, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority MPropertySuppressExpr
    int32 m_nLightingControlPoint; // offset 0x1700, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleOutputBlendMode_t m_nOutputBlendMode; // offset 0x1704, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bGammaCorrectVertexColors; // offset 0x1708, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bSaturateColorPreAlphaBlend; // offset 0x1709, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_170A[0x6]; // offset 0x170A
    CParticleCollectionRendererFloatInput m_flAddSelfAmount; // offset 0x1710, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flDesaturation; // offset 0x1878, size 0x168, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flOverbrightFactor; // offset 0x19E0, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority
    int32 m_nHSVShiftControlPoint; // offset 0x1B48, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleFogType_t m_nFogType; // offset 0x1B4C, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flFogAmount; // offset 0x1B50, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bTintByFOW; // offset 0x1CB8, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bTintByGlobalLight; // offset 0x1CB9, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_1CBA[0x2]; // offset 0x1CBA
    SpriteCardPerParticleScale_t m_nPerParticleAlphaReference; // offset 0x1CBC, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    SpriteCardPerParticleScale_t m_nPerParticleAlphaRefWindow; // offset 0x1CC0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleAlphaReferenceType_t m_nAlphaReferenceType; // offset 0x1CC4, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flAlphaReferenceSoftness; // offset 0x1CC8, size 0x168, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToZero; // offset 0x1E30, size 0x168, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToOne; // offset 0x1F98, size 0x168, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    bool m_bRefract; // offset 0x2100, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bRefractSolid; // offset 0x2101, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bRefract2Passes; // offset 0x2102, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_2103[0x5]; // offset 0x2103
    CParticleCollectionRendererFloatInput m_flRefractAmount; // offset 0x2108, size 0x168, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority MPropertySuppressExpr
    int32 m_nRefractBlurRadius; // offset 0x2270, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    BlurFilterType_t m_nRefractBlurType; // offset 0x2274, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bOnlyRenderInEffectsBloomPass; // offset 0x2278, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bOnlyRenderInEffectsWaterPass; // offset 0x2279, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bUseMixedResolutionRendering; // offset 0x227A, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bOnlyRenderInEffecsGameOverlay; // offset 0x227B, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char[128] m_stencilTestID; // offset 0x227C, size 0x80, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bStencilTestExclude; // offset 0x22FC, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char[128] m_stencilWriteID; // offset 0x22FD, size 0x80, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bWriteStencilOnDepthPass; // offset 0x237D, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bWriteStencilOnDepthFail; // offset 0x237E, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bReverseZBuffering; // offset 0x237F, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bDisableZBuffering; // offset 0x2380, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_2381[0x3]; // offset 0x2381
    ParticleDepthFeatheringMode_t m_nFeatheringMode; // offset 0x2384, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flFeatheringMinDist; // offset 0x2388, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flFeatheringMaxDist; // offset 0x24F0, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flFeatheringFilter; // offset 0x2658, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flFeatheringDepthMapFilter; // offset 0x27C0, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    CParticleCollectionRendererFloatInput m_flDepthBias; // offset 0x2928, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleSortingChoiceList_t m_nSortMethod; // offset 0x2A90, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    bool m_bBlendFramesSeq0; // offset 0x2A94, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bMaxLuminanceBlendingSequence0; // offset 0x2A95, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_2A96[0x26A]; // offset 0x2A96
};
