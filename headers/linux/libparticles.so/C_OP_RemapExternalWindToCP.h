#pragma once

class C_OP_RemapExternalWindToCP : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    int32 m_nCP; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPOutput; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01DC[0x4]; // offset 0x1DC
    CParticleCollectionVecInput m_vecScale; // offset 0x1E0, size 0x690, align 8 | MPropertyFriendlyName
    bool m_bSetMagnitude; // offset 0x870, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0871[0x3]; // offset 0x871
    int32 m_nOutVectorField; // offset 0x874, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
};
