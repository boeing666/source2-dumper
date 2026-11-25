#pragma once

struct ItemDraftBucketing_t  // sizeof 0x38, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlString m_strBucketName; // offset 0x0, size 0x8, align 8
    CUtlOrderedMap< CUtlString, float32 > m_mapBuckets; // offset 0x8, size 0x28, align 8
    float32 m_flGoodItemPickRateThreshold; // offset 0x30, size 0x4, align 4 | MPropertyDescription
    char _pad_0034[0x4]; // offset 0x34
};
