#pragma once

class CnmGraphDocChainLookatNode::CData : public CNmGraphDocVariationDataNode::CData /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_chainEndBoneName; // offset 0x8, size 0x8, align 8
    Vector m_chainForwardDir; // offset 0x10, size 0xC, align 4
    uint8 m_nChainLength; // offset 0x1C, size 0x1, align 1
    char _pad_001D[0x3]; // offset 0x1D
    float32 m_flBlendTimeSeconds; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
};
