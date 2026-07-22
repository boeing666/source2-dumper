#pragma once

class CNmChainLookatTask : public CNmPoseTask /*0x0*/  // sizeof 0x90, align 0x8 [vtable] (animlib)
{
public:
    char _pad_0000[0x58]; // offset 0x0
    int32 m_nChainEndBoneIdx; // offset 0x58, size 0x4, align 4
    int32 m_nNumBonesInChain; // offset 0x5C, size 0x4, align 4
    Vector m_chainForwardDir; // offset 0x60, size 0xC, align 4
    float32 m_flBlendWeight; // offset 0x6C, size 0x4, align 4
    float32 m_flHorizontalAngleLimitDegrees; // offset 0x70, size 0x4, align 4
    float32 m_flVerticalAngleLimitDegrees; // offset 0x74, size 0x4, align 4
    Vector m_lookatTarget; // offset 0x78, size 0xC, align 4
    bool m_bIsTargetInWorldSpace; // offset 0x84, size 0x1, align 1
    bool m_bIsRunningFromDeserializedData; // offset 0x85, size 0x1, align 1
    char _pad_0086[0x2]; // offset 0x86
    float32 m_flHorizontalAngleDegrees; // offset 0x88, size 0x4, align 4
    float32 m_flVerticalAngleDegrees; // offset 0x8C, size 0x4, align 4
};
