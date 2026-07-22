#pragma once

class C_OP_SetControlPointToImpactPoint : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x3E8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    int32 m_nCPOut; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPIn; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flUpdateRate; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flTraceLength; // offset 0x1E0, size 0x168, align 8 | MPropertyFriendlyName
    float32 m_flStartOffset; // offset 0x348, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOffset; // offset 0x34C, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecTraceDir; // offset 0x350, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    char[128] m_CollisionGroupName; // offset 0x35C, size 0x80, align 1 | MPropertyFriendlyName
    ParticleTraceSet_t m_nTraceSet; // offset 0x3DC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bSetToEndpoint; // offset 0x3E0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bTraceToClosestSurface; // offset 0x3E1, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bIncludeWater; // offset 0x3E2, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_03E3[0x5]; // offset 0x3E3
};
