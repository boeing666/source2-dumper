#pragma once

class C_OP_SetControlPointToImpactPoint : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x410, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    int32 m_nCPOut; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPIn; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flUpdateRate; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01F4[0x4]; // offset 0x1F4
    CParticleCollectionFloatInput m_flTraceLength; // offset 0x1F8, size 0x178, align 8 | MPropertyFriendlyName
    float32 m_flStartOffset; // offset 0x370, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOffset; // offset 0x374, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecTraceDir; // offset 0x378, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    char[128] m_CollisionGroupName; // offset 0x384, size 0x80, align 1 | MPropertyFriendlyName
    ParticleTraceSet_t m_nTraceSet; // offset 0x404, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bSetToEndpoint; // offset 0x408, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bTraceToClosestSurface; // offset 0x409, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bIncludeWater; // offset 0x40A, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_040B[0x5]; // offset 0x40B
};
