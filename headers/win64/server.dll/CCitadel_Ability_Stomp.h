#pragma once

class CCitadel_Ability_Stomp : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1BB0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    Vector m_vStompPos; // offset 0x14A0, size 0xC, align 4
    Vector m_vStompDir; // offset 0x14AC, size 0xC, align 4
    CUtlVector< CHandle< CBaseEntity > > m_vecStompedEnemies; // offset 0x14B8, size 0x18, align 8
    char _pad_14D0[0x6E0]; // offset 0x14D0
};
