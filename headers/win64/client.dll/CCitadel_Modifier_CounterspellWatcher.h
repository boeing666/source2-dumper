#pragma once

class CCitadel_Modifier_CounterspellWatcher : public CCitadel_Modifier_Intrinsic_Base /*0x0*/  // sizeof 0x248, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    bool m_bSpellBlockActivated; // offset 0xC0, size 0x1, align 1
    bool m_bSpellBlocked; // offset 0xC1, size 0x1, align 1
    char _pad_00C2[0x186]; // offset 0xC2
};
