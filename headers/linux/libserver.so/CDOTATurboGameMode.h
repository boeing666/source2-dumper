#pragma once

class CDOTATurboGameMode : public CDOTABaseGameMode /*0x0*/  // sizeof 0xB78, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAE0]; // offset 0x0
    int32 m_nHighestLevelInCurrentGame; // offset 0xAE0, size 0x4, align 4
    char _pad_0AE4[0x34]; // offset 0xAE4
    CUtlVector< float32 > m_ExtraMeleeCreepTimes; // offset 0xB18, size 0x18, align 8
    CUtlVector< float32 > m_ExtraRangedCreepTimes; // offset 0xB30, size 0x18, align 8
    CUtlVector< float32 > m_ExtraSiegeCreepTimes; // offset 0xB48, size 0x18, align 8
    int32 m_nExtraGoldPerWave; // offset 0xB60, size 0x4, align 4
    int32 m_nExtraXPPerWave; // offset 0xB64, size 0x4, align 4
    float32 m_flNextRewardDistributionTime; // offset 0xB68, size 0x4, align 4
    float32 m_flNextWaveRecalculationTime; // offset 0xB6C, size 0x4, align 4
    bool m_bInOvertime; // offset 0xB70, size 0x1, align 1
    bool m_bDistributingPassiveGoldAndXp; // offset 0xB71, size 0x1, align 1
    char _pad_0B72[0x6]; // offset 0xB72
};
