#pragma once

struct AimCameraOpFixedSettings_t  // sizeof 0x30, align 0x8 (animgraphlib) {MGetKV3ClassDefaults}
{
    int32 m_nChainIndex; // offset 0x0, size 0x4, align 4
    int32 m_nCameraJointIndex; // offset 0x4, size 0x4, align 4
    int32 m_nPelvisJointIndex; // offset 0x8, size 0x4, align 4
    int32 m_nClavicleLeftJointIndex; // offset 0xC, size 0x4, align 4
    int32 m_nClavicleRightJointIndex; // offset 0x10, size 0x4, align 4
    int32 m_nDepenetrationJointIndex; // offset 0x14, size 0x4, align 4
    CUtlVector< int32 > m_propJoints; // offset 0x18, size 0x18, align 8
};
