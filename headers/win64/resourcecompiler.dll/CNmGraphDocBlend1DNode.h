#pragma once

class CNmGraphDocBlend1DNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x120, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x100]; // offset 0x0
    CNmBlendSpace1D m_blendSpace; // offset 0x100, size 0x18, align 8 | MPropertyAttributeEditor
    bool m_bAllowLooping; // offset 0x118, size 0x1, align 1 | MPropertyDescription
    char _pad_0119[0x7]; // offset 0x119
};
