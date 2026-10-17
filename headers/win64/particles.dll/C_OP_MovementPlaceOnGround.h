#pragma once

class C_OP_MovementPlaceOnGround : public CParticleFunctionOperator /*0x0*/  // sizeof 0xAF0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleFloatInput m_flOffset; // offset 0x1E0, size 0x178, align 8 | MPropertyFriendlyName
    float32 m_flMaxTraceLength; // offset 0x358, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTolerance; // offset 0x35C, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleVecInput m_vecTraceDir; // offset 0x360, size 0x6D8, align 8 | MPropertyFriendlyName
    float32 m_flTraceOffset; // offset 0xA38, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLerpRate; // offset 0xA3C, size 0x4, align 4 | MPropertyFriendlyName
    char[128] m_CollisionGroupName; // offset 0xA40, size 0x80, align 1 | MPropertyFriendlyName
    ParticleTraceSet_t m_nTraceSet; // offset 0xAC0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nRefCP1; // offset 0xAC4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nRefCP2; // offset 0xAC8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nLerpCP; // offset 0xACC, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0AD0[0x8]; // offset 0xAD0
    ParticleTraceMissBehavior_t m_nTraceMissBehavior; // offset 0xAD8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bIncludeShotHull; // offset 0xADC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bIncludeWater; // offset 0xADD, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0ADE[0x2]; // offset 0xADE
    bool m_bSetNormal; // offset 0xAE0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bScaleOffset; // offset 0xAE1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0AE2[0x2]; // offset 0xAE2
    int32 m_nPreserveOffsetCP; // offset 0xAE4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nIgnoreCP; // offset 0xAE8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0AEC[0x4]; // offset 0xAEC
};
