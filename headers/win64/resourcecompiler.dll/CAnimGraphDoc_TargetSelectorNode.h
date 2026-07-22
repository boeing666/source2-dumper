#pragma once

class CAnimGraphDoc_TargetSelectorNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x80, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CUtlVector< CTargetSelectorChild > m_children; // offset 0x40, size 0x18, align 8
    TargetWarpLinearRootMotionMode m_eLinearRootMotionMode; // offset 0x58, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    TargetSelectorAngleMode_t m_eAngleMode; // offset 0x5C, size 0x4, align 4 | MPropertyFriendlyName
    AnimParamID m_moveHeadingParamID; // offset 0x60, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    AnimParamID m_desiredMoveHeadingParamID; // offset 0x64, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    AnimParamID m_targetPositionParamID; // offset 0x68, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    bool m_bTargetPositionIsWorldSpace; // offset 0x6C, size 0x1, align 1 | MPropertyFriendlyName MPropertyAttrStateCallback
    char _pad_006D[0x3]; // offset 0x6D
    AnimParamID m_targetFacePositionParamID; // offset 0x70, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bTargetFacePositionIsWorldSpace; // offset 0x74, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bEnablePhaseMatching; // offset 0x75, size 0x1, align 1
    char _pad_0076[0x2]; // offset 0x76
    float32 m_flPhaseMatchingMaxRootMotionSkip; // offset 0x78, size 0x4, align 4
    char _pad_007C[0x4]; // offset 0x7C
};
