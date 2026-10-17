#pragma once

class C_OP_RemapExternalWindToCP : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x8D0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    int32 m_nCP; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPOutput; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecScale; // offset 0x1F0, size 0x6D8, align 8 | MPropertyFriendlyName
    bool m_bSetMagnitude; // offset 0x8C8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_08C9[0x3]; // offset 0x8C9
    int32 m_nOutVectorField; // offset 0x8CC, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
};
