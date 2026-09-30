#pragma once

class CCitadel_Ability_Nano_ClusterGrenade : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1DB0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies; // offset 0x14A0, size 0x18, align 8
    GameTime_t m_flNextProjectileTime; // offset 0x14B8, size 0x4, align 255
    char _pad_14BC[0x8F4]; // offset 0x14BC
};
