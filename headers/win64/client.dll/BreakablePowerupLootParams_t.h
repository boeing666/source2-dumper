#pragma once

struct BreakablePowerupLootParams_t  // sizeof 0x30, align 0x8 (client) {MGetKV3ClassDefaults}
{
    int32 m_iLootListDeckSize; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    char _pad_0004[0x4]; // offset 0x4
    CUtlOrderedMap< int32, CUtlOrderedMap< CSubclassName< 0 >, float32 > > m_mapPickupsByMatchTimeMins; // offset 0x8, size 0x28, align 8 | MPropertyDescription
};
