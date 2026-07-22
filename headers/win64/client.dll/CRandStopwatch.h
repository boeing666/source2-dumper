#pragma once

class CRandStopwatch : public CStopwatchBase /*0x0*/  // sizeof 0x14, align 0xFF [trivial_dtor] (client)
{
public:
    char _pad_0000[0xC]; // offset 0x0
    float32 m_flMinInterval; // offset 0xC, size 0x4, align 4
    float32 m_flMaxInterval; // offset 0x10, size 0x4, align 4
};
