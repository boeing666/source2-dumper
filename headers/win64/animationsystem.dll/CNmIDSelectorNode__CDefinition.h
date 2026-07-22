#pragma once

class CNmIDSelectorNode::CDefinition : public CNmIDValueNode::CDefinition /*0x0*/  // sizeof 0x80, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlVectorFixedGrowable< int16, 5 > m_conditionNodeIndices; // offset 0x10, size 0x28, align 8
    CUtlVectorFixedGrowable< CGlobalSymbol, 5 > m_values; // offset 0x38, size 0x40, align 8
    CGlobalSymbol m_defaultValue; // offset 0x78, size 0x8, align 8
};
