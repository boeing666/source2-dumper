#pragma once

class CSurvivorsLootTable  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< CSurvivorsLootTable::CLootEntryCollection > m_vecLootEntryCollections; // offset 0x0, size 0x18, align 8
};
