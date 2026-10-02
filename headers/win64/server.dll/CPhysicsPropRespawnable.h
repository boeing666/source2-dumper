#pragma once

class CPhysicsPropRespawnable : public CPhysicsProp /*0x0*/  // sizeof 0xDF0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xDB0]; // offset 0x0
    VectorWS m_vOriginalSpawnOrigin; // offset 0xDB0, size 0xC, align 4
    QAngle m_vOriginalSpawnAngles; // offset 0xDBC, size 0xC, align 4
    Vector m_vOriginalMins; // offset 0xDC8, size 0xC, align 4
    Vector m_vOriginalMaxs; // offset 0xDD4, size 0xC, align 4
    float32 m_flRespawnDuration; // offset 0xDE0, size 0x4, align 4
    char _pad_0DE4[0xC]; // offset 0xDE4
};
