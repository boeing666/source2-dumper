#pragma once

class CNmSpeedScaleBaseNode::CDefinition : public CNmPassthroughNode::CDefinition /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    int16 m_nInputValueNodeIdx; // offset 0x18, size 0x2, align 2
    char _pad_001A[0x2]; // offset 0x1A
    float32 m_flDefaultInputValue; // offset 0x1C, size 0x4, align 4
};
