#pragma once

class CFuncElectrifiedVolume : public CFuncBrush /*0x0*/  // sizeof 0xB80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB48]; // offset 0x0
    CUtlSymbolLarge m_EffectName; // offset 0xB48, size 0x8, align 8
    CUtlSymbolLarge m_EffectInterpenetrateName; // offset 0xB50, size 0x8, align 8
    CUtlSymbolLarge m_EffectZapName; // offset 0xB58, size 0x8, align 8
    CUtlSymbolLarge m_iszEffectSource; // offset 0xB60, size 0x8, align 8
    char _pad_0B68[0x18]; // offset 0xB68
};
