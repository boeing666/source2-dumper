#pragma once

struct RenderSkeletonBone_t  // sizeof 0x60, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
    CUtlString m_boneName; // offset 0x0, size 0x8, align 8
    CUtlString m_parentName; // offset 0x8, size 0x8, align 8
    matrix3x4_t m_invBindPose; // offset 0x10, size 0x30, align 4
    SkeletonBoneBounds_t m_bbox; // offset 0x40, size 0x18, align 4
    float32 m_flSphereRadius; // offset 0x58, size 0x4, align 4
    char _pad_005C[0x4]; // offset 0x5C
};
