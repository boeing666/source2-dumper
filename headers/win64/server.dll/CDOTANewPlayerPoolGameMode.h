#pragma once

class CDOTANewPlayerPoolGameMode : public CDOTABaseGameMode /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7E0]; // offset 0x0
    int32 m_nHighestLevelInCurrentGame; // offset 0x7E0, size 0x4, align 4
    char _pad_07E4[0x4C]; // offset 0x7E4
    CUtlVector< float32 > m_ExtraMeleeCreepTimes; // offset 0x830, size 0x18, align 8
    CUtlVector< float32 > m_ExtraRangedCreepTimes; // offset 0x848, size 0x18, align 8
    CUtlVector< float32 > m_ExtraSiegeCreepTimes; // offset 0x860, size 0x18, align 8
    bool m_bInOvertime; // offset 0x878, size 0x1, align 1
    char _pad_0879[0x7]; // offset 0x879
};
