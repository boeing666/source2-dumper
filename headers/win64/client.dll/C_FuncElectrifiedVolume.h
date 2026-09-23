#pragma once

class C_FuncElectrifiedVolume : public C_FuncBrush /*0x0*/  // sizeof 0x10B0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    ParticleIndex_t m_nAmbientEffect; // offset 0x1098, size 0x4, align 255 | MNotSaved
    char _pad_109C[0x4]; // offset 0x109C
    CUtlSymbolLarge m_EffectName; // offset 0x10A0, size 0x8, align 8 | MNotSaved
    bool m_bState; // offset 0x10A8, size 0x1, align 1 | MNotSaved
    char _pad_10A9[0x7]; // offset 0x10A9
};
