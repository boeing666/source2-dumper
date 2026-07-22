#pragma once

class CDOTABingoGameDefinition  // sizeof 0xE8, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    EEvent m_eEvent; // offset 0x0, size 0x4, align 4
    LeagueID_t m_unLeagueID; // offset 0x4, size 0x4, align 255
    int32 m_nShuffleCardCost; // offset 0x8, size 0x4, align 4
    int32 m_nRerollSquareCost; // offset 0xC, size 0x4, align 4
    int32 m_nUpgradeSquareCost; // offset 0x10, size 0x4, align 4
    int32 m_nMaxSquareUpgrades; // offset 0x14, size 0x4, align 4
    CUtlVector< float32 > m_vecExpectedMatchCountsPerPhase; // offset 0x18, size 0x18, align 8
    CUtlVector< uint32 > m_vecLeaguePhases; // offset 0x30, size 0x18, align 8
    CUtlVector< CUtlVector< int32 > > m_vecValidStatRangesPerPhase; // offset 0x48, size 0x18, align 8
    CUtlOrderedMap< CUtlString, CDOTABingoStatDefinition > m_mapBingoStatsByName; // offset 0x60, size 0x28, align 8
    char _pad_0088[0x60]; // offset 0x88
};
