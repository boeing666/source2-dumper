#pragma once

class STrooperFOWEntity  // sizeof 0x38, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    uint8 m_nPosX; // offset 0x30, size 0x1, align 1
    uint8 m_nPosY; // offset 0x31, size 0x1, align 1
    uint8 m_nFlags; // offset 0x32, size 0x1, align 1
    char _pad_0033[0x5]; // offset 0x33
};
