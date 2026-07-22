#pragma once

class CNmScaleNode::CDefinition : public CNmPassthroughNode::CDefinition /*0x0*/  // sizeof 0x10, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC]; // offset 0x0
    int16 m_nMaskNodeIdx; // offset 0xC, size 0x2, align 2
    int16 m_nEnableNodeIdx; // offset 0xE, size 0x2, align 2
};
