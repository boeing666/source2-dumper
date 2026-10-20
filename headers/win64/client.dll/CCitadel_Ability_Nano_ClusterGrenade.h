#pragma once

class CCitadel_Ability_Nano_ClusterGrenade : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1FF0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitEnemies; // offset 0x16E0, size 0x18, align 8
    GameTime_t m_flNextProjectileTime; // offset 0x16F8, size 0x4, align 255
    char _pad_16FC[0x8F4]; // offset 0x16FC
};
