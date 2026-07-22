#pragma once

class CNmTwoBoneIKTask : public CNmPoseTask /*0x0*/  // sizeof 0xE0, align 0x10 [vtable] (animlib)
{
public:
    char _pad_0000[0x60]; // offset 0x0
    int32 m_nEffectorBoneIdx; // offset 0x60, size 0x4, align 4
    int32 m_nEffectorTargetBoneIdx; // offset 0x64, size 0x4, align 4
    char _pad_0068[0x8]; // offset 0x68
    CTransform m_targetTransform; // offset 0x70, size 0x20, align 16
    CNmTarget m_effectorTarget; // offset 0x90, size 0x30, align 16
    NmIKBlendMode_t m_blendMode; // offset 0xC0, size 0x1, align 1
    char _pad_00C1[0x3]; // offset 0xC1
    float32 m_flBlendWeight; // offset 0xC4, size 0x4, align 4
    bool m_bIsTargetInWorldSpace; // offset 0xC8, size 0x1, align 1
    bool m_bIsRunningFromDeserializedData; // offset 0xC9, size 0x1, align 1
    char _pad_00CA[0x2]; // offset 0xCA
    float32 m_flChainRotationWeight; // offset 0xCC, size 0x4, align 4
    CGlobalSymbol m_debugEffectorBoneID; // offset 0xD0, size 0x8, align 8
    char _pad_00D8[0x8]; // offset 0xD8
};
