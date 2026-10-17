#pragma once

class CDOTANewPlayerPoolGameMode : public CDOTABaseGameMode /*0x0*/  // sizeof 0xB60, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAC0]; // offset 0x0
    int32 m_nHighestLevelInCurrentGame; // offset 0xAC0, size 0x4, align 4
    char _pad_0AC4[0x4C]; // offset 0xAC4
    CUtlVector< float32 > m_ExtraMeleeCreepTimes; // offset 0xB10, size 0x18, align 8
    CUtlVector< float32 > m_ExtraRangedCreepTimes; // offset 0xB28, size 0x18, align 8
    CUtlVector< float32 > m_ExtraSiegeCreepTimes; // offset 0xB40, size 0x18, align 8
    bool m_bInOvertime; // offset 0xB58, size 0x1, align 1
    char _pad_0B59[0x7]; // offset 0xB59
};
