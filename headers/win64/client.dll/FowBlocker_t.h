#pragma once

struct FowBlocker_t  // sizeof 0x48, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    float32 m_flMinX; // offset 0x30, size 0x4, align 4
    float32 m_flMaxX; // offset 0x34, size 0x4, align 4
    float32 m_flMinY; // offset 0x38, size 0x4, align 4
    float32 m_flMaxY; // offset 0x3C, size 0x4, align 4
    FowBlockerShape_t m_fowBlockerShape; // offset 0x40, size 0x4, align 4
    bool m_bClearRegion; // offset 0x44, size 0x1, align 1
    char _pad_0045[0x3]; // offset 0x45
};
