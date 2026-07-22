#pragma once

struct CNmStateNode::TimedEvent_t  // sizeof 0x10, align 0x8 [trivial_dtor] (animlib) {MGetKV3ClassDefaults}
{
    CGlobalSymbol m_ID; // offset 0x0, size 0x8, align 8
    float32 m_flTimeValueSeconds; // offset 0x8, size 0x4, align 4
    CNmStateNode::TimedEvent_t::Comparison_t m_comparisionOperator; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
};
