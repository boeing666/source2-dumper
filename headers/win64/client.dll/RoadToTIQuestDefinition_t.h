#pragma once

struct RoadToTIQuestDefinition_t  // sizeof 0x48, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    RoadToTIQuestID_t m_unID; // offset 0x0, size 0x1, align 255 | MPropertyDescription
    char _pad_0001[0x3]; // offset 0x1
    ERoadToTIQuestType m_eQuestType; // offset 0x4, size 0x4, align 4 | MPropertyDescription
    uint32 m_unPeriod; // offset 0x8, size 0x4, align 4 | MPropertyDescription
    char _pad_000C[0x4]; // offset 0xC
    MatchID_t m_unMatchID; // offset 0x10, size 0x8, align 255 | MPropertyDescription
    uint32 m_unSeriesID; // offset 0x18, size 0x4, align 4 | MPropertyDescription
    uint32 m_unLeagueID; // offset 0x1C, size 0x4, align 4 | MPropertyDescription
    uint32 m_unPlayerID; // offset 0x20, size 0x4, align 4 | MPropertyDescription
    uint32 m_unTeamID; // offset 0x24, size 0x4, align 4 | MPropertyDescription
    CUtlVector< HeroID_t > m_vecHeroes; // offset 0x28, size 0x18, align 8 | MPropertyDescription
    bool m_bDeveloper; // offset 0x40, size 0x1, align 1 | MPropertyDescription
    char _pad_0041[0x7]; // offset 0x41
};
