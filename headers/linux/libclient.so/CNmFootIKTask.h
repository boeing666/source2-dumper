#pragma once

class CNmFootIKTask : public CNmPoseTask /*0x0*/  // sizeof 0x130, align 0x10 [vtable] (animlib)
{
public:
    char _pad_0000[0x60]; // offset 0x0
    int32 m_nLeftEffectorBoneIdx; // offset 0x60, size 0x4, align 4
    int32 m_nRightEffectorBoneIdx; // offset 0x64, size 0x4, align 4
    char _pad_0068[0x8]; // offset 0x68
    CTransform m_leftTargetTransform; // offset 0x70, size 0x20, align 16
    CTransform m_rightTargetTransform; // offset 0x90, size 0x20, align 16
    int32 m_nLeftTargetBoneIdx; // offset 0xB0, size 0x4, align 4
    int32 m_nRightTargetBoneIdx; // offset 0xB4, size 0x4, align 4
    char _pad_00B8[0x8]; // offset 0xB8
    CNmTarget m_leftTarget; // offset 0xC0, size 0x30, align 16
    CNmTarget m_rightTarget; // offset 0xF0, size 0x30, align 16
    NmIKBlendMode_t m_blendMode; // offset 0x120, size 0x1, align 1
    char _pad_0121[0x3]; // offset 0x121
    float32 m_flBlendWeight; // offset 0x124, size 0x4, align 4
    bool m_bIsTargetInWorldSpace; // offset 0x128, size 0x1, align 1
    bool m_bIsRunningFromDeserializedData; // offset 0x129, size 0x1, align 1
    char _pad_012A[0x6]; // offset 0x12A
};
