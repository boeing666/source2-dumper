#pragma once

class C_INIT_LifespanFromVelocity : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x298, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    Vector m_vecComponentScale; // offset 0x1E0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    float32 m_flTraceOffset; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxTraceLength; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTraceTolerance; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nMaxPlanes; // offset 0x1F8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01FC[0x4]; // offset 0x1FC
    char[128] m_CollisionGroupName; // offset 0x200, size 0x80, align 1 | MPropertyFriendlyName
    ParticleTraceSet_t m_nTraceSet; // offset 0x280, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0284[0xC]; // offset 0x284
    bool m_bIncludeWater; // offset 0x290, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0291[0x7]; // offset 0x291
};
