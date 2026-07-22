#pragma once

class CPathfindInDirectionData  // sizeof 0x10, align 0xFF [trivial_dtor] (server)
{
public:
    Vector m_vGoalDir; // offset 0x0, size 0xC, align 4
    float32 m_flMinPathLength; // offset 0xC, size 0x4, align 4
};
