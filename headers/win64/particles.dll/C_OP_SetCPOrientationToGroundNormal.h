#pragma once

class C_OP_SetCPOrientationToGroundNormal : public CParticleFunctionOperator /*0x0*/  // sizeof 0x288, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    float32 m_flInterpRate; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxTraceLength; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTolerance; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTraceOffset; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    char[128] m_CollisionGroupName; // offset 0x1E8, size 0x80, align 1 | MPropertyFriendlyName
    ParticleTraceSet_t m_nTraceSet; // offset 0x268, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nInputCP; // offset 0x26C, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputCP; // offset 0x270, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0274[0xC]; // offset 0x274
    bool m_bIncludeWater; // offset 0x280, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0281[0x7]; // offset 0x281
};
