#pragma once

class C_OP_SetGravityToCP : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x360, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nCPInput; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPOutput; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flScale; // offset 0x1E8, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bSetPosition; // offset 0x358, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetOrientation; // offset 0x359, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetZDown; // offset 0x35A, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_035B[0x5]; // offset 0x35B
};
