#pragma once

class CNmGraphDocTransitionNode : public CNmGraphDocResultNode /*0x0*/  // sizeof 0x128, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x110]; // offset 0x0
    float32 m_flDurationSeconds; // offset 0x110, size 0x4, align 4 | MPropertyGroupName
    bool m_bClampDurationToSource; // offset 0x114, size 0x1, align 1 | MPropertyGroupName
    NmRootMotionBlendMode_t m_rootMotionBlend; // offset 0x115, size 0x1, align 1 | MPropertyGroupName
    NmEasingOperation_t m_blendWeightEasing; // offset 0x116, size 0x1, align 1 | MPropertyGroupName
    char _pad_0117[0x1]; // offset 0x117
    float32 m_flBoneMaskBlendInTimePercentage; // offset 0x118, size 0x4, align 4 | MPropertyGroupName
    CNmGraphDocTransitionNode::TimeMatchMode_t m_timeMatchMode; // offset 0x11C, size 0x4, align 4 | MPropertyGroupName
    float32 m_flTimeOffset; // offset 0x120, size 0x4, align 4 | MPropertyGroupName
    bool m_bCanBeForced; // offset 0x124, size 0x1, align 1 | MPropertyGroupName
    char _pad_0125[0x3]; // offset 0x125
};
