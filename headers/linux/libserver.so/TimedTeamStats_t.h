#pragma once

struct TimedTeamStats_t  // sizeof 0xC, align 0xFF [trivial_ctor trivial_dtor] (server)
{
    uint32 m_nTime; // offset 0x0, size 0x4, align 4
    uint16 m_nEnemyTowerStatus; // offset 0x4, size 0x2, align 2
    uint16 m_nEnemyBarracksStatus; // offset 0x6, size 0x2, align 2
    uint8 m_nEnemyTowersKilled; // offset 0x8, size 0x1, align 1
    uint8 m_nEnemyBarracksKilled; // offset 0x9, size 0x1, align 1
    char _pad_000A[0x2]; // offset 0xA
};
