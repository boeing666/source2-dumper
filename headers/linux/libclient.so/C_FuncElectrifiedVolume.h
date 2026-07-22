#pragma once

class C_FuncElectrifiedVolume : public C_FuncBrush /*0x0*/  // sizeof 0xC28, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    ParticleIndex_t m_nAmbientEffect; // offset 0xC10, size 0x4, align 255 | MNotSaved
    char _pad_0C14[0x4]; // offset 0xC14
    CUtlSymbolLarge m_EffectName; // offset 0xC18, size 0x8, align 8 | MNotSaved
    bool m_bState; // offset 0xC20, size 0x1, align 1 | MNotSaved
    char _pad_0C21[0x7]; // offset 0xC21
};
