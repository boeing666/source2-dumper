#pragma once

class CPhysicsPropRespawnable : public CPhysicsProp /*0x0*/  // sizeof 0x1020, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xFE4]; // offset 0x0
    VectorWS m_vOriginalSpawnOrigin; // offset 0xFE4, size 0xC, align 4
    QAngle m_vOriginalSpawnAngles; // offset 0xFF0, size 0xC, align 4
    Vector m_vOriginalMins; // offset 0xFFC, size 0xC, align 4
    Vector m_vOriginalMaxs; // offset 0x1008, size 0xC, align 4
    float32 m_flRespawnDuration; // offset 0x1014, size 0x4, align 4
    char _pad_1018[0x8]; // offset 0x1018
};
