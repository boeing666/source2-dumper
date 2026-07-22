#pragma once

class C_BaseButton : public C_BaseToggle /*0x0*/  // sizeof 0xC20, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    CHandle< C_BaseModelEntity > m_glowEntity; // offset 0xC10, size 0x4, align 4
    bool m_usable; // offset 0xC14, size 0x1, align 1
    char _pad_0C15[0x3]; // offset 0xC15
    CUtlSymbolLarge m_szDisplayText; // offset 0xC18, size 0x8, align 8
};
