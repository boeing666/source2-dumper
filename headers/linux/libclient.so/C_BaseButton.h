#pragma once

class C_BaseButton : public C_BaseToggle /*0x0*/  // sizeof 0xD78, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD68]; // offset 0x0
    CHandle< C_BaseModelEntity > m_glowEntity; // offset 0xD68, size 0x4, align 4
    bool m_usable; // offset 0xD6C, size 0x1, align 1
    char _pad_0D6D[0x3]; // offset 0xD6D
    CUtlSymbolLarge m_szDisplayText; // offset 0xD70, size 0x8, align 8
};
