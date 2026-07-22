#pragma once

class CCycleControlClipUpdateNode : public CLeafUpdateNode /*0x0*/  // sizeof 0x90, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x60]; // offset 0x0
    CUtlVector< TagSpan_t > m_tags; // offset 0x60, size 0x18, align 8
    char _pad_0078[0x4]; // offset 0x78
    HSequence m_hSequence; // offset 0x7C, size 0x4, align 255
    float32 m_duration; // offset 0x80, size 0x4, align 4
    AnimValueSource m_valueSource; // offset 0x84, size 0x4, align 4
    CAnimParamHandle m_paramIndex; // offset 0x88, size 0x2, align 1
    bool m_bLockWhenWaning; // offset 0x8A, size 0x1, align 1
    char _pad_008B[0x5]; // offset 0x8B
};
