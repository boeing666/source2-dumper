#pragma once

class CFilterClass : public CBaseFilter /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x7A0]; // offset 0x0
    CUtlSymbolLarge m_iFilterClass; // offset 0x7A0, size 0x8, align 8
    bool m_bMatchSubclass; // offset 0x7A8, size 0x1, align 1
    char _pad_07A9[0x7]; // offset 0x7A9
};
