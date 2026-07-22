#pragma once

class CCitadel_Ability_Fealty : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x11E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x11D8, size 0x4, align 4
    char _pad_11DC[0x4]; // offset 0x11DC
};
