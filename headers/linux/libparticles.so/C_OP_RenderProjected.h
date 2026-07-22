#pragma once

class C_OP_RenderProjected : public CParticleFunctionRenderer /*0x0*/  // sizeof 0xEB8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x219]; // offset 0x0
    bool m_bProjectCharacter; // offset 0x219, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bProjectWorld; // offset 0x21A, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bProjectWater; // offset 0x21B, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bFlipHorizontal; // offset 0x21C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bEnableProjectedDepthControls; // offset 0x21D, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_021E[0x2]; // offset 0x21E
    float32 m_flMinProjectionDepth; // offset 0x220, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flMaxProjectionDepth; // offset 0x224, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    CUtlVector< RenderProjectedMaterial_t > m_vecProjectedMaterials; // offset 0x228, size 0x18, align 8 | MPropertyFriendlyName MParticleRequireDefaultArrayEntry MPropertyAutoExpandSelf
    CPerParticleFloatInput m_flMaterialSelection; // offset 0x240, size 0x168, align 8 | MPropertyFriendlyName
    float32 m_flAnimationTimeScale; // offset 0x3A8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bOrientToNormal; // offset 0x3AC, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_03AD[0x3]; // offset 0x3AD
    CUtlVector< MaterialVariable_t > m_MaterialVars; // offset 0x3B0, size 0x18, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf
    CParticleCollectionFloatInput m_flRadiusScale; // offset 0x3C8, size 0x168, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flAlphaScale; // offset 0x530, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flRollScale; // offset 0x698, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nAlpha2Field; // offset 0x800, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    char _pad_0804[0x4]; // offset 0x804
    CParticleCollectionVecInput m_vecColorScale; // offset 0x808, size 0x690, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleColorBlendType_t m_nColorBlendType; // offset 0xE98, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_0E9C[0x1C]; // offset 0xE9C
};
