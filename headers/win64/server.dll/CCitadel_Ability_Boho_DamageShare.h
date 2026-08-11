#pragma once

class CCitadel_Ability_Boho_DamageShare : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1088, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecLinkedEnemies; // offset 0xF70, size 0x18, align 8
    char _pad_0F88[0x100]; // offset 0xF88
};
