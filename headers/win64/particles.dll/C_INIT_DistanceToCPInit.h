#pragma once

class C_INIT_DistanceToCPInit : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x9F8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1E8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01EC[0x4]; // offset 0x1EC
    CPerParticleFloatInput m_flInputMin; // offset 0x1F0, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInputMax; // offset 0x368, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMin; // offset 0x4E0, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMax; // offset 0x658, size 0x178, align 8 | MPropertyFriendlyName
    int32 m_nStartCP; // offset 0x7D0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLOS; // offset 0x7D4, size 0x1, align 1 | MPropertyFriendlyName
    char[128] m_CollisionGroupName; // offset 0x7D5, size 0x80, align 1 | MPropertyFriendlyName
    char _pad_0855[0x3]; // offset 0x855
    ParticleTraceSet_t m_nTraceSet; // offset 0x858, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_085C[0x4]; // offset 0x85C
    CPerParticleFloatInput m_flMaxTraceLength; // offset 0x860, size 0x178, align 8 | MPropertyFriendlyName
    float32 m_flLOSScale; // offset 0x9D8, size 0x4, align 4 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x9DC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bActiveRange; // offset 0x9E0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_09E1[0x3]; // offset 0x9E1
    Vector m_vecDistanceScale; // offset 0x9E4, size 0xC, align 4 | MPropertyFriendlyName
    float32 m_flRemapBias; // offset 0x9F0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_09F4[0x4]; // offset 0x9F4
};
