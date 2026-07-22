#pragma once

class CDOTATurboGameMode : public CDOTABaseGameMode /*0x0*/  // sizeof 0xB68, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAD0]; // offset 0x0
    int32 m_nHighestLevelInCurrentGame; // offset 0xAD0, size 0x4, align 4
    char _pad_0AD4[0x34]; // offset 0xAD4
    CUtlVector< float32 > m_ExtraMeleeCreepTimes; // offset 0xB08, size 0x18, align 8
    CUtlVector< float32 > m_ExtraRangedCreepTimes; // offset 0xB20, size 0x18, align 8
    CUtlVector< float32 > m_ExtraSiegeCreepTimes; // offset 0xB38, size 0x18, align 8
    int32 m_nExtraGoldPerWave; // offset 0xB50, size 0x4, align 4
    int32 m_nExtraXPPerWave; // offset 0xB54, size 0x4, align 4
    float32 m_flNextRewardDistributionTime; // offset 0xB58, size 0x4, align 4
    float32 m_flNextWaveRecalculationTime; // offset 0xB5C, size 0x4, align 4
    bool m_bInOvertime; // offset 0xB60, size 0x1, align 1
    bool m_bDistributingPassiveGoldAndXp; // offset 0xB61, size 0x1, align 1
    char _pad_0B62[0x6]; // offset 0xB62
};
