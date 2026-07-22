#pragma once

class C_SoundAreaEntityBase : public C_BaseEntity /*0x0*/  // sizeof 0x628, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    bool m_bDisabled; // offset 0x600, size 0x1, align 1
    char _pad_0601[0x7]; // offset 0x601
    bool m_bWasEnabled; // offset 0x608, size 0x1, align 1 | MNotSaved
    char _pad_0609[0x7]; // offset 0x609
    CUtlSymbolLarge m_iszSoundAreaType; // offset 0x610, size 0x8, align 8
    Vector m_vPos; // offset 0x618, size 0xC, align 4
    char _pad_0624[0x4]; // offset 0x624
};
