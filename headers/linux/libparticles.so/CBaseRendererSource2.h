#pragma once

class CBaseRendererSource2 : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x2DE8, align 0xFF [vtable abstract] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    CParticleCollectionRendererFloatInput m_flRadiusScale; // offset 0x228, size 0x170, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flAlphaScale; // offset 0x398, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flRollScale; // offset 0x508, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nAlpha2Field; // offset 0x678, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    char _pad_067C[0x4]; // offset 0x67C
    CParticleCollectionRendererVecInput m_vecColorScale; // offset 0x680, size 0x6B0, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleColorBlendType_t m_nColorBlendType; // offset 0xD30, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    SpriteCardShaderType_t m_nShaderType; // offset 0xD34, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CUtlString m_strShaderOverride; // offset 0xD38, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flCenterXOffset; // offset 0xD40, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flCenterYOffset; // offset 0xEB0, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flBumpStrength; // offset 0x1020, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleSequenceCropOverride_t m_nCropTextureOverride; // offset 0x1024, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CUtlLeanVector< TextureGroup_t > m_vecTexturesInput; // offset 0x1028, size 0x10, align 8 | MPropertyFriendlyName MParticleRequireDefaultArrayEntry MPropertyAutoExpandSelf MPropertySortPriority
    float32 m_flAnimationRate; // offset 0x1038, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    AnimationType_t m_nAnimationType; // offset 0x103C, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    bool m_bAnimateInFPS; // offset 0x1040, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_1041[0x7]; // offset 0x1041
    CParticleCollectionRendererFloatInput m_flMotionVectorScaleU; // offset 0x1048, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flMotionVectorScaleV; // offset 0x11B8, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flSelfIllumAmount; // offset 0x1328, size 0x170, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flDiffuseAmount; // offset 0x1498, size 0x170, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flDiffuseClamp; // offset 0x1608, size 0x170, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority MPropertySuppressExpr
    int32 m_nLightingControlPoint; // offset 0x1778, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleOutputBlendMode_t m_nOutputBlendMode; // offset 0x177C, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bGammaCorrectVertexColors; // offset 0x1780, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bSaturateColorPreAlphaBlend; // offset 0x1781, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_1782[0x6]; // offset 0x1782
    CParticleCollectionRendererFloatInput m_flAddSelfAmount; // offset 0x1788, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flDesaturation; // offset 0x18F8, size 0x170, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flOverbrightFactor; // offset 0x1A68, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    int32 m_nHSVShiftControlPoint; // offset 0x1BD8, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleFogType_t m_nFogType; // offset 0x1BDC, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flFogAmount; // offset 0x1BE0, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bTintByFOW; // offset 0x1D50, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bTintByGlobalLight; // offset 0x1D51, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_1D52[0x2]; // offset 0x1D52
    SpriteCardPerParticleScale_t m_nPerParticleAlphaReference; // offset 0x1D54, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    SpriteCardPerParticleScale_t m_nPerParticleAlphaRefWindow; // offset 0x1D58, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleAlphaReferenceType_t m_nAlphaReferenceType; // offset 0x1D5C, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flAlphaReferenceSoftness; // offset 0x1D60, size 0x170, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToZero; // offset 0x1ED0, size 0x170, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToOne; // offset 0x2040, size 0x170, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    bool m_bRefract; // offset 0x21B0, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bRefractSolid; // offset 0x21B1, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bRefract2Passes; // offset 0x21B2, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_21B3[0x5]; // offset 0x21B3
    CParticleCollectionRendererFloatInput m_flRefractAmount; // offset 0x21B8, size 0x170, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority MPropertySuppressExpr
    int32 m_nRefractBlurRadius; // offset 0x2328, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    BlurFilterType_t m_nRefractBlurType; // offset 0x232C, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bOnlyRenderInEffectsBloomPass; // offset 0x2330, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bOnlyRenderInEffectsWaterPass; // offset 0x2331, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bUseMixedResolutionRendering; // offset 0x2332, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bOnlyRenderInEffecsGameOverlay; // offset 0x2333, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char[128] m_stencilTestID; // offset 0x2334, size 0x80, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bStencilTestExclude; // offset 0x23B4, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char[128] m_stencilWriteID; // offset 0x23B5, size 0x80, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bWriteStencilOnDepthPass; // offset 0x2435, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bWriteStencilOnDepthFail; // offset 0x2436, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bReverseZBuffering; // offset 0x2437, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bDisableZBuffering; // offset 0x2438, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_2439[0x3]; // offset 0x2439
    ParticleDepthFeatheringMode_t m_nFeatheringMode; // offset 0x243C, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flFeatheringMinDist; // offset 0x2440, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flFeatheringMaxDist; // offset 0x25B0, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flFeatheringFilter; // offset 0x2720, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flFeatheringDepthMapFilter; // offset 0x2890, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    CParticleCollectionRendererFloatInput m_flDepthBias; // offset 0x2A00, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleSortingChoiceList_t m_nSortMethod; // offset 0x2B70, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    bool m_bBlendFramesSeq0; // offset 0x2B74, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bMaxLuminanceBlendingSequence0; // offset 0x2B75, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_2B76[0x272]; // offset 0x2B76
};
