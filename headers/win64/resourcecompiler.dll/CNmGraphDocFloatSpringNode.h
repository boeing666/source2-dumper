#pragma once

class CNmGraphDocFloatSpringNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x118, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x108]; // offset 0x0
    float32 m_flHertz; // offset 0x108, size 0x4, align 4 | MPropertyDescription
    float32 m_flDampingRatio; // offset 0x10C, size 0x4, align 4 | MPropertyDescription
    bool m_bUseStartValue; // offset 0x110, size 0x1, align 1 | MPropertyDescription
    char _pad_0111[0x3]; // offset 0x111
    float32 m_flStartValue; // offset 0x114, size 0x4, align 4 | MPropertyDescription
};
