#pragma once

class C_INIT_InheritFromParentParticles : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1F8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    float32 m_flScale; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1E4, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nIncrement; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bRandomDistribution; // offset 0x1EC, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01ED[0x3]; // offset 0x1ED
    int32 m_nRandomSeed; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01F4[0x4]; // offset 0x1F4
};
