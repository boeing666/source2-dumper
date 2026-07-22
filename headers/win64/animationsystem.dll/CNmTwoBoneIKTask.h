#pragma once

class CNmTwoBoneIKTask : public CNmPoseTask /*0x0*/  // sizeof 0xD0, align 0x10 [vtable] (animlib)
{
public:
    char _pad_0000[0x58]; // offset 0x0
    int32 m_nEffectorBoneIdx; // offset 0x58, size 0x4, align 4
    int32 m_nEffectorTargetBoneIdx; // offset 0x5C, size 0x4, align 4
    CTransform m_targetTransform; // offset 0x60, size 0x20, align 16
    CNmTarget m_effectorTarget; // offset 0x80, size 0x30, align 16
    NmIKBlendMode_t m_blendMode; // offset 0xB0, size 0x1, align 1
    char _pad_00B1[0x3]; // offset 0xB1
    float32 m_flBlendWeight; // offset 0xB4, size 0x4, align 4
    bool m_bIsTargetInWorldSpace; // offset 0xB8, size 0x1, align 1
    bool m_bIsRunningFromDeserializedData; // offset 0xB9, size 0x1, align 1
    char _pad_00BA[0x2]; // offset 0xBA
    float32 m_flReferencePoseTwistWeight; // offset 0xBC, size 0x4, align 4
    CGlobalSymbol m_debugEffectorBoneID; // offset 0xC0, size 0x8, align 8
    char _pad_00C8[0x8]; // offset 0xC8
};
