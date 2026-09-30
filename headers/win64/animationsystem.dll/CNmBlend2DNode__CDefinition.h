#pragma once

class CNmBlend2DNode::CDefinition : public CNmPoseNode::CDefinition /*0x0*/  // sizeof 0xC8, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlLeanVectorFixedGrowable< int16, 5 > m_sourceNodeIndices; // offset 0x10, size 0x18, align 8
    CUtlLeanVectorFixedGrowable< Vector2D, 10 > m_values; // offset 0x28, size 0x58, align 8
    CUtlLeanVectorFixedGrowable< uint8, 30 > m_indices; // offset 0x80, size 0x28, align 8
    CUtlLeanVectorFixedGrowable< uint8, 10 > m_hullIndices; // offset 0xA8, size 0x18, align 8
    int16 m_nInputParameterNodeIdx0; // offset 0xC0, size 0x2, align 2
    int16 m_nInputParameterNodeIdx1; // offset 0xC2, size 0x2, align 2
    bool m_bAllowLooping; // offset 0xC4, size 0x1, align 1
    char _pad_00C5[0x3]; // offset 0xC5
};
