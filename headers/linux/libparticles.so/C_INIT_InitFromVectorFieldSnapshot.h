#pragma once

class C_INIT_InitFromVectorFieldSnapshot : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nLocalSpaceCP; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nWeightUpdateCP; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bUseVerticalVelocity; // offset 0x1E0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E1[0x7]; // offset 0x1E1
    CPerParticleVecInput m_vecScale; // offset 0x1E8, size 0x690, align 8 | MPropertyFriendlyName
};
