#pragma once

class CNmTwoBoneIKTask : public CNmPoseTask /*0x0*/  // sizeof 0xE0, align 0x10 [vtable] (animlib)
{
public:
    char _pad_0000[0x60]; // offset 0x0
    int32 m_nEffectorBoneIdx; // offset 0x60, size 0x4, align 4
    int32 m_nEffectorTargetBoneIdx; // offset 0x64, size 0x4, align 4
    char _pad_0068[0x8]; // offset 0x68
    CTransform m_targetTransform; // offset 0x70, size 0x20, align 16
    char _pad_0090[0x50]; // offset 0x90
};
