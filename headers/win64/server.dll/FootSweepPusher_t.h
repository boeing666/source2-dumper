#pragma once

struct FootSweepPusher_t  // sizeof 0x14, align 0xFF [trivial_dtor] (server)
{
    VectorWS m_vC; // offset 0x0, size 0xC, align 4
    float32 m_flR; // offset 0xC, size 0x4, align 4
    bool m_bIsForward; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x3]; // offset 0x11
};
