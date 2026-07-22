#pragma once

class C_OP_RenderDeferredLight : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x920, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    bool m_bUseAlphaTestWindow; // offset 0x228, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bUseTexture; // offset 0x229, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_022A[0x2]; // offset 0x22A
    float32 m_flRadiusScale; // offset 0x22C, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    float32 m_flAlphaScale; // offset 0x230, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nAlpha2Field; // offset 0x234, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    CParticleCollectionVecInput m_vecColorScale; // offset 0x238, size 0x6B8, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x8F0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flLightDistance; // offset 0x8F4, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName
    float32 m_flStartFalloff; // offset 0x8F8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flDistanceFalloff; // offset 0x8FC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSpotFoV; // offset 0x900, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nAlphaTestPointField; // offset 0x904, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    ParticleAttributeIndex_t m_nAlphaTestRangeField; // offset 0x908, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    ParticleAttributeIndex_t m_nAlphaTestSharpnessField; // offset 0x90C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // offset 0x910, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nHSVShiftControlPoint; // offset 0x918, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_091C[0x4]; // offset 0x91C
};
