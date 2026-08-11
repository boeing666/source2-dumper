#pragma once

class CCitadel_Ability_Stomp : public CCitadelBaseAbility /*0x0*/  // sizeof 0x14A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    Vector m_vStompPos; // offset 0xF70, size 0xC, align 4
    Vector m_vStompDir; // offset 0xF7C, size 0xC, align 4
    CUtlVector< CHandle< CBaseEntity > > m_vecStompedEnemies; // offset 0xF88, size 0x18, align 8
    char _pad_0FA0[0x500]; // offset 0xFA0
};
