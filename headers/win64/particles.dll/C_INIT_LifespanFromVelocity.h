#pragma once

class C_INIT_LifespanFromVelocity : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x2A0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    Vector m_vecComponentScale; // offset 0x1E8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    float32 m_flTraceOffset; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxTraceLength; // offset 0x1F8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTraceTolerance; // offset 0x1FC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nMaxPlanes; // offset 0x200, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0204[0x4]; // offset 0x204
    char[128] m_CollisionGroupName; // offset 0x208, size 0x80, align 1 | MPropertyFriendlyName
    ParticleTraceSet_t m_nTraceSet; // offset 0x288, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_028C[0xC]; // offset 0x28C
    bool m_bIncludeWater; // offset 0x298, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0299[0x7]; // offset 0x299
};
