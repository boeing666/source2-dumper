#pragma once

class CNmParameterizedClipSelectorNode::CDefinition : public CNmClipReferenceNode::CDefinition /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlLeanVectorFixedGrowable< int16, 8 > m_optionNodeIndices; // offset 0x10, size 0x18, align 8
    CUtlLeanVectorFixedGrowable< uint8, 8 > m_optionWeights; // offset 0x28, size 0x10, align 8
    int16 m_parameterNodeIdx; // offset 0x38, size 0x2, align 2
    bool m_bIgnoreInvalidOptions; // offset 0x3A, size 0x1, align 1
    bool m_bHasWeightsSet; // offset 0x3B, size 0x1, align 1
    char _pad_003C[0x4]; // offset 0x3C
};
