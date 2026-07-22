#pragma once

class CNmBoneMaskBlendNode::CDefinition : public CNmBoneMaskValueNode::CDefinition /*0x0*/  // sizeof 0x10, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_nSourceMaskNodeIdx; // offset 0xA, size 0x2, align 2
    int16 m_nTargetMaskNodeIdx; // offset 0xC, size 0x2, align 2
    int16 m_nBlendWeightValueNodeIdx; // offset 0xE, size 0x2, align 2
};
