#pragma once

class CTriggerVolume : public CBaseModelEntity /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x850]; // offset 0x0
    CUtlSymbolLarge m_iFilterName; // offset 0x850, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0x858, size 0x4, align 4
    char _pad_085C[0x4]; // offset 0x85C
};
