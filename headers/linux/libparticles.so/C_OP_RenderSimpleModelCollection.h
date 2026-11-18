#pragma once

class C_OP_RenderSimpleModelCollection : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x580, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x21D]; // offset 0x0
    bool m_bCenterOffset; // offset 0x21D, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_021E[0x2]; // offset 0x21E
    CStrongHandle< InfoForResourceTypeCModel > m_hModel; // offset 0x220, size 0x8, align 8 | MPropertyStartGroup MPropertyFriendlyName
    CParticleModelInput m_modelInput; // offset 0x228, size 0x58, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_fSizeCullScale; // offset 0x280, size 0x170, align 8 | MPropertyStartGroup MPropertyFriendlyName
    bool m_bDisableShadows; // offset 0x3F0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDisableMotionBlur; // offset 0x3F1, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAcceptsDecals; // offset 0x3F2, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_03F3[0x5]; // offset 0x3F3
    CPerParticleFloatInput m_fDrawFilter; // offset 0x3F8, size 0x170, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nAngularVelocityField; // offset 0x568, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_056C[0x14]; // offset 0x56C
};
