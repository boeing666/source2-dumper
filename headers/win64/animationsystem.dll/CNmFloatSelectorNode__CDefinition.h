#pragma once

class CNmFloatSelectorNode::CDefinition : public CNmFloatValueNode::CDefinition /*0x0*/  // sizeof 0x78, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlVectorFixedGrowable< int16, 5 > m_conditionNodeIndices; // offset 0x10, size 0x28, align 8
    CUtlVectorFixedGrowable< float32, 5 > m_values; // offset 0x38, size 0x30, align 8
    float32 m_flDefaultValue; // offset 0x68, size 0x4, align 4
    float32 m_flEaseTime; // offset 0x6C, size 0x4, align 4
    NmEasingOperation_t m_easingOp; // offset 0x70, size 0x1, align 1
    char _pad_0071[0x7]; // offset 0x71
};
