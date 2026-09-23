#pragma once

struct CNmGraphDocument::DebugBoneFilterSet_t  // sizeof 0x20, align 0x8 (animdoclib) {MGetKV3ClassDefaults}
{
    CGlobalSymbol m_ID; // offset 0x0, size 0x8, align 8
    CUtlVector< CGlobalSymbol > m_boneIDs; // offset 0x8, size 0x18, align 8
};
