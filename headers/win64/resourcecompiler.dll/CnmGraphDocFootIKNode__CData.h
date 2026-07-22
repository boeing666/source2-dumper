#pragma once

class CnmGraphDocFootIKNode::CData : public CNmGraphDocVariationDataNode::CData /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_leftEffectorBoneName; // offset 0x8, size 0x8, align 8
    CUtlString m_rightEffectorBoneName; // offset 0x10, size 0x8, align 8
    float32 m_flBlendTimeSeconds; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
};
