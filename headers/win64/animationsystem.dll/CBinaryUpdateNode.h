#pragma once

class CBinaryUpdateNode : public CAnimUpdateNodeBase /*0x0*/  // sizeof 0x90, align 0xFF [vtable abstract] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x60]; // offset 0x0
    CAnimUpdateNodeRef m_pChild1; // offset 0x60, size 0x10, align 8
    CAnimUpdateNodeRef m_pChild2; // offset 0x70, size 0x10, align 8
    BinaryNodeTiming m_timingBehavior; // offset 0x80, size 0x4, align 4
    float32 m_flTimingBlend; // offset 0x84, size 0x4, align 4
    bool m_bResetChild1; // offset 0x88, size 0x1, align 1
    bool m_bResetChild2; // offset 0x89, size 0x1, align 1
    char _pad_008A[0x6]; // offset 0x8A
};
