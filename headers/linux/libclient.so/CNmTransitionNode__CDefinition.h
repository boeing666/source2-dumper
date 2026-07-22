#pragma once

class CNmTransitionNode::CDefinition : public CNmPoseNode::CDefinition /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_nTargetStateNodeIdx; // offset 0xA, size 0x2, align 2
    int16 m_nDurationOverrideNodeIdx; // offset 0xC, size 0x2, align 2
    int16 m_timeOffsetOverrideNodeIdx; // offset 0xE, size 0x2, align 2
    int16 m_startBoneMaskNodeIdx; // offset 0x10, size 0x2, align 2
    char _pad_0012[0x2]; // offset 0x12
    float32 m_flDuration; // offset 0x14, size 0x4, align 4
    NmPercent_t m_boneMaskBlendInTimePercentage; // offset 0x18, size 0x4, align 4
    float32 m_flTimeOffset; // offset 0x1C, size 0x4, align 4
    CNmBitFlags m_transitionOptions; // offset 0x20, size 0x4, align 4
    int16 m_targetSyncIDNodeIdx; // offset 0x24, size 0x2, align 2
    NmEasingOperation_t m_blendWeightEasing; // offset 0x26, size 0x1, align 1
    NmRootMotionBlendMode_t m_rootMotionBlend; // offset 0x27, size 0x1, align 1
};
