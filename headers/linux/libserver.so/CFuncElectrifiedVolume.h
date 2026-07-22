#pragma once

class CFuncElectrifiedVolume : public CFuncBrush /*0x0*/  // sizeof 0xAA8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA70]; // offset 0x0
    CUtlSymbolLarge m_EffectName; // offset 0xA70, size 0x8, align 8
    CUtlSymbolLarge m_EffectInterpenetrateName; // offset 0xA78, size 0x8, align 8
    CUtlSymbolLarge m_EffectZapName; // offset 0xA80, size 0x8, align 8
    CUtlSymbolLarge m_iszEffectSource; // offset 0xA88, size 0x8, align 8
    char _pad_0A90[0x18]; // offset 0xA90
};
