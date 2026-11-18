#pragma once

class CDOTA_FoWRevealedRegion  // sizeof 0x40, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    float32 m_flMinX; // offset 0x30, size 0x4, align 4
    float32 m_flMinY; // offset 0x34, size 0x4, align 4
    float32 m_flMaxX; // offset 0x38, size 0x4, align 4
    float32 m_flMaxY; // offset 0x3C, size 0x4, align 4
};
