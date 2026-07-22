#pragma once

class CNmClipSelectorNode::CDefinition : public CNmClipReferenceNode::CDefinition /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlLeanVectorFixedGrowable< int16, 5 > m_optionNodeIndices; // offset 0x10, size 0x18, align 8
    CUtlLeanVectorFixedGrowable< int16, 5 > m_conditionNodeIndices; // offset 0x28, size 0x18, align 8
};
