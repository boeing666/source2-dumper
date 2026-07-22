#pragma once

class C_OP_BoxConstraint : public CParticleFunctionConstraint /*0x0*/  // sizeof 0xEF8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    CParticleCollectionVecInput m_vecMin; // offset 0x1D0, size 0x690, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecMax; // offset 0x860, size 0x690, align 8 | MPropertyFriendlyName
    int32 m_nCP; // offset 0xEF0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLocalSpace; // offset 0xEF4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAccountForRadius; // offset 0xEF5, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0EF6[0x2]; // offset 0xEF6
};
