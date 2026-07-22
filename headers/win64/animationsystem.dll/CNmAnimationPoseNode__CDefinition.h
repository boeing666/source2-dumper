#pragma once

class CNmAnimationPoseNode::CDefinition : public CNmPoseNode::CDefinition /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 m_nPoseTimeValueNodeIdx; // offset 0x10, size 0x2, align 2
    int16 m_nDataSlotIdx; // offset 0x12, size 0x2, align 2
    Range_t m_inputTimeRemapRange; // offset 0x14, size 0x8, align 4
    float32 m_flUserSpecifiedTime; // offset 0x1C, size 0x4, align 4
    bool m_bUseFramesAsInput; // offset 0x20, size 0x1, align 1
    char _pad_0021[0x7]; // offset 0x21
};
