#pragma once

class CPhysicsPropRespawnable : public CPhysicsProp /*0x0*/  // sizeof 0xC70, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC30]; // offset 0x0
    VectorWS m_vOriginalSpawnOrigin; // offset 0xC30, size 0xC, align 4
    QAngle m_vOriginalSpawnAngles; // offset 0xC3C, size 0xC, align 4
    Vector m_vOriginalMins; // offset 0xC48, size 0xC, align 4
    Vector m_vOriginalMaxs; // offset 0xC54, size 0xC, align 4
    float32 m_flRespawnDuration; // offset 0xC60, size 0x4, align 4
    char _pad_0C64[0xC]; // offset 0xC64
};
