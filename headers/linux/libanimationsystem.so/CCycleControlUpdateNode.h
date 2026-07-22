#pragma once

class CCycleControlUpdateNode : public CUnaryUpdateNode /*0x0*/  // sizeof 0x78, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    AnimValueSource m_valueSource; // offset 0x70, size 0x4, align 4
    CAnimParamHandle m_paramIndex; // offset 0x74, size 0x2, align 1
    bool m_bLockWhenWaning; // offset 0x76, size 0x1, align 1
    char _pad_0077[0x1]; // offset 0x77
};
