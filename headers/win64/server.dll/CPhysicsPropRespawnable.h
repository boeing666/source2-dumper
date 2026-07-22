#pragma once

class CPhysicsPropRespawnable : public CPhysicsProp /*0x0*/  // sizeof 0xAB0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA70]; // offset 0x0
    VectorWS m_vOriginalSpawnOrigin; // offset 0xA70, size 0xC, align 4
    QAngle m_vOriginalSpawnAngles; // offset 0xA7C, size 0xC, align 4
    Vector m_vOriginalMins; // offset 0xA88, size 0xC, align 4
    Vector m_vOriginalMaxs; // offset 0xA94, size 0xC, align 4
    float32 m_flRespawnDuration; // offset 0xAA0, size 0x4, align 4
    char _pad_0AA4[0xC]; // offset 0xAA4
};
