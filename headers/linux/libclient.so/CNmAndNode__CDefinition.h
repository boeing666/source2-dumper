#pragma once

class CNmAndNode::CDefinition : public CNmBoolValueNode::CDefinition /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlLeanVectorFixedGrowable< int16, 4 > m_conditionNodeIndices; // offset 0x10, size 0x10, align 8
};
