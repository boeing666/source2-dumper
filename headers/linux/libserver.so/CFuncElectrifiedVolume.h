#pragma once

class CFuncElectrifiedVolume : public CFuncBrush /*0x0*/  // sizeof 0xBF0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBB8]; // offset 0x0
    CUtlSymbolLarge m_EffectName; // offset 0xBB8, size 0x8, align 8
    CUtlSymbolLarge m_EffectInterpenetrateName; // offset 0xBC0, size 0x8, align 8
    CUtlSymbolLarge m_EffectZapName; // offset 0xBC8, size 0x8, align 8
    CUtlSymbolLarge m_iszEffectSource; // offset 0xBD0, size 0x8, align 8
    char _pad_0BD8[0x18]; // offset 0xBD8
};
