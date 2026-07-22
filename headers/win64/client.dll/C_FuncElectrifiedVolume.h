#pragma once

class C_FuncElectrifiedVolume : public C_FuncBrush /*0x0*/  // sizeof 0xFC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xFB0]; // offset 0x0
    ParticleIndex_t m_nAmbientEffect; // offset 0xFB0, size 0x4, align 255 | MNotSaved
    char _pad_0FB4[0x4]; // offset 0xFB4
    CUtlSymbolLarge m_EffectName; // offset 0xFB8, size 0x8, align 8 | MNotSaved
    bool m_bState; // offset 0xFC0, size 0x1, align 1 | MNotSaved
    char _pad_0FC1[0x7]; // offset 0xFC1
};
