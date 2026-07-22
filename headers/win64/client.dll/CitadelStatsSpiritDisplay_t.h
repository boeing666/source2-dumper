#pragma once

struct CitadelStatsSpiritDisplay_t  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlVector< EStatsType > m_vecDisplayStats; // offset 0x0, size 0x18, align 8 | MPropertyDescription
};
