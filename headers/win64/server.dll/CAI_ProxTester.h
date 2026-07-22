#pragma once

class CAI_ProxTester  // sizeof 0x8, align 0xFF [trivial_dtor] (server)
{
public:
    float32 m_distSq; // offset 0x0, size 0x4, align 4
    bool m_fInside; // offset 0x4, size 0x1, align 1
    char _pad_0005[0x3]; // offset 0x5
};
