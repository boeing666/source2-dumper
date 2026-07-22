#pragma once

struct CavernCrawlPath_t  // sizeof 0x18, align 0xFF [trivial_dtor] (client)
{
    CavernCrawlRoomID_t m_nStartingRoomID; // offset 0x0, size 0x1, align 255
    CavernCrawlRoomID_t m_nEndingRoomID; // offset 0x1, size 0x1, align 255
    char _pad_0002[0x6]; // offset 0x2
    char* m_pCSSClass; // offset 0x8, size 0x8, align 8
    bool m_bCannotBeSwapped; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x7]; // offset 0x11
};
