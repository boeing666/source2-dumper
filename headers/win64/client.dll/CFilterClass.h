#pragma once

class CFilterClass : public CBaseFilter /*0x0*/  // sizeof 0x638, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x628]; // offset 0x0
    CUtlSymbolLarge m_iFilterClass; // offset 0x628, size 0x8, align 8
    bool m_bMatchSubclass; // offset 0x630, size 0x1, align 1
    char _pad_0631[0x7]; // offset 0x631
};
