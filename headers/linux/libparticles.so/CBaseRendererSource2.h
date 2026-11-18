#pragma once

class CBaseRendererSource2 : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x2DE0, align 0xFF [vtable abstract] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x220]; // offset 0x0
    CParticleCollectionRendererFloatInput m_flRadiusScale; // offset 0x220, size 0x170, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flAlphaScale; // offset 0x390, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flRollScale; // offset 0x500, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nAlpha2Field; // offset 0x670, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    char _pad_0674[0x4]; // offset 0x674
    CParticleCollectionRendererVecInput m_vecColorScale; // offset 0x678, size 0x6B0, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleColorBlendType_t m_nColorBlendType; // offset 0xD28, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    SpriteCardShaderType_t m_nShaderType; // offset 0xD2C, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CUtlString m_strShaderOverride; // offset 0xD30, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flCenterXOffset; // offset 0xD38, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flCenterYOffset; // offset 0xEA8, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flBumpStrength; // offset 0x1018, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleSequenceCropOverride_t m_nCropTextureOverride; // offset 0x101C, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CUtlLeanVector< TextureGroup_t > m_vecTexturesInput; // offset 0x1020, size 0x10, align 8 | MPropertyFriendlyName MParticleRequireDefaultArrayEntry MPropertyAutoExpandSelf MPropertySortPriority
    float32 m_flAnimationRate; // offset 0x1030, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    AnimationType_t m_nAnimationType; // offset 0x1034, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    bool m_bAnimateInFPS; // offset 0x1038, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_1039[0x7]; // offset 0x1039
    CParticleCollectionRendererFloatInput m_flMotionVectorScaleU; // offset 0x1040, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flMotionVectorScaleV; // offset 0x11B0, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flSelfIllumAmount; // offset 0x1320, size 0x170, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flDiffuseAmount; // offset 0x1490, size 0x170, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flDiffuseClamp; // offset 0x1600, size 0x170, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority MPropertySuppressExpr
    int32 m_nLightingControlPoint; // offset 0x1770, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleOutputBlendMode_t m_nOutputBlendMode; // offset 0x1774, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bGammaCorrectVertexColors; // offset 0x1778, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bSaturateColorPreAlphaBlend; // offset 0x1779, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_177A[0x6]; // offset 0x177A
    CParticleCollectionRendererFloatInput m_flAddSelfAmount; // offset 0x1780, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flDesaturation; // offset 0x18F0, size 0x170, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flOverbrightFactor; // offset 0x1A60, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    int32 m_nHSVShiftControlPoint; // offset 0x1BD0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleFogType_t m_nFogType; // offset 0x1BD4, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flFogAmount; // offset 0x1BD8, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bTintByFOW; // offset 0x1D48, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bTintByGlobalLight; // offset 0x1D49, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_1D4A[0x2]; // offset 0x1D4A
    SpriteCardPerParticleScale_t m_nPerParticleAlphaReference; // offset 0x1D4C, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    SpriteCardPerParticleScale_t m_nPerParticleAlphaRefWindow; // offset 0x1D50, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleAlphaReferenceType_t m_nAlphaReferenceType; // offset 0x1D54, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flAlphaReferenceSoftness; // offset 0x1D58, size 0x170, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToZero; // offset 0x1EC8, size 0x170, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToOne; // offset 0x2038, size 0x170, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    bool m_bRefract; // offset 0x21A8, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bRefractSolid; // offset 0x21A9, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bRefract2Passes; // offset 0x21AA, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_21AB[0x5]; // offset 0x21AB
    CParticleCollectionRendererFloatInput m_flRefractAmount; // offset 0x21B0, size 0x170, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority MPropertySuppressExpr
    int32 m_nRefractBlurRadius; // offset 0x2320, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    BlurFilterType_t m_nRefractBlurType; // offset 0x2324, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bOnlyRenderInEffectsBloomPass; // offset 0x2328, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bOnlyRenderInEffectsWaterPass; // offset 0x2329, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bUseMixedResolutionRendering; // offset 0x232A, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bOnlyRenderInEffecsGameOverlay; // offset 0x232B, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char[128] m_stencilTestID; // offset 0x232C, size 0x80, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bStencilTestExclude; // offset 0x23AC, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char[128] m_stencilWriteID; // offset 0x23AD, size 0x80, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bWriteStencilOnDepthPass; // offset 0x242D, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bWriteStencilOnDepthFail; // offset 0x242E, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bReverseZBuffering; // offset 0x242F, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bDisableZBuffering; // offset 0x2430, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_2431[0x3]; // offset 0x2431
    ParticleDepthFeatheringMode_t m_nFeatheringMode; // offset 0x2434, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flFeatheringMinDist; // offset 0x2438, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flFeatheringMaxDist; // offset 0x25A8, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flFeatheringFilter; // offset 0x2718, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flFeatheringDepthMapFilter; // offset 0x2888, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    CParticleCollectionRendererFloatInput m_flDepthBias; // offset 0x29F8, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleSortingChoiceList_t m_nSortMethod; // offset 0x2B68, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    bool m_bBlendFramesSeq0; // offset 0x2B6C, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bMaxLuminanceBlendingSequence0; // offset 0x2B6D, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_2B6E[0x272]; // offset 0x2B6E
};
