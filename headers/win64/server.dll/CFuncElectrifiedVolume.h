#pragma once

class CFuncElectrifiedVolume : public CFuncBrush /*0x0*/  // sizeof 0x8B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    CUtlSymbolLarge m_EffectName; // offset 0x878, size 0x8, align 8
    CUtlSymbolLarge m_EffectInterpenetrateName; // offset 0x880, size 0x8, align 8
    CUtlSymbolLarge m_EffectZapName; // offset 0x888, size 0x8, align 8
    CUtlSymbolLarge m_iszEffectSource; // offset 0x890, size 0x8, align 8
    char _pad_0898[0x18]; // offset 0x898
};
