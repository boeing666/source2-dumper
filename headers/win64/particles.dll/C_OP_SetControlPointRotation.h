#pragma once

class C_OP_SetControlPointRotation : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0xA10, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleCollectionVecInput m_vecRotAxis; // offset 0x1E0, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CParticleCollectionFloatInput m_flRotRate; // offset 0x898, size 0x170, align 8 | MPropertyFriendlyName
    int32 m_nCP; // offset 0xA08, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nLocalCP; // offset 0xA0C, size 0x4, align 4 | MPropertyFriendlyName
};
