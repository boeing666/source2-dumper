#pragma once

class CCitadel_Ability_Gunslinger_Salvo : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1848, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16DC]; // offset 0x0
    CHandle< C_BaseEntity > m_CastTarget; // offset 0x16DC, size 0x4, align 4
    int32 m_iCurrentShots; // offset 0x16E0, size 0x4, align 4
    int32 m_iTotalShots; // offset 0x16E4, size 0x4, align 4
    char _pad_16E8[0x160]; // offset 0x16E8
};
