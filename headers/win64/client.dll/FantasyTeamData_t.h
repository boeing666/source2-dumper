#pragma once

struct FantasyTeamData_t  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    uint32 m_unTeamID; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    char _pad_0004[0x4]; // offset 0x4
    CUtlString m_strTeamName; // offset 0x8, size 0x8, align 8 | MPropertyDescription
    ELeagueRegion m_eRegion; // offset 0x10, size 0x4, align 4 | MPropertyDescription
    char _pad_0014[0x4]; // offset 0x14
};
