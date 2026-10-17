#pragma once

class C_OP_SetGravityToCP : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x370, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    int32 m_nCPInput; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPOutput; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flScale; // offset 0x1F0, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bSetPosition; // offset 0x368, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetOrientation; // offset 0x369, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetZDown; // offset 0x36A, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_036B[0x5]; // offset 0x36B
};
