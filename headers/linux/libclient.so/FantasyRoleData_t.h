#pragma once

struct FantasyRoleData_t  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    Fantasy_Roles m_eRole; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    char _pad_0004[0x4]; // offset 0x4
    CUtlVector< FantasyPlayerData_t > m_vecPlayers; // offset 0x8, size 0x18, align 8 | MPropertyDescription
};
