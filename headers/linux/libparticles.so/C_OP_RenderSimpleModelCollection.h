#pragma once

class C_OP_RenderSimpleModelCollection : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x588, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x221]; // offset 0x0
    bool m_bCenterOffset; // offset 0x221, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_0222[0x6]; // offset 0x222
    CStrongHandle< InfoForResourceTypeCModel > m_hModel; // offset 0x228, size 0x8, align 8 | MPropertyStartGroup MPropertyFriendlyName
    CParticleModelInput m_modelInput; // offset 0x230, size 0x58, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_fSizeCullScale; // offset 0x288, size 0x170, align 8 | MPropertyStartGroup MPropertyFriendlyName
    bool m_bDisableShadows; // offset 0x3F8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDisableMotionBlur; // offset 0x3F9, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAcceptsDecals; // offset 0x3FA, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_03FB[0x5]; // offset 0x3FB
    CPerParticleFloatInput m_fDrawFilter; // offset 0x400, size 0x170, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nAngularVelocityField; // offset 0x570, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0574[0x14]; // offset 0x574
};
