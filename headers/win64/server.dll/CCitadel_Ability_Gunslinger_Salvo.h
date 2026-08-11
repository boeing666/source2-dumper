#pragma once

class CCitadel_Ability_Gunslinger_Salvo : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1080, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF74]; // offset 0x0
    CHandle< CBaseEntity > m_CastTarget; // offset 0xF74, size 0x4, align 4
    int32 m_iCurrentShots; // offset 0xF78, size 0x4, align 4
    int32 m_iTotalShots; // offset 0xF7C, size 0x4, align 4
    char _pad_0F80[0x100]; // offset 0xF80
};
