#pragma once

class CFilterMultiple : public CBaseFilter /*0x0*/  // sizeof 0x558, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4D8]; // offset 0x0
    filter_t m_nFilterType; // offset 0x4D8, size 0x4, align 4
    char _pad_04DC[0x4]; // offset 0x4DC
    CUtlSymbolLarge[10] m_iFilterName; // offset 0x4E0, size 0x50, align 8
    CHandle< CBaseEntity >[10] m_hFilter; // offset 0x530, size 0x28, align 4
};
