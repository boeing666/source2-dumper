#pragma once

class CGrenadeTracer : public C_BaseModelEntity /*0x0*/  // sizeof 0x14C0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1038]; // offset 0x0
    float32 m_flTracerDuration; // offset 0x1038, size 0x4, align 4
    GrenadeType_t m_nType; // offset 0x103C, size 0x4, align 4
    char _pad_1040[0x480]; // offset 0x1040
};
