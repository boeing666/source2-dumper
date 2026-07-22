#pragma once

class CTriggerAddModifier : public CBaseTrigger /*0x0*/  // sizeof 0x8F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    CUtlSymbolLarge m_strModifier; // offset 0x8E0, size 0x8, align 8
    float32 m_flDuration; // offset 0x8E8, size 0x4, align 4
    bool m_bMomentary; // offset 0x8EC, size 0x1, align 1
    char _pad_08ED[0x3]; // offset 0x8ED
};
