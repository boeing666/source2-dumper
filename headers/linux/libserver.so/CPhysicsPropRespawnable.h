#pragma once

class CPhysicsPropRespawnable : public CPhysicsProp /*0x0*/  // sizeof 0xE60, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xE2C]; // offset 0x0
    VectorWS m_vOriginalSpawnOrigin; // offset 0xE2C, size 0xC, align 4
    QAngle m_vOriginalSpawnAngles; // offset 0xE38, size 0xC, align 4
    Vector m_vOriginalMins; // offset 0xE44, size 0xC, align 4
    Vector m_vOriginalMaxs; // offset 0xE50, size 0xC, align 4
    float32 m_flRespawnDuration; // offset 0xE5C, size 0x4, align 4
};
