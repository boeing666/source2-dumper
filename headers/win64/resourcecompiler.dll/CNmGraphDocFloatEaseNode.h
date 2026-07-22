#pragma once

class CNmGraphDocFloatEaseNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x110, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x100]; // offset 0x0
    NmEasingOperation_t m_easing; // offset 0x100, size 0x1, align 1
    char _pad_0101[0x3]; // offset 0x101
    float32 m_flEaseTime; // offset 0x104, size 0x4, align 4
    bool m_bUseStartValue; // offset 0x108, size 0x1, align 1
    char _pad_0109[0x3]; // offset 0x109
    float32 m_flStartValue; // offset 0x10C, size 0x4, align 4
};
