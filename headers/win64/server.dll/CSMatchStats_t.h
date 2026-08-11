#pragma once

struct CSMatchStats_t : public CSPerRoundStats_t /*0x0*/  // sizeof 0xC0, align 0xFF [vtable] (server)
{
    char _pad_0000[0x68]; // offset 0x0
    int32 m_iEnemy5Ks; // offset 0x68, size 0x4, align 4
    int32 m_iEnemy4Ks; // offset 0x6C, size 0x4, align 4
    int32 m_iEnemy3Ks; // offset 0x70, size 0x4, align 4
    int32 m_iEnemyKnifeKills; // offset 0x74, size 0x4, align 4
    int32 m_iEnemyTaserKills; // offset 0x78, size 0x4, align 4
    int32 m_iEnemy2Ks; // offset 0x7C, size 0x4, align 4
    int32 m_iUtility_Count; // offset 0x80, size 0x4, align 4
    int32 m_iUtility_Successes; // offset 0x84, size 0x4, align 4
    int32 m_iUtility_Enemies; // offset 0x88, size 0x4, align 4
    int32 m_iFlash_Count; // offset 0x8C, size 0x4, align 4
    int32 m_iFlash_Successes; // offset 0x90, size 0x4, align 4
    float32 m_flHealthPointsRemovedTotal; // offset 0x94, size 0x4, align 4
    float32 m_flHealthPointsDealtTotal; // offset 0x98, size 0x4, align 4
    int32 m_nShotsFiredTotal; // offset 0x9C, size 0x4, align 4
    int32 m_nShotsOnTargetTotal; // offset 0xA0, size 0x4, align 4
    int32 m_i1v1Count; // offset 0xA4, size 0x4, align 4
    int32 m_i1v1Wins; // offset 0xA8, size 0x4, align 4
    int32 m_i1v2Count; // offset 0xAC, size 0x4, align 4
    int32 m_i1v2Wins; // offset 0xB0, size 0x4, align 4
    int32 m_iEntryCount; // offset 0xB4, size 0x4, align 4
    int32 m_iEntryWins; // offset 0xB8, size 0x4, align 4
    char _pad_00BC[0x4]; // offset 0xBC
};
