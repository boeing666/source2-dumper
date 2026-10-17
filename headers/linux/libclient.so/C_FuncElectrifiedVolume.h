#pragma once

class C_FuncElectrifiedVolume : public C_FuncBrush /*0x0*/  // sizeof 0xD18, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD00]; // offset 0x0
    ParticleIndex_t m_nAmbientEffect; // offset 0xD00, size 0x4, align 255 | MNotSaved
    char _pad_0D04[0x4]; // offset 0xD04
    CUtlSymbolLarge m_EffectName; // offset 0xD08, size 0x8, align 8 | MNotSaved
    bool m_bState; // offset 0xD10, size 0x1, align 1 | MNotSaved
    char _pad_0D11[0x7]; // offset 0xD11
};
