#pragma once

class CNmTwoBoneIKTask : public CNmPoseTask /*0x0*/  // sizeof 0xF0, align 0x10 [vtable] (animlib)
{
public:
    char _pad_0000[0x70]; // offset 0x0
    int32 m_nEffectorBoneIdx; // offset 0x70, size 0x4, align 4
    int32 m_nEffectorTargetBoneIdx; // offset 0x74, size 0x4, align 4
    char _pad_0078[0x8]; // offset 0x78
    CTransform m_targetTransform; // offset 0x80, size 0x20, align 16
    CNmTarget m_effectorTarget; // offset 0xA0, size 0x30, align 16
    NmIKBlendMode_t m_blendMode; // offset 0xD0, size 0x1, align 1
    char _pad_00D1[0x3]; // offset 0xD1
    float32 m_flBlendWeight; // offset 0xD4, size 0x4, align 4
    bool m_bIsTargetInWorldSpace; // offset 0xD8, size 0x1, align 1
    bool m_bIsRunningFromDeserializedData; // offset 0xD9, size 0x1, align 1
    char _pad_00DA[0x2]; // offset 0xDA
    float32 m_flChainRotationWeight; // offset 0xDC, size 0x4, align 4
    CGlobalSymbol m_debugEffectorBoneID; // offset 0xE0, size 0x8, align 8
    char _pad_00E8[0x8]; // offset 0xE8
};
