#pragma once

struct FantasyLeagueData_t  // sizeof 0x70, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    FantasyLeagueID_t m_nFantasyLeagueID; // offset 0x0, size 0x2, align 255 | MPropertyDescription
    char _pad_0002[0x2]; // offset 0x2
    EEvent m_eEvent; // offset 0x4, size 0x4, align 4 | MPropertyDescription
    FantasyCraftDataID_t m_nCraftingID; // offset 0x8, size 0x2, align 255 | MPropertyDescription
    char _pad_000A[0x6]; // offset 0xA
    CUtlVector< LeagueID_t > m_nLeagues; // offset 0x10, size 0x18, align 8 | MPropertyDescription
    CUtlVector< FantasyTeamData_t > m_vecTeams; // offset 0x28, size 0x18, align 8
    CUtlVector< FantasyRoleData_t > m_vecPlayers; // offset 0x40, size 0x18, align 8
    CUtlVector< FantasyPeriodData_t > m_vecPeriods; // offset 0x58, size 0x18, align 8
};
