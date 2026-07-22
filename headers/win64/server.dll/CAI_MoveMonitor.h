#pragma once

class CAI_MoveMonitor  // sizeof 0x10, align 0xFF [trivial_dtor] (server)
{
public:
    VectorWS m_vMark; // offset 0x0, size 0xC, align 4
    float32 m_flMarkTolerance; // offset 0xC, size 0x4, align 4
};
