#pragma once

class CCitadel_Ability_Nano_ClusterGrenade : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1FE8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitEnemies; // offset 0x16D8, size 0x18, align 8
    GameTime_t m_flNextProjectileTime; // offset 0x16F0, size 0x4, align 255
    char _pad_16F4[0x8F4]; // offset 0x16F4
};
