#pragma once

class CCitadel_Modifier_CounterspellWatcher : public CCitadel_Modifier_Intrinsic_Base /*0x0*/  // sizeof 0x348, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    bool m_bSpellBlockActivated; // offset 0x130, size 0x1, align 1
    bool m_bSpellBlocked; // offset 0x131, size 0x1, align 1
    char _pad_0132[0x216]; // offset 0x132
};
