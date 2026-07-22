#pragma once

class C_OP_RenderProjected : public CParticleFunctionRenderer /*0x0*/  // sizeof 0xF10, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    bool m_bProjectCharacter; // offset 0x228, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bProjectWorld; // offset 0x229, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bProjectWater; // offset 0x22A, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bFlipHorizontal; // offset 0x22B, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bEnableProjectedDepthControls; // offset 0x22C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_022D[0x3]; // offset 0x22D
    float32 m_flMinProjectionDepth; // offset 0x230, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flMaxProjectionDepth; // offset 0x234, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    CUtlVector< RenderProjectedMaterial_t > m_vecProjectedMaterials; // offset 0x238, size 0x18, align 8 | MPropertyFriendlyName MParticleRequireDefaultArrayEntry MPropertyAutoExpandSelf
    CPerParticleFloatInput m_flMaterialSelection; // offset 0x250, size 0x170, align 8 | MPropertyFriendlyName
    float32 m_flAnimationTimeScale; // offset 0x3C0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bOrientToNormal; // offset 0x3C4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_03C5[0x3]; // offset 0x3C5
    CUtlVector< MaterialVariable_t > m_MaterialVars; // offset 0x3C8, size 0x18, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf
    CParticleCollectionFloatInput m_flRadiusScale; // offset 0x3E0, size 0x170, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flAlphaScale; // offset 0x550, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flRollScale; // offset 0x6C0, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nAlpha2Field; // offset 0x830, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    char _pad_0834[0x4]; // offset 0x834
    CParticleCollectionVecInput m_vecColorScale; // offset 0x838, size 0x6B8, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleColorBlendType_t m_nColorBlendType; // offset 0xEF0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_0EF4[0x1C]; // offset 0xEF4
};
