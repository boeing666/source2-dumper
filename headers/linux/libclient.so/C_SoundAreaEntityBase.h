#pragma once

class C_SoundAreaEntityBase : public C_BaseEntity /*0x0*/  // sizeof 0x7A0, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x77C]; // offset 0x0
    bool m_bDisabled; // offset 0x77C, size 0x1, align 1
    char _pad_077D[0x7]; // offset 0x77D
    bool m_bWasEnabled; // offset 0x784, size 0x1, align 1 | MNotSaved
    char _pad_0785[0x3]; // offset 0x785
    CUtlSymbolLarge m_iszSoundAreaType; // offset 0x788, size 0x8, align 8
    Vector m_vPos; // offset 0x790, size 0xC, align 4
    char _pad_079C[0x4]; // offset 0x79C
};
