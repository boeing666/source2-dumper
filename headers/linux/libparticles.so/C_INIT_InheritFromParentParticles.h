#pragma once

class C_INIT_InheritFromParentParticles : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1E8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    float32 m_flScale; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nIncrement; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bRandomDistribution; // offset 0x1E0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E1[0x3]; // offset 0x1E1
    int32 m_nRandomSeed; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
};
