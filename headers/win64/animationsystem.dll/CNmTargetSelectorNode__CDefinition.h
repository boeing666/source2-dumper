#pragma once

class CNmTargetSelectorNode::CDefinition : public CNmClipReferenceNode::CDefinition /*0x0*/  // sizeof 0x38, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlLeanVectorFixedGrowable< int16, 5 > m_optionNodeIndices; // offset 0x10, size 0x18, align 8
    float32 m_flOrientationScoreWeight; // offset 0x28, size 0x4, align 4
    float32 m_flPositionScoreWeight; // offset 0x2C, size 0x4, align 4
    int16 m_parameterNodeIdx; // offset 0x30, size 0x2, align 2
    bool m_bIgnoreInvalidOptions; // offset 0x32, size 0x1, align 1
    bool m_bIsWorldSpaceTarget; // offset 0x33, size 0x1, align 1
    char _pad_0034[0x4]; // offset 0x34
};
