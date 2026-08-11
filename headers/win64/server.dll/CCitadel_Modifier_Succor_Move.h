#pragma once

class CCitadel_Modifier_Succor_Move : public CCitadelModifier /*0x0*/  // sizeof 0xD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    bool m_bHasPulled; // offset 0xD0, size 0x1, align 1
    bool m_bIsPulling; // offset 0xD1, size 0x1, align 1
    char _pad_00D2[0x6]; // offset 0xD2
};
