#pragma once

class CFilterMultiple : public CBaseFilter /*0x0*/  // sizeof 0x830, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x7B0]; // offset 0x0
    filter_t m_nFilterType; // offset 0x7B0, size 0x4, align 4
    char _pad_07B4[0x4]; // offset 0x7B4
    CUtlSymbolLarge[10] m_iFilterName; // offset 0x7B8, size 0x50, align 8
    CHandle< C_BaseEntity >[10] m_hFilter; // offset 0x808, size 0x28, align 4
};
