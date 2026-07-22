#pragma once

class CDOTANewPlayerPoolGameMode : public CDOTABaseGameMode /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7D8]; // offset 0x0
    int32 m_nHighestLevelInCurrentGame; // offset 0x7D8, size 0x4, align 4
    char _pad_07DC[0x4C]; // offset 0x7DC
    CUtlVector< float32 > m_ExtraMeleeCreepTimes; // offset 0x828, size 0x18, align 8
    CUtlVector< float32 > m_ExtraRangedCreepTimes; // offset 0x840, size 0x18, align 8
    CUtlVector< float32 > m_ExtraSiegeCreepTimes; // offset 0x858, size 0x18, align 8
    bool m_bInOvertime; // offset 0x870, size 0x1, align 1
    char _pad_0871[0x7]; // offset 0x871
};
