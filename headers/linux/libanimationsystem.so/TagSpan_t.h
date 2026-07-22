#pragma once

struct TagSpan_t  // sizeof 0xC, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
    int32 m_tagIndex; // offset 0x0, size 0x4, align 4
    float32 m_startCycle; // offset 0x4, size 0x4, align 4
    float32 m_endCycle; // offset 0x8, size 0x4, align 4
};
