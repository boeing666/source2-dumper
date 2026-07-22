#pragma once

class C_OP_ConstrainDistance : public CParticleFunctionConstraint /*0x0*/  // sizeof 0x4D0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleCollectionFloatInput m_fMinDistance; // offset 0x1D8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_fMaxDistance; // offset 0x348, size 0x170, align 8 | MPropertyFriendlyName
    int32 m_nControlPointNumber; // offset 0x4B8, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_CenterOffset; // offset 0x4BC, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bGlobalCenter; // offset 0x4C8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_04C9[0x7]; // offset 0x4C9
};
