#pragma once

class CSequenceTagSpans  // sizeof 0x20, align 0x8 (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    CGlobalSymbol m_sSequenceName; // offset 0x0, size 0x8, align 8
    CUtlVector< TagSpan_t > m_tags; // offset 0x8, size 0x18, align 8
};
