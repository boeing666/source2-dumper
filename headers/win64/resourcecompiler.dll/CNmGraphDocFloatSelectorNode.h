#pragma once

class CNmGraphDocFloatSelectorNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x130, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x108]; // offset 0x0
    CUtlVector< CNmGraphDocFloatSelectorNode::Option_t > m_options; // offset 0x108, size 0x18, align 8 | MPropertyAutoExpandSelf MPropertyResizable
    float32 m_flDefaultValue; // offset 0x120, size 0x4, align 4
    NmEasingOperation_t m_easing; // offset 0x124, size 0x1, align 1 | MPropertyGroupName
    char _pad_0125[0x3]; // offset 0x125
    float32 m_easeTime; // offset 0x128, size 0x4, align 4 | MPropertyGroupName
    char _pad_012C[0x4]; // offset 0x12C
};
