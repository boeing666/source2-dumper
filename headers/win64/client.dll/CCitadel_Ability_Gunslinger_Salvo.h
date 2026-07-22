#pragma once

class CCitadel_Ability_Gunslinger_Salvo : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x12E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11DC]; // offset 0x0
    CHandle< C_BaseEntity > m_CastTarget; // offset 0x11DC, size 0x4, align 4
    int32 m_iCurrentShots; // offset 0x11E0, size 0x4, align 4
    int32 m_iTotalShots; // offset 0x11E4, size 0x4, align 4
    char _pad_11E8[0x100]; // offset 0x11E8
};
