#pragma once

class CCitadel_Ability_Boho_DamageShare : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1618, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecLinkedEnemies; // offset 0x14A0, size 0x18, align 8
    char _pad_14B8[0x160]; // offset 0x14B8
};
