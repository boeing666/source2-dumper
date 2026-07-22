#pragma once

class CAimMatrixUpdateNode : public CUnaryUpdateNode /*0x0*/  // sizeof 0x180, align 0x10 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    AimMatrixOpFixedSettings_t m_opFixedSettings; // offset 0x70, size 0xF0, align 16
    char _pad_0160[0x8]; // offset 0x160
    AnimVectorSource m_target; // offset 0x168, size 0x4, align 4
    CAnimParamHandle m_paramIndex; // offset 0x16C, size 0x2, align 1
    char _pad_016E[0x2]; // offset 0x16E
    HSequence m_hSequence; // offset 0x170, size 0x4, align 255
    bool m_bResetChild; // offset 0x174, size 0x1, align 1
    bool m_bLockWhenWaning; // offset 0x175, size 0x1, align 1
    char _pad_0176[0xA]; // offset 0x176
};
