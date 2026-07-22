#pragma once

class C_FuncElectrifiedVolume : public C_FuncBrush /*0x0*/  // sizeof 0xAA0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xA88]; // offset 0x0
    ParticleIndex_t m_nAmbientEffect; // offset 0xA88, size 0x4, align 255 | MNotSaved
    char _pad_0A8C[0x4]; // offset 0xA8C
    CUtlSymbolLarge m_EffectName; // offset 0xA90, size 0x8, align 8 | MNotSaved
    bool m_bState; // offset 0xA98, size 0x1, align 1 | MNotSaved
    char _pad_0A99[0x7]; // offset 0xA99
};
