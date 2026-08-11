#pragma once

class CCitadel_Ability_IncendiaryProjectile : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1188, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies; // offset 0xF70, size 0x18, align 8
    char _pad_0F88[0x200]; // offset 0xF88
};
