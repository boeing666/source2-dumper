#pragma once

class CTriggerVolume : public CBaseModelEntity /*0x0*/  // sizeof 0xA60, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA50]; // offset 0x0
    CUtlSymbolLarge m_iFilterName; // offset 0xA50, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0xA58, size 0x4, align 4
    char _pad_0A5C[0x4]; // offset 0xA5C
};
