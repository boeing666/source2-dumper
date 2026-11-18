#pragma once

class CDOTANewPlayerPoolGameMode : public CDOTABaseGameMode /*0x0*/  // sizeof 0xB68, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAC8]; // offset 0x0
    int32 m_nHighestLevelInCurrentGame; // offset 0xAC8, size 0x4, align 4
    char _pad_0ACC[0x4C]; // offset 0xACC
    CUtlVector< float32 > m_ExtraMeleeCreepTimes; // offset 0xB18, size 0x18, align 8
    CUtlVector< float32 > m_ExtraRangedCreepTimes; // offset 0xB30, size 0x18, align 8
    CUtlVector< float32 > m_ExtraSiegeCreepTimes; // offset 0xB48, size 0x18, align 8
    bool m_bInOvertime; // offset 0xB60, size 0x1, align 1
    char _pad_0B61[0x7]; // offset 0xB61
};
