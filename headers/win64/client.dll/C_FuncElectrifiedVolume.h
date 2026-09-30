#pragma once

class C_FuncElectrifiedVolume : public C_FuncBrush /*0x0*/  // sizeof 0xBC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    ParticleIndex_t m_nAmbientEffect; // offset 0xBB0, size 0x4, align 255 | MNotSaved
    char _pad_0BB4[0x4]; // offset 0xBB4
    CUtlSymbolLarge m_EffectName; // offset 0xBB8, size 0x8, align 8 | MNotSaved
    bool m_bState; // offset 0xBC0, size 0x1, align 1 | MNotSaved
    char _pad_0BC1[0x7]; // offset 0xBC1
};
