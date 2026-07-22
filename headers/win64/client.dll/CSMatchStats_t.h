#pragma once

struct CSMatchStats_t : public CSPerRoundStats_t /*0x0*/  // sizeof 0x80, align 0xFF [vtable] (client)
{
    char _pad_0000[0x68]; // offset 0x0
    int32 m_iEnemy5Ks; // offset 0x68, size 0x4, align 4
    int32 m_iEnemy4Ks; // offset 0x6C, size 0x4, align 4
    int32 m_iEnemy3Ks; // offset 0x70, size 0x4, align 4
    int32 m_iEnemyKnifeKills; // offset 0x74, size 0x4, align 4
    int32 m_iEnemyTaserKills; // offset 0x78, size 0x4, align 4
    char _pad_007C[0x4]; // offset 0x7C
};
