#pragma once

class CGrenadeTracer : public C_BaseModelEntity /*0x0*/  // sizeof 0x13D0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xF50]; // offset 0x0
    float32 m_flTracerDuration; // offset 0xF50, size 0x4, align 4
    GrenadeType_t m_nType; // offset 0xF54, size 0x4, align 4
    char _pad_0F58[0x478]; // offset 0xF58
};
