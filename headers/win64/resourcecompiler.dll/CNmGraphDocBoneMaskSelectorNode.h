#pragma once

class CNmGraphDocBoneMaskSelectorNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x128, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x100]; // offset 0x0
    bool m_switchDynamically; // offset 0x100, size 0x1, align 1
    char _pad_0101[0x7]; // offset 0x101
    CUtlVector< CGlobalSymbol > m_options; // offset 0x108, size 0x18, align 8 | MPropertyAutoExpandSelf MPropertyResizable
    float32 m_flBlendTimeSeconds; // offset 0x120, size 0x4, align 4
    char _pad_0124[0x4]; // offset 0x124
};
