#pragma once

class CDOTATurboGameMode : public CDOTABaseGameMode /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7F8]; // offset 0x0
    int32 m_nHighestLevelInCurrentGame; // offset 0x7F8, size 0x4, align 4
    char _pad_07FC[0x34]; // offset 0x7FC
    CUtlVector< float32 > m_ExtraMeleeCreepTimes; // offset 0x830, size 0x18, align 8
    CUtlVector< float32 > m_ExtraRangedCreepTimes; // offset 0x848, size 0x18, align 8
    CUtlVector< float32 > m_ExtraSiegeCreepTimes; // offset 0x860, size 0x18, align 8
    int32 m_nExtraGoldPerWave; // offset 0x878, size 0x4, align 4
    int32 m_nExtraXPPerWave; // offset 0x87C, size 0x4, align 4
    float32 m_flNextRewardDistributionTime; // offset 0x880, size 0x4, align 4
    float32 m_flNextWaveRecalculationTime; // offset 0x884, size 0x4, align 4
    bool m_bInOvertime; // offset 0x888, size 0x1, align 1
    bool m_bDistributingPassiveGoldAndXp; // offset 0x889, size 0x1, align 1
    char _pad_088A[0x6]; // offset 0x88A
};
