#pragma once

struct ItemDraftBucketing_t  // sizeof 0x30, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlString m_strBucketName; // offset 0x0, size 0x8, align 8
    CUtlOrderedMap< CUtlString, float32 > m_mapBuckets; // offset 0x8, size 0x28, align 8
};
