#pragma once

class C_OP_SetRandomControlPointPosition : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x500, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    bool m_bUseWorldLocation; // offset 0x1E8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bOrient; // offset 0x1E9, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01EA[0x2]; // offset 0x1EA
    int32 m_nCP1; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nHeadLocation; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01F4[0x4]; // offset 0x1F4
    CParticleCollectionFloatInput m_flReRandomRate; // offset 0x1F8, size 0x178, align 8 | MPropertyFriendlyName
    Vector m_vecCPMinPos; // offset 0x370, size 0xC, align 4 | MPropertyFriendlyName
    Vector m_vecCPMaxPos; // offset 0x37C, size 0xC, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flInterpolation; // offset 0x388, size 0x178, align 8 | MPropertyFriendlyName
};
