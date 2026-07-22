#pragma once

class C_OP_MovementPlaceOnGround : public CParticleFunctionOperator /*0x0*/  // sizeof 0xA88, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    CPerParticleFloatInput m_flOffset; // offset 0x1D0, size 0x168, align 8 | MPropertyFriendlyName
    float32 m_flMaxTraceLength; // offset 0x338, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTolerance; // offset 0x33C, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleVecInput m_vecTraceDir; // offset 0x340, size 0x690, align 8 | MPropertyFriendlyName
    float32 m_flTraceOffset; // offset 0x9D0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLerpRate; // offset 0x9D4, size 0x4, align 4 | MPropertyFriendlyName
    char[128] m_CollisionGroupName; // offset 0x9D8, size 0x80, align 1 | MPropertyFriendlyName
    ParticleTraceSet_t m_nTraceSet; // offset 0xA58, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nRefCP1; // offset 0xA5C, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nRefCP2; // offset 0xA60, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nLerpCP; // offset 0xA64, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0A68[0x8]; // offset 0xA68
    ParticleTraceMissBehavior_t m_nTraceMissBehavior; // offset 0xA70, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bIncludeShotHull; // offset 0xA74, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bIncludeWater; // offset 0xA75, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0A76[0x2]; // offset 0xA76
    bool m_bSetNormal; // offset 0xA78, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bScaleOffset; // offset 0xA79, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0A7A[0x2]; // offset 0xA7A
    int32 m_nPreserveOffsetCP; // offset 0xA7C, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nIgnoreCP; // offset 0xA80, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0A84[0x4]; // offset 0xA84
};
