#pragma once

class CNmGraphDocTransitionNode : public CNmGraphDocResultNode /*0x0*/  // sizeof 0x120, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x108]; // offset 0x0
    float32 m_flDurationSeconds; // offset 0x108, size 0x4, align 4 | MPropertyGroupName
    bool m_bClampDurationToSource; // offset 0x10C, size 0x1, align 1 | MPropertyGroupName
    NmRootMotionBlendMode_t m_rootMotionBlend; // offset 0x10D, size 0x1, align 1 | MPropertyGroupName
    NmEasingOperation_t m_blendWeightEasing; // offset 0x10E, size 0x1, align 1 | MPropertyGroupName
    char _pad_010F[0x1]; // offset 0x10F
    float32 m_flBoneMaskBlendInTimePercentage; // offset 0x110, size 0x4, align 4 | MPropertyGroupName
    CNmGraphDocTransitionNode::TimeMatchMode_t m_timeMatchMode; // offset 0x114, size 0x4, align 4 | MPropertyGroupName
    float32 m_flTimeOffset; // offset 0x118, size 0x4, align 4 | MPropertyGroupName
    bool m_bCanBeForced; // offset 0x11C, size 0x1, align 1 | MPropertyGroupName
    char _pad_011D[0x3]; // offset 0x11D
};
