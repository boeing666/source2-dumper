#pragma once

class C_BaseButton : public C_BaseToggle /*0x0*/  // sizeof 0xB88, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xB78]; // offset 0x0
    CHandle< C_BaseModelEntity > m_glowEntity; // offset 0xB78, size 0x4, align 4
    bool m_usable; // offset 0xB7C, size 0x1, align 1
    char _pad_0B7D[0x3]; // offset 0xB7D
    CUtlSymbolLarge m_szDisplayText; // offset 0xB80, size 0x8, align 8
};
