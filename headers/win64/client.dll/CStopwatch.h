#pragma once

class CStopwatch : public CStopwatchBase /*0x0*/  // sizeof 0x10, align 0xFF [trivial_dtor] (client)
{
public:
    char _pad_0000[0xC]; // offset 0x0
    float32 m_flInterval; // offset 0xC, size 0x4, align 4
};
