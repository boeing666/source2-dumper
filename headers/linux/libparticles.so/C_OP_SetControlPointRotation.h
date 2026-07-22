#pragma once

class C_OP_SetControlPointRotation : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x9D8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleCollectionVecInput m_vecRotAxis; // offset 0x1D8, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CParticleCollectionFloatInput m_flRotRate; // offset 0x868, size 0x168, align 8 | MPropertyFriendlyName
    int32 m_nCP; // offset 0x9D0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nLocalCP; // offset 0x9D4, size 0x4, align 4 | MPropertyFriendlyName
};
