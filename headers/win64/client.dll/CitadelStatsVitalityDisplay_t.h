#pragma once

struct CitadelStatsVitalityDisplay_t  // sizeof 0x30, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlVector< EStatsType > m_vecDisplayStats; // offset 0x0, size 0x18, align 8 | MPropertyDescription
    CUtlVector< EStatsType > m_vecOtherDisplayStats; // offset 0x18, size 0x18, align 8 | MPropertyDescription
};
