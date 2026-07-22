#pragma once

struct SkeletonAnimCapture_t  // sizeof 0xC0, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
    CEntityIndex m_nEntIndex; // offset 0x0, size 0x4, align 4
    CEntityIndex m_nEntParent; // offset 0x4, size 0x4, align 4
    CUtlVector< CEntityIndex > m_ImportedCollision; // offset 0x8, size 0x18, align 8
    CUtlString m_ModelName; // offset 0x20, size 0x8, align 8
    CUtlString m_CaptureName; // offset 0x28, size 0x8, align 8
    CUtlVector< SkeletonAnimCapture_t::Bone_t > m_ModelBindPose; // offset 0x30, size 0x18, align 8
    CUtlVector< SkeletonAnimCapture_t::Bone_t > m_FeModelInitPose; // offset 0x48, size 0x18, align 8
    int32 m_nFlexControllers; // offset 0x60, size 0x4, align 4
    bool m_bPredicted; // offset 0x64, size 0x1, align 1
    char _pad_0065[0x43]; // offset 0x65
    CUtlVector< SkeletonAnimCapture_t::Frame_t > m_Frames; // offset 0xA8, size 0x18, align 8
};
