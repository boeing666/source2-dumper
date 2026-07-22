#pragma once

class C_OP_SetRandomControlPointPosition : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x4C8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D1]; // offset 0x0
    bool m_bUseWorldLocation; // offset 0x1D1, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bOrient; // offset 0x1D2, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01D3[0x1]; // offset 0x1D3
    int32 m_nCP1; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nHeadLocation; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01DC[0x4]; // offset 0x1DC
    CParticleCollectionFloatInput m_flReRandomRate; // offset 0x1E0, size 0x168, align 8 | MPropertyFriendlyName
    Vector m_vecCPMinPos; // offset 0x348, size 0xC, align 4 | MPropertyFriendlyName
    Vector m_vecCPMaxPos; // offset 0x354, size 0xC, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flInterpolation; // offset 0x360, size 0x168, align 8 | MPropertyFriendlyName
};
