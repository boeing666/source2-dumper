#pragma once

class FootLockPoseOpFixedSettings  // sizeof 0x68, align 0x8 (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< FootFixedData_t > m_footInfo; // offset 0x0, size 0x18, align 8
    CAnimInputDamping m_hipDampingSettings; // offset 0x18, size 0x18, align 8
    int32 m_nHipBoneIndex; // offset 0x30, size 0x4, align 4
    IKSolverType m_ikSolverType; // offset 0x34, size 0x4, align 4
    bool m_bApplyTilt; // offset 0x38, size 0x1, align 1
    bool m_bApplyHipDrop; // offset 0x39, size 0x1, align 1
    bool m_bAlwaysUseFallbackHinge; // offset 0x3A, size 0x1, align 1
    bool m_bApplyFootRotationLimits; // offset 0x3B, size 0x1, align 1
    bool m_bApplyLegTwistLimits; // offset 0x3C, size 0x1, align 1
    char _pad_003D[0x3]; // offset 0x3D
    float32 m_flMaxFootHeight; // offset 0x40, size 0x4, align 4
    float32 m_flExtensionScale; // offset 0x44, size 0x4, align 4
    float32 m_flMaxLegTwist; // offset 0x48, size 0x4, align 4
    bool m_bEnableLockBreaking; // offset 0x4C, size 0x1, align 1
    char _pad_004D[0x3]; // offset 0x4D
    float32 m_flLockBreakTolerance; // offset 0x50, size 0x4, align 4
    float32 m_flLockBlendTime; // offset 0x54, size 0x4, align 4
    bool m_bEnableStretching; // offset 0x58, size 0x1, align 1
    char _pad_0059[0x3]; // offset 0x59
    float32 m_flMaxStretchAmount; // offset 0x5C, size 0x4, align 4
    float32 m_flStretchExtensionScale; // offset 0x60, size 0x4, align 4
    char _pad_0064[0x4]; // offset 0x64
};
