#pragma once

class CCitadel_Ability_Gunslinger_Salvo : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1610, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A4]; // offset 0x0
    CHandle< CBaseEntity > m_CastTarget; // offset 0x14A4, size 0x4, align 4
    int32 m_iCurrentShots; // offset 0x14A8, size 0x4, align 4
    int32 m_iTotalShots; // offset 0x14AC, size 0x4, align 4
    char _pad_14B0[0x160]; // offset 0x14B0
};
