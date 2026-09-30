#pragma once

class CCitadel_Ability_Fealty : public CCitadelBaseAbility /*0x0*/  // sizeof 0x14A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x14A0, size 0x4, align 4
    char _pad_14A4[0x4]; // offset 0x14A4
};
