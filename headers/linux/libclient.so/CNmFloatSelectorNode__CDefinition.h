#pragma once

class CNmFloatSelectorNode::CDefinition : public CNmFloatValueNode::CDefinition /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlLeanVectorFixedGrowable< int16, 5 > m_conditionNodeIndices; // offset 0x10, size 0x18, align 8
    CUtlLeanVectorFixedGrowable< float32, 5 > m_values; // offset 0x28, size 0x20, align 8
    float32 m_flDefaultValue; // offset 0x48, size 0x4, align 4
    float32 m_flEaseTime; // offset 0x4C, size 0x4, align 4
    NmEasingOperation_t m_easingOp; // offset 0x50, size 0x1, align 1
    char _pad_0051[0x7]; // offset 0x51
};
