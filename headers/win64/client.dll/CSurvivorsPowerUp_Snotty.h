#pragma once

class CSurvivorsPowerUp_Snotty : public CSurvivorsPowerUp_AreaAttack_Circle /*0x0*/  // sizeof 0x848, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x800]; // offset 0x0
    CUtlVector< SurvivorsUnitID_t > m_vecSnotties; // offset 0x800, size 0x18, align 8
    float32 m_flRotationSpeedDeg; // offset 0x818, size 0x4, align 4
    float32 m_flRotationDist; // offset 0x81C, size 0x4, align 4
    CUtlVector< SurvivorsParticleID_t > m_vecSnottyParticles; // offset 0x820, size 0x18, align 8
    float32 m_flParticleLifetime; // offset 0x838, size 0x4, align 4
    float32 m_flTimeUntilNextSalvo; // offset 0x83C, size 0x4, align 4
    int32 m_nSalvosRemaining; // offset 0x840, size 0x4, align 4
    bool m_bFirstSalvo; // offset 0x844, size 0x1, align 1
    char _pad_0845[0x3]; // offset 0x845
};
