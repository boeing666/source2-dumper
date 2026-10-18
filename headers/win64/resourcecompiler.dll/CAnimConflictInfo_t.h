#pragma once

struct CAnimConflictInfo_t  // sizeof 0x20, align 0x8 (animgraphdoclib) {MGetKV3ClassDefaults}
{
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    CUtlString m_groupName; // offset 0x8, size 0x8, align 8
    CUtlString m_subgraphName; // offset 0x10, size 0x8, align 8
    uint32 m_id; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
};
