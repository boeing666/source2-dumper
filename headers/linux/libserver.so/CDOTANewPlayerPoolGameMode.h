#pragma once

class CDOTANewPlayerPoolGameMode : public CDOTABaseGameMode /*0x0*/  // sizeof 0xB58, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAB8]; // offset 0x0
    int32 m_nHighestLevelInCurrentGame; // offset 0xAB8, size 0x4, align 4
    char _pad_0ABC[0x4C]; // offset 0xABC
    CUtlVector< float32 > m_ExtraMeleeCreepTimes; // offset 0xB08, size 0x18, align 8
    CUtlVector< float32 > m_ExtraRangedCreepTimes; // offset 0xB20, size 0x18, align 8
    CUtlVector< float32 > m_ExtraSiegeCreepTimes; // offset 0xB38, size 0x18, align 8
    bool m_bInOvertime; // offset 0xB50, size 0x1, align 1
    char _pad_0B51[0x7]; // offset 0xB51
};
