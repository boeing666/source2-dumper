#pragma once

class CFuncElectrifiedVolume : public CFuncBrush /*0x0*/  // sizeof 0x910, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8D8]; // offset 0x0
    CUtlSymbolLarge m_EffectName; // offset 0x8D8, size 0x8, align 8
    CUtlSymbolLarge m_EffectInterpenetrateName; // offset 0x8E0, size 0x8, align 8
    CUtlSymbolLarge m_EffectZapName; // offset 0x8E8, size 0x8, align 8
    CUtlSymbolLarge m_iszEffectSource; // offset 0x8F0, size 0x8, align 8
    char _pad_08F8[0x18]; // offset 0x8F8
};
