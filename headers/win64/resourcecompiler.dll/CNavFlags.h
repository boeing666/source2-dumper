#pragma once

class CNavFlags  // sizeof 0x8, align 0xFF [trivial_dtor] (navlib)
{
public:
    uint64 m_Flags; // offset 0x0, size 0x8, align 8
};
