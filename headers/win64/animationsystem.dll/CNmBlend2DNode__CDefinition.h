#pragma once

class CNmBlend2DNode::CDefinition : public CNmPoseNode::CDefinition /*0x0*/  // sizeof 0x110, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlVectorFixedGrowable< int16, 5 > m_sourceNodeIndices; // offset 0x10, size 0x28, align 8
    int16 m_nInputParameterNodeIdx0; // offset 0x38, size 0x2, align 2
    int16 m_nInputParameterNodeIdx1; // offset 0x3A, size 0x2, align 2
    char _pad_003C[0x4]; // offset 0x3C
    CUtlVectorFixedGrowable< Vector2D, 10 > m_values; // offset 0x40, size 0x68, align 8
    CUtlVectorFixedGrowable< uint8, 30 > m_indices; // offset 0xA8, size 0x38, align 8
    CUtlVectorFixedGrowable< uint8, 10 > m_hullIndices; // offset 0xE0, size 0x28, align 8
    bool m_bAllowLooping; // offset 0x108, size 0x1, align 1
    char _pad_0109[0x7]; // offset 0x109
};
