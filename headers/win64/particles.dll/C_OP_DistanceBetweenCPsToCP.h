#pragma once

class C_OP_DistanceBetweenCPsToCP : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x298, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nStartCP; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nEndCP; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputCP; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputCPField; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bSetOnce; // offset 0x1F0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F1[0x3]; // offset 0x1F1
    float32 m_flInputMin; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flInputMax; // offset 0x1F8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMin; // offset 0x1FC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMax; // offset 0x200, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxTraceLength; // offset 0x204, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLOSScale; // offset 0x208, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLOS; // offset 0x20C, size 0x1, align 1 | MPropertyFriendlyName
    char[128] m_CollisionGroupName; // offset 0x20D, size 0x80, align 1 | MPropertyFriendlyName
    char _pad_028D[0x3]; // offset 0x28D
    ParticleTraceSet_t m_nTraceSet; // offset 0x290, size 0x4, align 4 | MPropertyFriendlyName
    ParticleParentSetMode_t m_nSetParent; // offset 0x294, size 0x4, align 4 | MPropertyFriendlyName
};
