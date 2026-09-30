#pragma once

class CNmParameterizedBlendNode::CDefinition : public CNmPoseNode::CDefinition /*0x0*/  // sizeof 0x30, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlLeanVectorFixedGrowable< int16, 5 > m_sourceNodeIndices; // offset 0x10, size 0x18, align 8
    int16 m_nInputParameterValueNodeIdx; // offset 0x28, size 0x2, align 2
    bool m_bAllowLooping; // offset 0x2A, size 0x1, align 1
    char _pad_002B[0x5]; // offset 0x2B
};
