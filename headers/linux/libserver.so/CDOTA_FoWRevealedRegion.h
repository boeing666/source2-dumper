#pragma once

class CDOTA_FoWRevealedRegion  // sizeof 0x48, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    float32 m_flMinX; // offset 0x30, size 0x4, align 4
    float32 m_flMinY; // offset 0x34, size 0x4, align 4
    float32 m_flMaxX; // offset 0x38, size 0x4, align 4
    float32 m_flMaxY; // offset 0x3C, size 0x4, align 4
    int32 m_nRegionID; // offset 0x40, size 0x4, align 4
    char _pad_0044[0x4]; // offset 0x44
};
