#pragma once

class CPointGamestatsCounter : public CPointEntity /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CUtlSymbolLarge m_strStatisticName; // offset 0x788, size 0x8, align 8
    bool m_bDisabled; // offset 0x790, size 0x1, align 1
    char _pad_0791[0x7]; // offset 0x791
};
