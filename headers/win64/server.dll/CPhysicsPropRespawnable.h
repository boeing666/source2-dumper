#pragma once

class CPhysicsPropRespawnable : public CPhysicsProp /*0x0*/  // sizeof 0xC10, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xBD0]; // offset 0x0
    VectorWS m_vOriginalSpawnOrigin; // offset 0xBD0, size 0xC, align 4
    QAngle m_vOriginalSpawnAngles; // offset 0xBDC, size 0xC, align 4
    Vector m_vOriginalMins; // offset 0xBE8, size 0xC, align 4
    Vector m_vOriginalMaxs; // offset 0xBF4, size 0xC, align 4
    float32 m_flRespawnDuration; // offset 0xC00, size 0x4, align 4
    char _pad_0C04[0xC]; // offset 0xC04
};
