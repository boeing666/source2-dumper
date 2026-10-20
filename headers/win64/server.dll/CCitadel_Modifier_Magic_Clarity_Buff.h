#pragma once

class CCitadel_Modifier_Magic_Clarity_Buff : public CCitadelModifier /*0x0*/  // sizeof 0x420, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x360]; // offset 0x0
    uint64 m_iAbilityID; // offset 0x360, size 0x8, align 8
    char _pad_0368[0xB0]; // offset 0x368
    bool m_bAbilityLocked; // offset 0x418, size 0x1, align 1
    char _pad_0419[0x7]; // offset 0x419
};
