#pragma once

class CPhysicsPropRespawnable : public CPhysicsProp /*0x0*/  // sizeof 0xF40, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xF04]; // offset 0x0
    VectorWS m_vOriginalSpawnOrigin; // offset 0xF04, size 0xC, align 4
    QAngle m_vOriginalSpawnAngles; // offset 0xF10, size 0xC, align 4
    Vector m_vOriginalMins; // offset 0xF1C, size 0xC, align 4
    Vector m_vOriginalMaxs; // offset 0xF28, size 0xC, align 4
    float32 m_flRespawnDuration; // offset 0xF34, size 0x4, align 4
    char _pad_0F38[0x8]; // offset 0xF38
};
