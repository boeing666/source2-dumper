#pragma once

class C_BaseButton : public C_BaseToggle /*0x0*/  // sizeof 0x1030, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1020]; // offset 0x0
    CHandle< C_BaseModelEntity > m_glowEntity; // offset 0x1020, size 0x4, align 4
    bool m_usable; // offset 0x1024, size 0x1, align 1
    char _pad_1025[0x3]; // offset 0x1025
    CUtlSymbolLarge m_szDisplayText; // offset 0x1028, size 0x8, align 8
};
