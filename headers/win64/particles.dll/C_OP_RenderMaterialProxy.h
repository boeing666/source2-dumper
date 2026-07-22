#pragma once

class C_OP_RenderMaterialProxy : public CParticleFunctionRenderer /*0x0*/  // sizeof 0xC08, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    int32 m_nMaterialControlPoint; // offset 0x228, size 0x4, align 4 | MPropertyFriendlyName
    MaterialProxyType_t m_nProxyType; // offset 0x22C, size 0x4, align 4 | MPropertyFriendlyName
    CUtlVector< MaterialVariable_t > m_MaterialVars; // offset 0x230, size 0x18, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // offset 0x248, size 0x8, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flMaterialOverrideEnabled; // offset 0x250, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecColorScale; // offset 0x3C0, size 0x6B8, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flAlpha; // offset 0xA78, size 0x170, align 8 | MPropertyFriendlyName
    ParticleColorBlendType_t m_nColorBlendType; // offset 0xBE8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0BEC[0x1C]; // offset 0xBEC
};
