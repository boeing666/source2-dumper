#pragma once

class CFuncElectrifiedVolume : public CFuncBrush /*0x0*/  // sizeof 0x7D8, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0x7A0]; // offset 0x0
    CUtlSymbolLarge m_EffectName; // offset 0x7A0, size 0x8, align 8 | MNetworkEnable
    CUtlSymbolLarge m_EffectInterpenetrateName; // offset 0x7A8, size 0x8, align 8
    CUtlSymbolLarge m_EffectZapName; // offset 0x7B0, size 0x8, align 8
    CUtlSymbolLarge m_iszEffectSource; // offset 0x7B8, size 0x8, align 8
    char _pad_07C0[0x18]; // offset 0x7C0
};
