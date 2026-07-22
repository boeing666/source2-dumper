#pragma once

class C_INIT_DistanceToCPInit : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x990, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D4, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CPerParticleFloatInput m_flInputMin; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInputMax; // offset 0x340, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMin; // offset 0x4A8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMax; // offset 0x610, size 0x168, align 8 | MPropertyFriendlyName
    int32 m_nStartCP; // offset 0x778, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLOS; // offset 0x77C, size 0x1, align 1 | MPropertyFriendlyName
    char[128] m_CollisionGroupName; // offset 0x77D, size 0x80, align 1 | MPropertyFriendlyName
    char _pad_07FD[0x3]; // offset 0x7FD
    ParticleTraceSet_t m_nTraceSet; // offset 0x800, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0804[0x4]; // offset 0x804
    CPerParticleFloatInput m_flMaxTraceLength; // offset 0x808, size 0x168, align 8 | MPropertyFriendlyName
    float32 m_flLOSScale; // offset 0x970, size 0x4, align 4 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x974, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bActiveRange; // offset 0x978, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0979[0x3]; // offset 0x979
    Vector m_vecDistanceScale; // offset 0x97C, size 0xC, align 4 | MPropertyFriendlyName
    float32 m_flRemapBias; // offset 0x988, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_098C[0x4]; // offset 0x98C
};
