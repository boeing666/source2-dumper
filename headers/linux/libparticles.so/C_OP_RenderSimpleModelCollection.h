#pragma once

class C_OP_RenderSimpleModelCollection : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x570, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x21A]; // offset 0x0
    bool m_bCenterOffset; // offset 0x21A, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_021B[0x5]; // offset 0x21B
    CStrongHandle< InfoForResourceTypeCModel > m_hModel; // offset 0x220, size 0x8, align 8 | MPropertyStartGroup MPropertyFriendlyName
    CParticleModelInput m_modelInput; // offset 0x228, size 0x58, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_fSizeCullScale; // offset 0x280, size 0x168, align 8 | MPropertyStartGroup MPropertyFriendlyName
    bool m_bDisableShadows; // offset 0x3E8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDisableMotionBlur; // offset 0x3E9, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAcceptsDecals; // offset 0x3EA, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_03EB[0x5]; // offset 0x3EB
    CPerParticleFloatInput m_fDrawFilter; // offset 0x3F0, size 0x168, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nAngularVelocityField; // offset 0x558, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_055C[0x14]; // offset 0x55C
};
