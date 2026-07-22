#pragma once

class C_BaseButton : public C_BaseToggle /*0x0*/  // sizeof 0xA98, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xA88]; // offset 0x0
    CHandle< C_BaseModelEntity > m_glowEntity; // offset 0xA88, size 0x4, align 4
    bool m_usable; // offset 0xA8C, size 0x1, align 1
    char _pad_0A8D[0x3]; // offset 0xA8D
    CUtlSymbolLarge m_szDisplayText; // offset 0xA90, size 0x8, align 8
};
