#pragma once

class CPathfindRandomData  // sizeof 0x14, align 0xFF [trivial_dtor] (server)
{
public:
    VectorWS m_vCenter; // offset 0x0, size 0xC, align 4
    float32 m_flMinRadius; // offset 0xC, size 0x4, align 4
    float32 m_flMaxRadius; // offset 0x10, size 0x4, align 4
};
