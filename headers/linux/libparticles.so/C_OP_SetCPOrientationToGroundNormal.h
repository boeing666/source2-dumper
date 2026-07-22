#pragma once

class C_OP_SetCPOrientationToGroundNormal : public CParticleFunctionOperator /*0x0*/  // sizeof 0x280, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    float32 m_flInterpRate; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxTraceLength; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTolerance; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTraceOffset; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    char[128] m_CollisionGroupName; // offset 0x1E0, size 0x80, align 1 | MPropertyFriendlyName
    ParticleTraceSet_t m_nTraceSet; // offset 0x260, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nInputCP; // offset 0x264, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputCP; // offset 0x268, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_026C[0xC]; // offset 0x26C
    bool m_bIncludeWater; // offset 0x278, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0279[0x7]; // offset 0x279
};
