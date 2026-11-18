#pragma once

class CTriggerVolume : public CBaseModelEntity /*0x0*/  // sizeof 0xBB0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBA0]; // offset 0x0
    CUtlSymbolLarge m_iFilterName; // offset 0xBA0, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0xBA8, size 0x4, align 4
    char _pad_0BAC[0x4]; // offset 0xBAC
};
