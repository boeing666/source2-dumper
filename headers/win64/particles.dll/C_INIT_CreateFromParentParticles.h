#pragma once

class C_INIT_CreateFromParentParticles : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x200, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    float32 m_flVelocityScale; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flIncrement; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bRandomDistribution; // offset 0x1F0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F1[0x3]; // offset 0x1F1
    int32 m_nRandomSeed; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bSubFrame; // offset 0x1F8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetRopeSegmentID; // offset 0x1F9, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01FA[0x6]; // offset 0x1FA
};
