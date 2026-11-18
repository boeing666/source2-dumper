#pragma once

class CBaseRendererSource2 : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x2ED0, align 0xFF [vtable abstract] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    CParticleCollectionRendererFloatInput m_flRadiusScale; // offset 0x228, size 0x178, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flAlphaScale; // offset 0x3A0, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flRollScale; // offset 0x518, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nAlpha2Field; // offset 0x690, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    char _pad_0694[0x4]; // offset 0x694
    CParticleCollectionRendererVecInput m_vecColorScale; // offset 0x698, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleColorBlendType_t m_nColorBlendType; // offset 0xD70, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    SpriteCardShaderType_t m_nShaderType; // offset 0xD74, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CUtlString m_strShaderOverride; // offset 0xD78, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flCenterXOffset; // offset 0xD80, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flCenterYOffset; // offset 0xEF8, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flBumpStrength; // offset 0x1070, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleSequenceCropOverride_t m_nCropTextureOverride; // offset 0x1074, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CUtlLeanVector< TextureGroup_t > m_vecTexturesInput; // offset 0x1078, size 0x10, align 8 | MPropertyFriendlyName MParticleRequireDefaultArrayEntry MPropertyAutoExpandSelf MPropertySortPriority
    float32 m_flAnimationRate; // offset 0x1088, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    AnimationType_t m_nAnimationType; // offset 0x108C, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    bool m_bAnimateInFPS; // offset 0x1090, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_1091[0x7]; // offset 0x1091
    CParticleCollectionRendererFloatInput m_flMotionVectorScaleU; // offset 0x1098, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flMotionVectorScaleV; // offset 0x1210, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flSelfIllumAmount; // offset 0x1388, size 0x178, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flDiffuseAmount; // offset 0x1500, size 0x178, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flDiffuseClamp; // offset 0x1678, size 0x178, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority MPropertySuppressExpr
    int32 m_nLightingControlPoint; // offset 0x17F0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleOutputBlendMode_t m_nOutputBlendMode; // offset 0x17F4, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bGammaCorrectVertexColors; // offset 0x17F8, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bSaturateColorPreAlphaBlend; // offset 0x17F9, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_17FA[0x6]; // offset 0x17FA
    CParticleCollectionRendererFloatInput m_flAddSelfAmount; // offset 0x1800, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flDesaturation; // offset 0x1978, size 0x178, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flOverbrightFactor; // offset 0x1AF0, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    int32 m_nHSVShiftControlPoint; // offset 0x1C68, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleFogType_t m_nFogType; // offset 0x1C6C, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flFogAmount; // offset 0x1C70, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bTintByFOW; // offset 0x1DE8, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bTintByGlobalLight; // offset 0x1DE9, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_1DEA[0x2]; // offset 0x1DEA
    SpriteCardPerParticleScale_t m_nPerParticleAlphaReference; // offset 0x1DEC, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    SpriteCardPerParticleScale_t m_nPerParticleAlphaRefWindow; // offset 0x1DF0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleAlphaReferenceType_t m_nAlphaReferenceType; // offset 0x1DF4, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flAlphaReferenceSoftness; // offset 0x1DF8, size 0x178, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToZero; // offset 0x1F70, size 0x178, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToOne; // offset 0x20E8, size 0x178, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority
    bool m_bRefract; // offset 0x2260, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bRefractSolid; // offset 0x2261, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bRefract2Passes; // offset 0x2262, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_2263[0x5]; // offset 0x2263
    CParticleCollectionRendererFloatInput m_flRefractAmount; // offset 0x2268, size 0x178, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority MPropertySuppressExpr
    int32 m_nRefractBlurRadius; // offset 0x23E0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    BlurFilterType_t m_nRefractBlurType; // offset 0x23E4, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bOnlyRenderInEffectsBloomPass; // offset 0x23E8, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bOnlyRenderInEffectsWaterPass; // offset 0x23E9, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bUseMixedResolutionRendering; // offset 0x23EA, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bOnlyRenderInEffecsGameOverlay; // offset 0x23EB, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char[128] m_stencilTestID; // offset 0x23EC, size 0x80, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bStencilTestExclude; // offset 0x246C, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char[128] m_stencilWriteID; // offset 0x246D, size 0x80, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bWriteStencilOnDepthPass; // offset 0x24ED, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bWriteStencilOnDepthFail; // offset 0x24EE, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bReverseZBuffering; // offset 0x24EF, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bDisableZBuffering; // offset 0x24F0, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_24F1[0x3]; // offset 0x24F1
    ParticleDepthFeatheringMode_t m_nFeatheringMode; // offset 0x24F4, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flFeatheringMinDist; // offset 0x24F8, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flFeatheringMaxDist; // offset 0x2670, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flFeatheringFilter; // offset 0x27E8, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flFeatheringDepthMapFilter; // offset 0x2960, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    CParticleCollectionRendererFloatInput m_flDepthBias; // offset 0x2AD8, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleSortingChoiceList_t m_nSortMethod; // offset 0x2C50, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    bool m_bBlendFramesSeq0; // offset 0x2C54, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bMaxLuminanceBlendingSequence0; // offset 0x2C55, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_2C56[0x27A]; // offset 0x2C56
};
