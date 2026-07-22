#pragma once

class C_BaseButton : public C_BaseToggle /*0x0*/  // sizeof 0xF48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF38]; // offset 0x0
    CHandle< C_BaseModelEntity > m_glowEntity; // offset 0xF38, size 0x4, align 4
    bool m_usable; // offset 0xF3C, size 0x1, align 1
    char _pad_0F3D[0x3]; // offset 0xF3D
    CUtlSymbolLarge m_szDisplayText; // offset 0xF40, size 0x8, align 8
};
