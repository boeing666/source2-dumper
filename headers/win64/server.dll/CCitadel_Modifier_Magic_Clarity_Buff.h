#pragma once

class CCitadel_Modifier_Magic_Clarity_Buff : public CCitadelModifier /*0x0*/  // sizeof 0x418, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x358]; // offset 0x0
    uint64 m_iAbilityID; // offset 0x358, size 0x8, align 8
    char _pad_0360[0xB0]; // offset 0x360
    bool m_bAbilityLocked; // offset 0x410, size 0x1, align 1
    char _pad_0411[0x7]; // offset 0x411
};
