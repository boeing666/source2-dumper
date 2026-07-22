#pragma once

class TimedEvent  // sizeof 0x8, align 0xFF [trivial_dtor] (client)
{
public:
    float32 m_TimeBetweenEvents; // offset 0x0, size 0x4, align 4
    float32 m_fNextEvent; // offset 0x4, size 0x4, align 4
};
