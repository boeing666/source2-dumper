#pragma once

class CFilterClass : public CBaseFilter /*0x0*/  // sizeof 0x640, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x638]; // offset 0x0
    CUtlSymbolLarge m_iFilterClass; // offset 0x638, size 0x8, align 8
};
