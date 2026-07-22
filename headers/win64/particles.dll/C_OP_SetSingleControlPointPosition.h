#pragma once

class C_OP_SetSingleControlPointPosition : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x908, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    bool m_bSetOnce; // offset 0x1E0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E1[0x3]; // offset 0x1E1
    int32 m_nCP1; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecCP1Pos; // offset 0x1E8, size 0x6B8, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_transformInput; // offset 0x8A0, size 0x68, align 8 | MPropertyFriendlyName MParticleInputOptional
};
