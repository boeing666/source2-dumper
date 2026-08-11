#pragma once

class CCitadel_Modifier_Magic_Clarity_Buff : public CCitadelModifier /*0x0*/  // sizeof 0x2E0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x250]; // offset 0x0
    uint64 m_iAbilityID; // offset 0x250, size 0x8, align 8
    char _pad_0258[0x80]; // offset 0x258
    bool m_bAbilityLocked; // offset 0x2D8, size 0x1, align 1
    char _pad_02D9[0x7]; // offset 0x2D9
};
