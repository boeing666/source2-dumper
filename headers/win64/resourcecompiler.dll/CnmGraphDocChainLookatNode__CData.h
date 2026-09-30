#pragma once

class CnmGraphDocChainLookatNode::CData : public CNmGraphDocVariationDataNode::CData /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_endEffectorBoneName; // offset 0x8, size 0x8, align 8
    Vector m_endEffectorForwardAxis; // offset 0x10, size 0xC, align 4 | MPropertyDescription
    Vector m_endEffectorOffset; // offset 0x1C, size 0xC, align 4 | MPropertyDescription
    uint8 m_nChainLength; // offset 0x28, size 0x1, align 1 | MPropertyDescription MPropertyAttributeRange
    char _pad_0029[0x3]; // offset 0x29
    float32 m_flBlendTimeSeconds; // offset 0x2C, size 0x4, align 4 | MPropertyDescription
    CUtlVector< float32 > m_chainWeights; // offset 0x30, size 0x18, align 8 | MPropertyAutoExpandSelf MPropertyDescription
};
