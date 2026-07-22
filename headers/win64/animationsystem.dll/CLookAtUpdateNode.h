#pragma once

class CLookAtUpdateNode : public CUnaryUpdateNode /*0x0*/  // sizeof 0x160, align 0x10 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    LookAtOpFixedSettings_t m_opFixedSettings; // offset 0x70, size 0xD0, align 16
    char _pad_0140[0x8]; // offset 0x140
    AnimVectorSource m_target; // offset 0x148, size 0x4, align 4
    CAnimParamHandle m_paramIndex; // offset 0x14C, size 0x2, align 1
    CAnimParamHandle m_weightParamIndex; // offset 0x14E, size 0x2, align 1
    bool m_bResetChild; // offset 0x150, size 0x1, align 1
    bool m_bLockWhenWaning; // offset 0x151, size 0x1, align 1
    char _pad_0152[0xE]; // offset 0x152
};
