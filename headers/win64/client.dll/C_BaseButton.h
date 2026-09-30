#pragma once

class C_BaseButton : public C_BaseToggle /*0x0*/  // sizeof 0xBC0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    CHandle< C_BaseModelEntity > m_glowEntity; // offset 0xBB0, size 0x4, align 4
    bool m_usable; // offset 0xBB4, size 0x1, align 1
    char _pad_0BB5[0x3]; // offset 0xBB5
    CUtlSymbolLarge m_szDisplayText; // offset 0xBB8, size 0x8, align 8
};
