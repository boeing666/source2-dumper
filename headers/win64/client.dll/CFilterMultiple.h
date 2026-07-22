#pragma once

class CFilterMultiple : public CBaseFilter /*0x0*/  // sizeof 0x6B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x638]; // offset 0x0
    filter_t m_nFilterType; // offset 0x638, size 0x4, align 4
    char _pad_063C[0x4]; // offset 0x63C
    CUtlSymbolLarge[10] m_iFilterName; // offset 0x640, size 0x50, align 8
    CHandle< C_BaseEntity >[10] m_hFilter; // offset 0x690, size 0x28, align 4
};
