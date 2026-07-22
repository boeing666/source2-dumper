#pragma once

class TimedEvent  // sizeof 0x8, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
public:
    float32 m_TimeBetweenEvents; // offset 0x0, size 0x4, align 4
    float32 m_fNextEvent; // offset 0x4, size 0x4, align 4
};
