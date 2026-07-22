#pragma once

class CMotionMatchingUpdateNode : public CLeafUpdateNode /*0x0*/  // sizeof 0x148, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x58]; // offset 0x0
    CMotionDataSet m_dataSet; // offset 0x58, size 0x20, align 8
    CUtlVector< CSmartPtr< CMotionMetricEvaluator > > m_metrics; // offset 0x78, size 0x18, align 8
    CUtlVector< float32 > m_weights; // offset 0x90, size 0x18, align 8
    char _pad_00A8[0x38]; // offset 0xA8
    bool m_bSearchEveryTick; // offset 0xE0, size 0x1, align 1
    char _pad_00E1[0x3]; // offset 0xE1
    float32 m_flSearchInterval; // offset 0xE4, size 0x4, align 4
    bool m_bSearchWhenClipEnds; // offset 0xE8, size 0x1, align 1
    bool m_bSearchWhenGoalChanges; // offset 0xE9, size 0x1, align 1
    char _pad_00EA[0x2]; // offset 0xEA
    CBlendCurve m_blendCurve; // offset 0xEC, size 0x8, align 4
    float32 m_flSampleRate; // offset 0xF4, size 0x4, align 4
    float32 m_flBlendTime; // offset 0xF8, size 0x4, align 4
    bool m_bLockClipWhenWaning; // offset 0xFC, size 0x1, align 1
    char _pad_00FD[0x3]; // offset 0xFD
    float32 m_flSelectionThreshold; // offset 0x100, size 0x4, align 4
    float32 m_flReselectionTimeWindow; // offset 0x104, size 0x4, align 4
    bool m_bEnableRotationCorrection; // offset 0x108, size 0x1, align 1
    bool m_bGoalAssist; // offset 0x109, size 0x1, align 1
    char _pad_010A[0x2]; // offset 0x10A
    float32 m_flGoalAssistDistance; // offset 0x10C, size 0x4, align 4
    float32 m_flGoalAssistTolerance; // offset 0x110, size 0x4, align 4
    char _pad_0114[0x4]; // offset 0x114
    CAnimInputDamping m_distanceScale_Damping; // offset 0x118, size 0x18, align 8
    float32 m_flDistanceScale_OuterRadius; // offset 0x130, size 0x4, align 4
    float32 m_flDistanceScale_InnerRadius; // offset 0x134, size 0x4, align 4
    float32 m_flDistanceScale_MaxScale; // offset 0x138, size 0x4, align 4
    float32 m_flDistanceScale_MinScale; // offset 0x13C, size 0x4, align 4
    bool m_bEnableDistanceScaling; // offset 0x140, size 0x1, align 1
    char _pad_0141[0x7]; // offset 0x141
};
