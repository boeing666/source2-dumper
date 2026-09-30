#pragma once

class CNmBoneMaskSelectorNode::CDefinition : public CNmBoneMaskValueNode::CDefinition /*0x0*/  // sizeof 0x78, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 m_defaultMaskNodeIdx; // offset 0x10, size 0x2, align 2
    int16 m_parameterValueNodeIdx; // offset 0x12, size 0x2, align 2
    bool m_bSwitchDynamically; // offset 0x14, size 0x1, align 1
    char _pad_0015[0x3]; // offset 0x15
    CUtlLeanVectorFixedGrowable< int16, 8 > m_maskNodeIndices; // offset 0x18, size 0x18, align 8
    CUtlLeanVectorFixedGrowable< CGlobalSymbol, 7 > m_parameterValues; // offset 0x30, size 0x40, align 8
    float32 m_flBlendTimeSeconds; // offset 0x70, size 0x4, align 4
    char _pad_0074[0x4]; // offset 0x74
};
