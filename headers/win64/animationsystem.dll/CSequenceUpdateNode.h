#pragma once

class CSequenceUpdateNode : public CSequenceUpdateNodeBase /*0x0*/  // sizeof 0xB0, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x78]; // offset 0x0
    HSequence m_hSequence; // offset 0x78, size 0x4, align 255
    float32 m_duration; // offset 0x7C, size 0x4, align 4
    CParamSpanUpdater m_paramSpans; // offset 0x80, size 0x18, align 8
    CUtlVector< TagSpan_t > m_tags; // offset 0x98, size 0x18, align 8
};
