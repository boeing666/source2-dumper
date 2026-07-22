#pragma once

class CNmScaleNode::CDefinition : public CNmPassthroughNode::CDefinition /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    int16 m_nMaskNodeIdx; // offset 0x18, size 0x2, align 2
    int16 m_nEnableNodeIdx; // offset 0x1A, size 0x2, align 2
    char _pad_001C[0x4]; // offset 0x1C
};
