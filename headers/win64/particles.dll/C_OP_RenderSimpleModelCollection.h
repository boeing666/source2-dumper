#pragma once

class C_OP_RenderSimpleModelCollection : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x5A8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    bool m_bCenterOffset; // offset 0x228, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_0229[0x7]; // offset 0x229
    CStrongHandle< InfoForResourceTypeCModel > m_hModel; // offset 0x230, size 0x8, align 8 | MPropertyStartGroup MPropertyFriendlyName
    CParticleModelInput m_modelInput; // offset 0x238, size 0x60, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_fSizeCullScale; // offset 0x298, size 0x178, align 8 | MPropertyStartGroup MPropertyFriendlyName
    bool m_bDisableShadows; // offset 0x410, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDisableMotionBlur; // offset 0x411, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAcceptsDecals; // offset 0x412, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0413[0x5]; // offset 0x413
    CPerParticleFloatInput m_fDrawFilter; // offset 0x418, size 0x178, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nAngularVelocityField; // offset 0x590, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0594[0x14]; // offset 0x594
};
