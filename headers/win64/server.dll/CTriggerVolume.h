#pragma once

class CTriggerVolume : public CBaseModelEntity /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CUtlSymbolLarge m_iFilterName; // offset 0x780, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0x788, size 0x4, align 4
    char _pad_078C[0x4]; // offset 0x78C
};
