#pragma once

struct FantasyPlayerData_t  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    uint32 m_unAccountID; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    uint32 m_unTeamID; // offset 0x4, size 0x4, align 4 | MPropertyDescription
    CUtlString m_strPlayerName; // offset 0x8, size 0x8, align 8 | MPropertyDescription
    bool m_bIsValid; // offset 0x10, size 0x1, align 1 | MPropertyDescription
    char _pad_0011[0x7]; // offset 0x11
};
