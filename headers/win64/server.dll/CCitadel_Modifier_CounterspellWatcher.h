#pragma once

class CCitadel_Modifier_CounterspellWatcher : public CCitadel_Modifier_Intrinsic_Base /*0x0*/  // sizeof 0x360, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    bool m_bSpellBlockActivated; // offset 0x148, size 0x1, align 1
    bool m_bSpellBlocked; // offset 0x149, size 0x1, align 1
    char _pad_014A[0x216]; // offset 0x14A
};
