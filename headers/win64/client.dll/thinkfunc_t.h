#pragma once

struct thinkfunc_t  // sizeof 0x20, align 0xFF [trivial_dtor] (client)
{
    char _pad_0000[0x8]; // offset 0x0
    HSCRIPT m_hFn; // offset 0x8, size 0x8, align 8 | MNotSaved
    CUtlStringToken m_nContext; // offset 0x10, size 0x4, align 4
    GameTick_t m_nNextThinkTick; // offset 0x14, size 0x4, align 255
    GameTick_t m_nLastThinkTick; // offset 0x18, size 0x4, align 255
    char _pad_001C[0x4]; // offset 0x1C
};
