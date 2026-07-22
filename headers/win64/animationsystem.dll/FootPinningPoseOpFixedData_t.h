#pragma once

struct FootPinningPoseOpFixedData_t  // sizeof 0x30, align 0x8 (animgraphlib) {MGetKV3ClassDefaults}
{
    CUtlVector< FootFixedData_t > m_footInfo; // offset 0x0, size 0x18, align 8
    float32 m_flBlendTime; // offset 0x18, size 0x4, align 4
    float32 m_flLockBreakDistance; // offset 0x1C, size 0x4, align 4
    float32 m_flMaxLegTwist; // offset 0x20, size 0x4, align 4
    int32 m_nHipBoneIndex; // offset 0x24, size 0x4, align 4
    bool m_bApplyLegTwistLimits; // offset 0x28, size 0x1, align 1
    bool m_bApplyFootRotationLimits; // offset 0x29, size 0x1, align 1
    char _pad_002A[0x6]; // offset 0x2A
};
