#pragma once

class C_FuncElectrifiedVolume : public C_FuncBrush /*0x0*/  // sizeof 0xF50, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF38]; // offset 0x0
    ParticleIndex_t m_nAmbientEffect; // offset 0xF38, size 0x4, align 255 | MNotSaved
    char _pad_0F3C[0x4]; // offset 0xF3C
    CUtlSymbolLarge m_EffectName; // offset 0xF40, size 0x8, align 8 | MNotSaved
    bool m_bState; // offset 0xF48, size 0x1, align 1 | MNotSaved
    char _pad_0F49[0x7]; // offset 0xF49
};
