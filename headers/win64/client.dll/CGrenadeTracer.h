#pragma once

class CGrenadeTracer : public C_BaseModelEntity /*0x0*/  // sizeof 0x1530, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x10B0]; // offset 0x0
    float32 m_flTracerDuration; // offset 0x10B0, size 0x4, align 4
    GrenadeType_t m_nType; // offset 0x10B4, size 0x4, align 4
    char _pad_10B8[0x478]; // offset 0x10B8
};
