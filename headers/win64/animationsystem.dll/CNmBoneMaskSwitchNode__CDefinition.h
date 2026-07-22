#pragma once

class CNmBoneMaskSwitchNode::CDefinition : public CNmBoneMaskValueNode::CDefinition /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 m_nSwitchValueNodeIdx; // offset 0x10, size 0x2, align 2
    int16 m_nTrueValueNodeIdx; // offset 0x12, size 0x2, align 2
    int16 m_nFalseValueNodeIdx; // offset 0x14, size 0x2, align 2
    char _pad_0016[0x2]; // offset 0x16
    float32 m_flBlendTimeSeconds; // offset 0x18, size 0x4, align 4
    bool m_bSwitchDynamically; // offset 0x1C, size 0x1, align 1
    char _pad_001D[0x3]; // offset 0x1D
};
