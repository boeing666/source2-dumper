#pragma once

class CPhysicsPropRespawnable : public CPhysicsProp /*0x0*/  // sizeof 0xDA0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD60]; // offset 0x0
    VectorWS m_vOriginalSpawnOrigin; // offset 0xD60, size 0xC, align 4
    QAngle m_vOriginalSpawnAngles; // offset 0xD6C, size 0xC, align 4
    Vector m_vOriginalMins; // offset 0xD78, size 0xC, align 4
    Vector m_vOriginalMaxs; // offset 0xD84, size 0xC, align 4
    float32 m_flRespawnDuration; // offset 0xD90, size 0x4, align 4
    char _pad_0D94[0xC]; // offset 0xD94
};
