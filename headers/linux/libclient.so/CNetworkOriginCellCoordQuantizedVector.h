#pragma once

class CNetworkOriginCellCoordQuantizedVector  // sizeof 0x30, align 0xFF [trivial_dtor] (client)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    uint16 m_cellX; // offset 0x10, size 0x2, align 2
    uint16 m_cellY; // offset 0x12, size 0x2, align 2
    uint16 m_cellZ; // offset 0x14, size 0x2, align 2
    uint16 m_nOutsideWorld; // offset 0x16, size 0x2, align 2
    CNetworkedQuantizedFloat m_vecX; // offset 0x18, size 0x8, align 4
    CNetworkedQuantizedFloat m_vecY; // offset 0x20, size 0x8, align 4
    CNetworkedQuantizedFloat m_vecZ; // offset 0x28, size 0x8, align 4
};
