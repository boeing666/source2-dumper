#pragma once

class CDotaEntityFilterFlags  // sizeof 0x20, align 0xFF [trivial_dtor] (server)
{
public:
    bool m_bInvertFilter; // offset 0x0, size 0x1, align 1
    bool m_bEveryUnit; // offset 0x1, size 0x1, align 1
    char _pad_0002[0x2]; // offset 0x2
    int32 m_nTeamNumber; // offset 0x4, size 0x4, align 4
    CUtlSymbolLarge m_UnitName; // offset 0x8, size 0x8, align 8
    bool m_bIsAncient; // offset 0x10, size 0x1, align 1
    bool m_bIsNeutralUnitType; // offset 0x11, size 0x1, align 1
    bool m_bIsSummoned; // offset 0x12, size 0x1, align 1
    bool m_bIsHero; // offset 0x13, size 0x1, align 1
    bool m_bIsRealHero; // offset 0x14, size 0x1, align 1
    bool m_bIsTower; // offset 0x15, size 0x1, align 1
    bool m_bIsPhantom; // offset 0x16, size 0x1, align 1
    bool m_bIsIllusion; // offset 0x17, size 0x1, align 1
    bool m_bIsCreep; // offset 0x18, size 0x1, align 1
    bool m_bIsLaneCreep; // offset 0x19, size 0x1, align 1
    char _pad_001A[0x6]; // offset 0x1A
};
