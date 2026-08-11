#pragma once

class CCitadel_Modifier_CatapultStun : public CCitadel_Modifier_Knockdown /*0x0*/  // sizeof 0x100, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xF8]; // offset 0x0
    bool m_bLanded; // offset 0xF8, size 0x1, align 1
    char _pad_00F9[0x7]; // offset 0xF9
};
