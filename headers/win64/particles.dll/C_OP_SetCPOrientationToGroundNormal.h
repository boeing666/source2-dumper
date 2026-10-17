#pragma once

class C_OP_SetCPOrientationToGroundNormal : public CParticleFunctionOperator /*0x0*/  // sizeof 0x290, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    float32 m_flInterpRate; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxTraceLength; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTolerance; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTraceOffset; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    char[128] m_CollisionGroupName; // offset 0x1F0, size 0x80, align 1 | MPropertyFriendlyName
    ParticleTraceSet_t m_nTraceSet; // offset 0x270, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nInputCP; // offset 0x274, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputCP; // offset 0x278, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_027C[0xC]; // offset 0x27C
    bool m_bIncludeWater; // offset 0x288, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0289[0x7]; // offset 0x289
};
