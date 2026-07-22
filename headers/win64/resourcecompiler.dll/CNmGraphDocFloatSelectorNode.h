#pragma once

class CNmGraphDocFloatSelectorNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x128, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x100]; // offset 0x0
    CUtlVector< CNmGraphDocFloatSelectorNode::Option_t > m_options; // offset 0x100, size 0x18, align 8 | MPropertyAutoExpandSelf MPropertyResizable
    float32 m_flDefaultValue; // offset 0x118, size 0x4, align 4
    NmEasingOperation_t m_easing; // offset 0x11C, size 0x1, align 1 | MPropertyGroupName
    char _pad_011D[0x3]; // offset 0x11D
    float32 m_easeTime; // offset 0x120, size 0x4, align 4 | MPropertyGroupName
    char _pad_0124[0x4]; // offset 0x124
};
