#pragma once

class CCitadel_Modifier_CounterspellWatcher : public CCitadel_Modifier_Intrinsic_Base /*0x0*/  // sizeof 0x350, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    bool m_bSpellBlockActivated; // offset 0x138, size 0x1, align 1
    bool m_bSpellBlocked; // offset 0x139, size 0x1, align 1
    char _pad_013A[0x216]; // offset 0x13A
};
