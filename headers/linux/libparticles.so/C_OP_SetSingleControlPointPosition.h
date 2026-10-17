#pragma once

class C_OP_SetSingleControlPointPosition : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x8F0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D9]; // offset 0x0
    bool m_bSetOnce; // offset 0x1D9, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01DA[0x2]; // offset 0x1DA
    int32 m_nCP1; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecCP1Pos; // offset 0x1E0, size 0x6B0, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_transformInput; // offset 0x890, size 0x60, align 8 | MPropertyFriendlyName MParticleInputOptional
};
