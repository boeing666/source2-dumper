#pragma once

class C_BaseButton : public C_BaseToggle /*0x0*/  // sizeof 0x10A8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    CHandle< C_BaseModelEntity > m_glowEntity; // offset 0x1098, size 0x4, align 4
    bool m_usable; // offset 0x109C, size 0x1, align 1
    char _pad_109D[0x3]; // offset 0x109D
    CUtlSymbolLarge m_szDisplayText; // offset 0x10A0, size 0x8, align 8
};
