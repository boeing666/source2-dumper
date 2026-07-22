#pragma once

class CTargetWarpUpdateNode : public CUnaryUpdateNode /*0x0*/  // sizeof 0x98, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x74]; // offset 0x0
    TargetWarpAngleMode_t m_eAngleMode; // offset 0x74, size 0x4, align 4
    CAnimParamHandle m_hTargetPositionParameter; // offset 0x78, size 0x2, align 1
    CAnimParamHandle m_hTargetUpVectorParameter; // offset 0x7A, size 0x2, align 1
    CAnimParamHandle m_hTargetFacePositionParameter; // offset 0x7C, size 0x2, align 1
    CAnimParamHandle m_hMoveHeadingParameter; // offset 0x7E, size 0x2, align 1
    CAnimParamHandle m_hDesiredMoveHeadingParameter; // offset 0x80, size 0x2, align 1
    char _pad_0082[0x2]; // offset 0x82
    TargetWarpCorrectionMethod m_eCorrectionMethod; // offset 0x84, size 0x4, align 4
    TargetWarpTimingMethod m_eTargetWarpTimingMethod; // offset 0x88, size 0x4, align 4
    bool m_bTargetFacePositionIsWorldSpace; // offset 0x8C, size 0x1, align 1
    bool m_bTargetPositionIsWorldSpace; // offset 0x8D, size 0x1, align 1
    bool m_bOnlyWarpWhenTagIsFound; // offset 0x8E, size 0x1, align 1
    bool m_bWarpOrientationDuringTranslation; // offset 0x8F, size 0x1, align 1
    bool m_bWarpAroundCenter; // offset 0x90, size 0x1, align 1
    char _pad_0091[0x3]; // offset 0x91
    float32 m_flMaxAngle; // offset 0x94, size 0x4, align 4
};
