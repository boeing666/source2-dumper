#pragma once

class CNmChainSolverTask : public CNmPoseTask /*0x0*/  // sizeof 0x130, align 0x10 [vtable] (animlib)
{
public:
    char _pad_0000[0x58]; // offset 0x0
    int32 m_nEffectorBoneIdx; // offset 0x58, size 0x4, align 4
    int32 m_nEffectorTargetBoneIdx; // offset 0x5C, size 0x4, align 4
    CTransform m_targetTransform; // offset 0x60, size 0x20, align 16
    int32 m_nNumBonesInChain; // offset 0x80, size 0x4, align 4
    char _pad_0084[0xC]; // offset 0x84
    CNmTarget m_effectorTarget; // offset 0x90, size 0x30, align 16
    NmIKBlendMode_t m_blendMode; // offset 0xC0, size 0x1, align 1
    char _pad_00C1[0x3]; // offset 0xC1
    float32 m_flBlendWeight; // offset 0xC4, size 0x4, align 4
    bool m_bIsTargetInWorldSpace; // offset 0xC8, size 0x1, align 1
    bool m_bIsRunningFromDeserializedData; // offset 0xC9, size 0x1, align 1
    char _pad_00CA[0x6]; // offset 0xCA
    CGlobalSymbol m_debugEffectorBoneID; // offset 0xD0, size 0x8, align 8
    char _pad_00D8[0x8]; // offset 0xD8
    CTransform m_chainStartTransformMS; // offset 0xE0, size 0x20, align 16
    CTransform m_debugRequestedTargetTransformMS; // offset 0x100, size 0x20, align 16
    float32 m_debugTotalChainLength; // offset 0x120, size 0x4, align 4
    char _pad_0124[0xC]; // offset 0x124
};
