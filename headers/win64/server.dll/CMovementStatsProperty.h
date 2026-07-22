#pragma once

class CMovementStatsProperty  // sizeof 0x40, align 0xFF [vtable trivial_dtor] (server)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int32 m_nUseCounter; // offset 0x10, size 0x4, align 4
    CVectorExponentialMovingAverage m_emaMovementDirection; // offset 0x14, size 0x2C, align 255
};
