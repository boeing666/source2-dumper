#pragma once

class CNmFootIKTask : public CNmPoseTask /*0x0*/  // sizeof 0x140, align 0x10 [vtable] (animlib)
{
public:
    char _pad_0000[0x70]; // offset 0x0
    int32 m_nLeftEffectorBoneIdx; // offset 0x70, size 0x4, align 4
    int32 m_nRightEffectorBoneIdx; // offset 0x74, size 0x4, align 4
    char _pad_0078[0x8]; // offset 0x78
    CTransform m_leftTargetTransform; // offset 0x80, size 0x20, align 16
    CTransform m_rightTargetTransform; // offset 0xA0, size 0x20, align 16
    int32 m_nLeftTargetBoneIdx; // offset 0xC0, size 0x4, align 4
    int32 m_nRightTargetBoneIdx; // offset 0xC4, size 0x4, align 4
    char _pad_00C8[0x8]; // offset 0xC8
    CNmTarget m_leftTarget; // offset 0xD0, size 0x30, align 16
    CNmTarget m_rightTarget; // offset 0x100, size 0x30, align 16
    NmIKBlendMode_t m_blendMode; // offset 0x130, size 0x1, align 1
    char _pad_0131[0x3]; // offset 0x131
    float32 m_flBlendWeight; // offset 0x134, size 0x4, align 4
    bool m_bIsTargetInWorldSpace; // offset 0x138, size 0x1, align 1
    bool m_bIsRunningFromDeserializedData; // offset 0x139, size 0x1, align 1
    char _pad_013A[0x6]; // offset 0x13A
};
