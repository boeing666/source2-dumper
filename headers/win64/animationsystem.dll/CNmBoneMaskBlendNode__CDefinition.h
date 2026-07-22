#pragma once

class CNmBoneMaskBlendNode::CDefinition : public CNmBoneMaskValueNode::CDefinition /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 m_nSourceMaskNodeIdx; // offset 0x10, size 0x2, align 2
    int16 m_nTargetMaskNodeIdx; // offset 0x12, size 0x2, align 2
    int16 m_nBlendWeightValueNodeIdx; // offset 0x14, size 0x2, align 2
    char _pad_0016[0x2]; // offset 0x16
};
