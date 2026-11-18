#pragma once

class C_FuncElectrifiedVolume : public C_FuncBrush /*0x0*/  // sizeof 0xBF0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBD8]; // offset 0x0
    ParticleIndex_t m_nAmbientEffect; // offset 0xBD8, size 0x4, align 255 | MNotSaved
    char _pad_0BDC[0x4]; // offset 0xBDC
    CUtlSymbolLarge m_EffectName; // offset 0xBE0, size 0x8, align 8 | MNotSaved
    bool m_bState; // offset 0xBE8, size 0x1, align 1 | MNotSaved
    char _pad_0BE9[0x7]; // offset 0xBE9
};
