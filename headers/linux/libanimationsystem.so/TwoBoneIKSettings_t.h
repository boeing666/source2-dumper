#pragma once

struct TwoBoneIKSettings_t  // sizeof 0x160, align 0x10 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
    IkEndEffectorType m_endEffectorType; // offset 0x0, size 0x4, align 4
    char _pad_0004[0xC]; // offset 0x4
    CAnimAttachment m_endEffectorAttachment; // offset 0x10, size 0x80, align 16
    IkTargetType m_targetType; // offset 0x90, size 0x4, align 4
    char _pad_0094[0xC]; // offset 0x94
    CAnimAttachment m_targetAttachment; // offset 0xA0, size 0x80, align 16
    int32 m_targetBoneIndex; // offset 0x120, size 0x4, align 4
    CAnimParamHandle m_hPositionParam; // offset 0x124, size 0x2, align 1
    CAnimParamHandle m_hRotationParam; // offset 0x126, size 0x2, align 1
    bool m_bAlwaysUseFallbackHinge; // offset 0x128, size 0x1, align 1
    char _pad_0129[0x7]; // offset 0x129
    VectorAligned m_vLsFallbackHingeAxis; // offset 0x130, size 0x10, align 16
    int32 m_nFixedBoneIndex; // offset 0x140, size 0x4, align 4
    int32 m_nMiddleBoneIndex; // offset 0x144, size 0x4, align 4
    int32 m_nEndBoneIndex; // offset 0x148, size 0x4, align 4
    bool m_bMatchTargetOrientation; // offset 0x14C, size 0x1, align 1
    bool m_bConstrainTwist; // offset 0x14D, size 0x1, align 1
    char _pad_014E[0x2]; // offset 0x14E
    float32 m_flMaxTwist; // offset 0x150, size 0x4, align 4
    char _pad_0154[0xC]; // offset 0x154
};
