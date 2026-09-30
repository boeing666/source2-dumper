#pragma once

class CNmGraphDocBoneMaskSelectorNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x130, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x108]; // offset 0x0
    bool m_switchDynamically; // offset 0x108, size 0x1, align 1
    char _pad_0109[0x7]; // offset 0x109
    CUtlVector< CGlobalSymbol > m_options; // offset 0x110, size 0x18, align 8 | MPropertyAutoExpandSelf MPropertyResizable
    float32 m_flBlendTimeSeconds; // offset 0x128, size 0x4, align 4
    char _pad_012C[0x4]; // offset 0x12C
};
