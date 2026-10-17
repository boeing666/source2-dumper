#pragma once

class C_FuncElectrifiedVolume : public C_FuncBrush /*0x0*/  // sizeof 0xB90, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xB78]; // offset 0x0
    ParticleIndex_t m_nAmbientEffect; // offset 0xB78, size 0x4, align 255 | MNotSaved
    char _pad_0B7C[0x4]; // offset 0xB7C
    CUtlSymbolLarge m_EffectName; // offset 0xB80, size 0x8, align 8 | MNotSaved
    bool m_bState; // offset 0xB88, size 0x1, align 1 | MNotSaved
    char _pad_0B89[0x7]; // offset 0xB89
};
