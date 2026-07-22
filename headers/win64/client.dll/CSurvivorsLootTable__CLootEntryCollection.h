#pragma once

class CSurvivorsLootTable::CLootEntryCollection  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    float32 m_flChance; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlVector< CSurvivorsLootTable::CLootEntry > m_vecLootEntries; // offset 0x8, size 0x18, align 8
};
