#pragma once

class CSurvivorsEnemyPillar : public CSurvivorsEnemy /*0x0*/  // sizeof 0x340, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x338]; // offset 0x0
    bool m_bDestroyed; // offset 0x338, size 0x1, align 1
    char _pad_0339[0x3]; // offset 0x339
    CHandle< C_BaseModelEntity > m_pPillarEntity; // offset 0x33C, size 0x4, align 4
};
