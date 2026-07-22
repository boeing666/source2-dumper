#pragma once

class C_SoundAreaEntityBase : public C_BaseEntity /*0x0*/  // sizeof 0x790, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    bool m_bDisabled; // offset 0x76C, size 0x1, align 1
    char _pad_076D[0x7]; // offset 0x76D
    bool m_bWasEnabled; // offset 0x774, size 0x1, align 1 | MNotSaved
    char _pad_0775[0x3]; // offset 0x775
    CUtlSymbolLarge m_iszSoundAreaType; // offset 0x778, size 0x8, align 8
    Vector m_vPos; // offset 0x780, size 0xC, align 4
    char _pad_078C[0x4]; // offset 0x78C
};
