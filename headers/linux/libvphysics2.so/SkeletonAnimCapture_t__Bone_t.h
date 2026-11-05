#pragma once

struct SkeletonAnimCapture_t::Bone_t  // sizeof 0x40, align 0x10 (modellib) {MGetKV3ClassDefaults}
{
    CUtlString m_Name; // offset 0x0, size 0x8, align 8
    char _pad_0008[0x8]; // offset 0x8
    CTransform m_BindPose; // offset 0x10, size 0x20, align 16
    int32 m_nParent; // offset 0x30, size 0x4, align 4
    char _pad_0034[0xC]; // offset 0x34
};
