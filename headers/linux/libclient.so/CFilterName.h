#pragma once

class CFilterName : public CBaseFilter /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x7A0]; // offset 0x0
    CUtlSymbolLarge m_iFilterName; // offset 0x7A0, size 0x8, align 8
};
