#pragma once

class C_FuncElectrifiedVolume : public C_FuncBrush /*0x0*/  // sizeof 0x9C0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    ParticleIndex_t m_nAmbientEffect; // offset 0x9A8, size 0x4, align 255 | MNotSaved
    char _pad_09AC[0x4]; // offset 0x9AC
    CUtlSymbolLarge m_EffectName; // offset 0x9B0, size 0x8, align 8 | MNetworkEnable MNotSaved
    bool m_bState; // offset 0x9B8, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_09B9[0x7]; // offset 0x9B9
};
