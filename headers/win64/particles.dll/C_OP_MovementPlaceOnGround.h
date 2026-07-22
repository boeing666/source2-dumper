#pragma once

class C_OP_MovementPlaceOnGround : public CParticleFunctionOperator /*0x0*/  // sizeof 0xAC0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleFloatInput m_flOffset; // offset 0x1D8, size 0x170, align 8 | MPropertyFriendlyName
    float32 m_flMaxTraceLength; // offset 0x348, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTolerance; // offset 0x34C, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleVecInput m_vecTraceDir; // offset 0x350, size 0x6B8, align 8 | MPropertyFriendlyName
    float32 m_flTraceOffset; // offset 0xA08, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLerpRate; // offset 0xA0C, size 0x4, align 4 | MPropertyFriendlyName
    char[128] m_CollisionGroupName; // offset 0xA10, size 0x80, align 1 | MPropertyFriendlyName
    ParticleTraceSet_t m_nTraceSet; // offset 0xA90, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nRefCP1; // offset 0xA94, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nRefCP2; // offset 0xA98, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nLerpCP; // offset 0xA9C, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0AA0[0x8]; // offset 0xAA0
    ParticleTraceMissBehavior_t m_nTraceMissBehavior; // offset 0xAA8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bIncludeShotHull; // offset 0xAAC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bIncludeWater; // offset 0xAAD, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0AAE[0x2]; // offset 0xAAE
    bool m_bSetNormal; // offset 0xAB0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bScaleOffset; // offset 0xAB1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0AB2[0x2]; // offset 0xAB2
    int32 m_nPreserveOffsetCP; // offset 0xAB4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nIgnoreCP; // offset 0xAB8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0ABC[0x4]; // offset 0xABC
};
