#pragma once

struct CNmGraphDocStateNode::TimedStateEvent_t  // sizeof 0x18, align 0x8 [trivial_dtor] (animdoclib) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    CGlobalSymbol m_ID; // offset 0x0, size 0x8, align 8 | MPropertyAttributeEditor
    CNmGraphDocStateNode::TimedStateEventType_t m_type; // offset 0x8, size 0x4, align 4
    CNmStateNode::TimedEvent_t::Comparison_t m_comparisonOperator; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
    float32 m_flTimeValueSeconds; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
};
