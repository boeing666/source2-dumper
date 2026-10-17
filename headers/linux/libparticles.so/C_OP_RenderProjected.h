#pragma once

class C_OP_RenderProjected : public CParticleFunctionRenderer /*0x0*/  // sizeof 0xF00, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x221]; // offset 0x0
    bool m_bProjectCharacter; // offset 0x221, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bProjectWorld; // offset 0x222, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bProjectWater; // offset 0x223, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bFlipHorizontal; // offset 0x224, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bEnableProjectedDepthControls; // offset 0x225, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0226[0x2]; // offset 0x226
    float32 m_flMinProjectionDepth; // offset 0x228, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flMaxProjectionDepth; // offset 0x22C, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    CUtlVector< RenderProjectedMaterial_t > m_vecProjectedMaterials; // offset 0x230, size 0x18, align 8 | MPropertyFriendlyName MParticleRequireDefaultArrayEntry MPropertyAutoExpandSelf
    CPerParticleFloatInput m_flMaterialSelection; // offset 0x248, size 0x170, align 8 | MPropertyFriendlyName
    float32 m_flAnimationTimeScale; // offset 0x3B8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bOrientToNormal; // offset 0x3BC, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_03BD[0x3]; // offset 0x3BD
    CUtlVector< MaterialVariable_t > m_MaterialVars; // offset 0x3C0, size 0x18, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf
    CParticleCollectionFloatInput m_flRadiusScale; // offset 0x3D8, size 0x170, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flAlphaScale; // offset 0x548, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flRollScale; // offset 0x6B8, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nAlpha2Field; // offset 0x828, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    char _pad_082C[0x4]; // offset 0x82C
    CParticleCollectionVecInput m_vecColorScale; // offset 0x830, size 0x6B0, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleColorBlendType_t m_nColorBlendType; // offset 0xEE0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_0EE4[0x1C]; // offset 0xEE4
};
