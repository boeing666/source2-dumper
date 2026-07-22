#pragma once

class CNmBoneMaskSelectorNode::CDefinition : public CNmBoneMaskValueNode::CDefinition /*0x0*/  // sizeof 0x70, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_defaultMaskNodeIdx; // offset 0xA, size 0x2, align 2
    int16 m_parameterValueNodeIdx; // offset 0xC, size 0x2, align 2
    bool m_bSwitchDynamically; // offset 0xE, size 0x1, align 1
    char _pad_000F[0x1]; // offset 0xF
    CUtlLeanVectorFixedGrowable< int16, 8 > m_maskNodeIndices; // offset 0x10, size 0x18, align 8
    CUtlLeanVectorFixedGrowable< CGlobalSymbol, 7 > m_parameterValues; // offset 0x28, size 0x40, align 8
    float32 m_flBlendTimeSeconds; // offset 0x68, size 0x4, align 4
    char _pad_006C[0x4]; // offset 0x6C
};
