#pragma once

class CFootLockUpdateNode : public CUnaryUpdateNode /*0x0*/  // sizeof 0x158, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    FootLockPoseOpFixedSettings m_opFixedSettings; // offset 0x70, size 0x68, align 8
    char _pad_00D8[0x8]; // offset 0xD8
    CUtlVector< FootFixedSettings > m_footSettings; // offset 0xE0, size 0x18, align 8
    CAnimInputDamping m_hipShiftDamping; // offset 0xF8, size 0x18, align 8
    CAnimInputDamping m_rootHeightDamping; // offset 0x110, size 0x18, align 8
    float32 m_flStrideCurveScale; // offset 0x128, size 0x4, align 4
    float32 m_flStrideCurveLimitScale; // offset 0x12C, size 0x4, align 4
    float32 m_flStepHeightIncreaseScale; // offset 0x130, size 0x4, align 4
    float32 m_flStepHeightDecreaseScale; // offset 0x134, size 0x4, align 4
    float32 m_flHipShiftScale; // offset 0x138, size 0x4, align 4
    float32 m_flBlendTime; // offset 0x13C, size 0x4, align 4
    float32 m_flMaxRootHeightOffset; // offset 0x140, size 0x4, align 4
    float32 m_flMinRootHeightOffset; // offset 0x144, size 0x4, align 4
    float32 m_flTiltPlanePitchSpringStrength; // offset 0x148, size 0x4, align 4
    float32 m_flTiltPlaneRollSpringStrength; // offset 0x14C, size 0x4, align 4
    bool m_bApplyFootRotationLimits; // offset 0x150, size 0x1, align 1
    bool m_bApplyHipShift; // offset 0x151, size 0x1, align 1
    bool m_bModulateStepHeight; // offset 0x152, size 0x1, align 1
    bool m_bResetChild; // offset 0x153, size 0x1, align 1
    bool m_bEnableVerticalCurvedPaths; // offset 0x154, size 0x1, align 1
    bool m_bEnableRootHeightDamping; // offset 0x155, size 0x1, align 1
    char _pad_0156[0x2]; // offset 0x156
};
