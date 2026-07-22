#pragma once

class CSoundEnvelope  // sizeof 0x10, align 0xFF [trivial_dtor] (client)
{
public:
    float32 m_current; // offset 0x0, size 0x4, align 4
    float32 m_target; // offset 0x4, size 0x4, align 4
    float32 m_rate; // offset 0x8, size 0x4, align 4
    bool m_forceupdate; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
};
