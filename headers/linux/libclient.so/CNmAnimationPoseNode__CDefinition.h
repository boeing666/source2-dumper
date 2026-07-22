#pragma once

class CNmAnimationPoseNode::CDefinition : public CNmPoseNode::CDefinition /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_nPoseTimeValueNodeIdx; // offset 0xA, size 0x2, align 2
    int16 m_nDataSlotIdx; // offset 0xC, size 0x2, align 2
    char _pad_000E[0x2]; // offset 0xE
    Range_t m_inputTimeRemapRange; // offset 0x10, size 0x8, align 4
    float32 m_flUserSpecifiedTime; // offset 0x18, size 0x4, align 4
    bool m_bUseFramesAsInput; // offset 0x1C, size 0x1, align 1
    char _pad_001D[0x3]; // offset 0x1D
};
