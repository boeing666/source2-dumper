#pragma once

class CAnimGraphDoc_TargetWarpNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x80, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x40, size 0x8, align 4 | MPropertySuppressField
    TargetWarpLinearRootMotionMode m_eLinearRootMotionMode; // offset 0x48, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    TargetWarpAngleMode_t m_eAngleMode; // offset 0x4C, size 0x4, align 4 | MPropertyFriendlyName
    TargetWarpCorrectionMethod m_eCorrectionMethod; // offset 0x50, size 0x4, align 4 | MPropertyFriendlyName
    TargetWarpTimingMethod m_eTargetWarpTimingMethod; // offset 0x54, size 0x4, align 4 | MPropertyFriendlyName
    AnimParamID m_moveHeadingParamID; // offset 0x58, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    AnimParamID m_desiredMoveHeadingParamID; // offset 0x5C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    AnimParamID m_targetPositionParamID; // offset 0x60, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    bool m_bTargetPositionIsWorldSpace; // offset 0x64, size 0x1, align 1 | MPropertyFriendlyName MPropertyAttrStateCallback
    char _pad_0065[0x3]; // offset 0x65
    AnimParamID m_targetFacePositionParamID; // offset 0x68, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bTargetFacePositionIsWorldSpace; // offset 0x6C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_006D[0x3]; // offset 0x6D
    AnimParamID m_targetUpVectorParamID; // offset 0x70, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bOnlyWarpWhenTagIsFound; // offset 0x74, size 0x1, align 1 | MPropertyFriendlyName MPropertyDescription
    bool m_bWarpOrientationDuringTranslation; // offset 0x75, size 0x1, align 1 | MPropertyFriendlyName MPropertyDescription
    char _pad_0076[0x2]; // offset 0x76
    float32 m_flMaxAngle; // offset 0x78, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    bool m_bWarpAroundCenter; // offset 0x7C, size 0x1, align 1 | MPropertyFriendlyName MPropertyDescription
    char _pad_007D[0x3]; // offset 0x7D
};
