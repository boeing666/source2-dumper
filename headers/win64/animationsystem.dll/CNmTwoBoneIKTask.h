#pragma once

class CNmTwoBoneIKTask : public CNmPoseTask /*0x0*/  // sizeof 0xF0, align 0x10 [vtable] (animlib)
{
public:
    char _pad_0000[0x70]; // offset 0x0
    int32 m_nEffectorBoneIdx; // offset 0x70, size 0x4, align 4
    int32 m_nEffectorTargetBoneIdx; // offset 0x74, size 0x4, align 4
    char _pad_0078[0x8]; // offset 0x78
    CTransform m_targetTransform; // offset 0x80, size 0x20, align 16
    char _pad_00A0[0x50]; // offset 0xA0
};
