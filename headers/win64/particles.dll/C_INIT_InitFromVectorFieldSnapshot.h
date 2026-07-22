#pragma once

class C_INIT_InitFromVectorFieldSnapshot : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x8A8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nLocalSpaceCP; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nWeightUpdateCP; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bUseVerticalVelocity; // offset 0x1EC, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01ED[0x3]; // offset 0x1ED
    CPerParticleVecInput m_vecScale; // offset 0x1F0, size 0x6B8, align 8 | MPropertyFriendlyName
};
