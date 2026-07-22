#pragma once

class CNmIDSelectorNode::CDefinition : public CNmIDValueNode::CDefinition /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlLeanVectorFixedGrowable< int16, 5 > m_conditionNodeIndices; // offset 0x10, size 0x18, align 8
    CUtlLeanVectorFixedGrowable< CGlobalSymbol, 5 > m_values; // offset 0x28, size 0x30, align 8
    CGlobalSymbol m_defaultValue; // offset 0x58, size 0x8, align 8
};
