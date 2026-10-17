#pragma once

class CPhysicsPropRespawnable : public CPhysicsProp /*0x0*/  // sizeof 0xBA0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB60]; // offset 0x0
    VectorWS m_vOriginalSpawnOrigin; // offset 0xB60, size 0xC, align 4
    QAngle m_vOriginalSpawnAngles; // offset 0xB6C, size 0xC, align 4
    Vector m_vOriginalMins; // offset 0xB78, size 0xC, align 4
    Vector m_vOriginalMaxs; // offset 0xB84, size 0xC, align 4
    float32 m_flRespawnDuration; // offset 0xB90, size 0x4, align 4
    char _pad_0B94[0xC]; // offset 0xB94
};
