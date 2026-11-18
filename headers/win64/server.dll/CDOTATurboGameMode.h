#pragma once

class CDOTATurboGameMode : public CDOTABaseGameMode /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x800]; // offset 0x0
    int32 m_nHighestLevelInCurrentGame; // offset 0x800, size 0x4, align 4
    char _pad_0804[0x34]; // offset 0x804
    CUtlVector< float32 > m_ExtraMeleeCreepTimes; // offset 0x838, size 0x18, align 8
    CUtlVector< float32 > m_ExtraRangedCreepTimes; // offset 0x850, size 0x18, align 8
    CUtlVector< float32 > m_ExtraSiegeCreepTimes; // offset 0x868, size 0x18, align 8
    int32 m_nExtraGoldPerWave; // offset 0x880, size 0x4, align 4
    int32 m_nExtraXPPerWave; // offset 0x884, size 0x4, align 4
    float32 m_flNextRewardDistributionTime; // offset 0x888, size 0x4, align 4
    float32 m_flNextWaveRecalculationTime; // offset 0x88C, size 0x4, align 4
    bool m_bInOvertime; // offset 0x890, size 0x1, align 1
    bool m_bDistributingPassiveGoldAndXp; // offset 0x891, size 0x1, align 1
    char _pad_0892[0x6]; // offset 0x892
};
