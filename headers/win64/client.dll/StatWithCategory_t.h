#pragma once

struct StatWithCategory_t  // sizeof 0x8, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    EStatsType m_eStatType; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    ECitadelStatCategory m_eStatCategory; // offset 0x4, size 0x4, align 4 | MPropertyDescription
};
