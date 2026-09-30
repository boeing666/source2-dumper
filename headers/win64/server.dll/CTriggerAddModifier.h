#pragma once

class CTriggerAddModifier : public CBaseTrigger /*0x0*/  // sizeof 0xA00, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9F0]; // offset 0x0
    CUtlSymbolLarge m_strModifier; // offset 0x9F0, size 0x8, align 8
    float32 m_flDuration; // offset 0x9F8, size 0x4, align 4
    bool m_bMomentary; // offset 0x9FC, size 0x1, align 1
    char _pad_09FD[0x3]; // offset 0x9FD
};
