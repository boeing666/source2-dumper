#pragma once

struct CavernCrawlRoom_t  // sizeof 0x18, align 0xFF [trivial_ctor trivial_dtor] (client)
{
    Vector2D m_vecPosition; // offset 0x0, size 0x8, align 4
    char* m_pCSSClass; // offset 0x8, size 0x8, align 8
    float32 m_flRoomRadius; // offset 0x10, size 0x4, align 4
    bool m_bAlwaysVisible; // offset 0x14, size 0x1, align 1
    bool m_bStartingRoom; // offset 0x15, size 0x1, align 1
    bool m_bFinalTreasure; // offset 0x16, size 0x1, align 1
    char _pad_0017[0x1]; // offset 0x17
};
