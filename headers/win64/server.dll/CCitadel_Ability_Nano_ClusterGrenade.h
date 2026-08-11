#pragma once

class CCitadel_Ability_Nano_ClusterGrenade : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1610, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies; // offset 0xF70, size 0x18, align 8
    GameTime_t m_flNextProjectileTime; // offset 0xF88, size 0x4, align 255
    char _pad_0F8C[0x684]; // offset 0xF8C
};
