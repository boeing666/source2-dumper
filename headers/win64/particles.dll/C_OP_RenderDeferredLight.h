#pragma once

class C_OP_RenderDeferredLight : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x940, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    float32 m_flRadiusScale; // offset 0x228, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    float32 m_flAlphaScale; // offset 0x22C, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nAlpha2Field; // offset 0x230, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    char _pad_0234[0x4]; // offset 0x234
    CParticleCollectionVecInput m_vecColorScale; // offset 0x238, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x910, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    bool m_bUseTexture; // offset 0x914, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    bool m_bUseAlphaTestWindow; // offset 0x915, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0916[0x2]; // offset 0x916
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // offset 0x918, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleAttributeIndex_t m_nAlphaTestPointField; // offset 0x920, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    ParticleAttributeIndex_t m_nAlphaTestRangeField; // offset 0x924, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    ParticleAttributeIndex_t m_nAlphaTestSharpnessField; // offset 0x928, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    float32 m_flLightDistance; // offset 0x92C, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName
    float32 m_flStartFalloff; // offset 0x930, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flDistanceFalloff; // offset 0x934, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSpotFoV; // offset 0x938, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nHSVShiftControlPoint; // offset 0x93C, size 0x4, align 4 | MPropertyFriendlyName
};
