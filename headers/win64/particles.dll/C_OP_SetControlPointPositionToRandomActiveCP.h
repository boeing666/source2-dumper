#pragma once

class C_OP_SetControlPointPositionToRandomActiveCP : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x370, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    int32 m_nCP1; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nHeadLocationMin; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nHeadLocationMax; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01F4[0x4]; // offset 0x1F4
    CParticleCollectionFloatInput m_flResetRate; // offset 0x1F8, size 0x178, align 8 | MPropertyFriendlyName
};
