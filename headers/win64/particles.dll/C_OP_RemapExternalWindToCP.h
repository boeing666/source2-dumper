#pragma once

class C_OP_RemapExternalWindToCP : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x8A8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nCP; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPOutput; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecScale; // offset 0x1E8, size 0x6B8, align 8 | MPropertyFriendlyName
    bool m_bSetMagnitude; // offset 0x8A0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_08A1[0x3]; // offset 0x8A1
    int32 m_nOutVectorField; // offset 0x8A4, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
};
