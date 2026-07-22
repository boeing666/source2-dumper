#pragma once

class CMotorController  // sizeof 0x20, align 0xFF [vtable trivial_dtor] (server)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    float32 m_speed; // offset 0x8, size 0x4, align 4
    float32 m_maxTorque; // offset 0xC, size 0x4, align 4
    VectorWS m_axis; // offset 0x10, size 0xC, align 4
    float32 m_inertiaFactor; // offset 0x1C, size 0x4, align 4
};
