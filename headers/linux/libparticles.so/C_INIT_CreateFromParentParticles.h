#pragma once

class C_INIT_CreateFromParentParticles : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1E8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    float32 m_flVelocityScale; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flIncrement; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bRandomDistribution; // offset 0x1DC, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01DD[0x3]; // offset 0x1DD
    int32 m_nRandomSeed; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bSubFrame; // offset 0x1E4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetRopeSegmentID; // offset 0x1E5, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E6[0x2]; // offset 0x1E6
};
