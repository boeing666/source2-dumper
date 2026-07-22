#pragma once

class CPhysicsPropRespawnable : public CPhysicsProp /*0x0*/  // sizeof 0xD70, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD34]; // offset 0x0
    VectorWS m_vOriginalSpawnOrigin; // offset 0xD34, size 0xC, align 4
    QAngle m_vOriginalSpawnAngles; // offset 0xD40, size 0xC, align 4
    Vector m_vOriginalMins; // offset 0xD4C, size 0xC, align 4
    Vector m_vOriginalMaxs; // offset 0xD58, size 0xC, align 4
    float32 m_flRespawnDuration; // offset 0xD64, size 0x4, align 4
    char _pad_0D68[0x8]; // offset 0xD68
};
