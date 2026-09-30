#pragma once

struct ItemPopularity_t  // sizeof 0x58, align 0x8 (client) {MGetKV3ClassDefaults}
{
    uint32 m_unTimestamp; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlOrderedMap< ECitadelItemGamePhase, CUtlOrderedMap< CUtlString, ItemPopularityEntry_t > > m_mapManualItemPopularity; // offset 0x8, size 0x28, align 8
    CUtlOrderedMap< ECitadelItemGamePhase, CUtlOrderedMap< CUtlString, ItemPopularityEntry_t > > m_mapGeneratedItemPopularity; // offset 0x30, size 0x28, align 8
};
