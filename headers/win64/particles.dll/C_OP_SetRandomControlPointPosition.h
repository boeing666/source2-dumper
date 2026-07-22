#pragma once

class C_OP_SetRandomControlPointPosition : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x4E8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    bool m_bUseWorldLocation; // offset 0x1E0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bOrient; // offset 0x1E1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E2[0x2]; // offset 0x1E2
    int32 m_nCP1; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nHeadLocation; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01EC[0x4]; // offset 0x1EC
    CParticleCollectionFloatInput m_flReRandomRate; // offset 0x1F0, size 0x170, align 8 | MPropertyFriendlyName
    Vector m_vecCPMinPos; // offset 0x360, size 0xC, align 4 | MPropertyFriendlyName
    Vector m_vecCPMaxPos; // offset 0x36C, size 0xC, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flInterpolation; // offset 0x378, size 0x170, align 8 | MPropertyFriendlyName
};
