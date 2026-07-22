#pragma once

class CNmParameterizedBlendNode::CDefinition : public CNmPoseNode::CDefinition /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlVectorFixedGrowable< int16, 5 > m_sourceNodeIndices; // offset 0x10, size 0x28, align 8
    int16 m_nInputParameterValueNodeIdx; // offset 0x38, size 0x2, align 2
    bool m_bAllowLooping; // offset 0x3A, size 0x1, align 1
    char _pad_003B[0x5]; // offset 0x3B
};
