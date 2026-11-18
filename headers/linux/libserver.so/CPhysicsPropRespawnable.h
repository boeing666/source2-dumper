#pragma once

class CPhysicsPropRespawnable : public CPhysicsProp /*0x0*/  // sizeof 0xEE0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xEAC]; // offset 0x0
    VectorWS m_vOriginalSpawnOrigin; // offset 0xEAC, size 0xC, align 4
    QAngle m_vOriginalSpawnAngles; // offset 0xEB8, size 0xC, align 4
    Vector m_vOriginalMins; // offset 0xEC4, size 0xC, align 4
    Vector m_vOriginalMaxs; // offset 0xED0, size 0xC, align 4
    float32 m_flRespawnDuration; // offset 0xEDC, size 0x4, align 4
};
