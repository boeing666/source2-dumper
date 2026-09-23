#pragma once

class CTriggerVolume : public CBaseModelEntity /*0x0*/  // sizeof 0xB40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB30]; // offset 0x0
    CUtlSymbolLarge m_iFilterName; // offset 0xB30, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0xB38, size 0x4, align 4
    char _pad_0B3C[0x4]; // offset 0xB3C
};
