#pragma once

class CCitadel_Modifier_ShivDash : public CCitadelModifier /*0x0*/  // sizeof 0x200, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1F8]; // offset 0x0
    bool m_bUseTrail; // offset 0x1F8, size 0x1, align 1
    bool m_bUseEchoEffect; // offset 0x1F9, size 0x1, align 1
    char _pad_01FA[0x6]; // offset 0x1FA
};
