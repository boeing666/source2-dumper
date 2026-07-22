#pragma once

class CSurvivorsPowerUp_AreaAttack_CircleConstant : public CSurvivorsPowerUp_AreaAttack_Circle /*0x0*/  // sizeof 0x850, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x800]; // offset 0x0
    CUtlOrderedMap< SurvivorsUnitID_t, float32 > m_mapEnemyDamagedTimers; // offset 0x800, size 0x28, align 8
    CNewParticleEffect* m_pParticleEffect; // offset 0x828, size 0x8, align 8
    char _pad_0830[0x18]; // offset 0x830
    float32 m_flNextTrailCreationTimer; // offset 0x848, size 0x4, align 4
    char _pad_084C[0x4]; // offset 0x84C
};
