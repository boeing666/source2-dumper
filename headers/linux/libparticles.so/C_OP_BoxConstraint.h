#pragma once

class C_OP_BoxConstraint : public CParticleFunctionConstraint /*0x0*/  // sizeof 0xF40, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleCollectionVecInput m_vecMin; // offset 0x1D8, size 0x6B0, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecMax; // offset 0x888, size 0x6B0, align 8 | MPropertyFriendlyName
    int32 m_nCP; // offset 0xF38, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLocalSpace; // offset 0xF3C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAccountForRadius; // offset 0xF3D, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0F3E[0x2]; // offset 0xF3E
};
