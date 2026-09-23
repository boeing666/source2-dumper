#pragma once

class C_OP_RenderProjected : public CParticleFunctionRenderer /*0x0*/  // sizeof 0xF58, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x230]; // offset 0x0
    bool m_bProjectCharacter; // offset 0x230, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bProjectWorld; // offset 0x231, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bProjectWater; // offset 0x232, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bFlipHorizontal; // offset 0x233, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bEnableProjectedDepthControls; // offset 0x234, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0235[0x3]; // offset 0x235
    float32 m_flMinProjectionDepth; // offset 0x238, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flMaxProjectionDepth; // offset 0x23C, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    CUtlVector< RenderProjectedMaterial_t > m_vecProjectedMaterials; // offset 0x240, size 0x18, align 8 | MPropertyFriendlyName MParticleRequireDefaultArrayEntry MPropertyAutoExpandSelf
    CPerParticleFloatInput m_flMaterialSelection; // offset 0x258, size 0x178, align 8 | MPropertyFriendlyName
    float32 m_flAnimationTimeScale; // offset 0x3D0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bOrientToNormal; // offset 0x3D4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_03D5[0x3]; // offset 0x3D5
    CUtlVector< MaterialVariable_t > m_MaterialVars; // offset 0x3D8, size 0x18, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf
    CParticleCollectionFloatInput m_flRadiusScale; // offset 0x3F0, size 0x178, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flAlphaScale; // offset 0x568, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flRollScale; // offset 0x6E0, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nAlpha2Field; // offset 0x858, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    char _pad_085C[0x4]; // offset 0x85C
    CParticleCollectionVecInput m_vecColorScale; // offset 0x860, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleColorBlendType_t m_nColorBlendType; // offset 0xF38, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_0F3C[0x1C]; // offset 0xF3C
};
