#pragma once

class CGrenadeTracer : public C_BaseModelEntity /*0x0*/  // sizeof 0x1450, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xFC8]; // offset 0x0
    float32 m_flTracerDuration; // offset 0xFC8, size 0x4, align 4
    GrenadeType_t m_nType; // offset 0xFCC, size 0x4, align 4
    char _pad_0FD0[0x480]; // offset 0xFD0
};
