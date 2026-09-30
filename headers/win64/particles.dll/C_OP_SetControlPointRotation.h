#pragma once

class C_OP_SetControlPointRotation : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0xA40, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CParticleCollectionVecInput m_vecRotAxis; // offset 0x1E8, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CParticleCollectionFloatInput m_flRotRate; // offset 0x8C0, size 0x178, align 8 | MPropertyFriendlyName
    int32 m_nCP; // offset 0xA38, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nLocalCP; // offset 0xA3C, size 0x4, align 4 | MPropertyFriendlyName
};
