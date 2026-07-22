#pragma once

class CRenderSkeleton  // sizeof 0x50, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< RenderSkeletonBone_t > m_bones; // offset 0x0, size 0x18, align 8
    char _pad_0018[0x18]; // offset 0x18
    CUtlVector< int32 > m_boneParents; // offset 0x30, size 0x18, align 8
    int32 m_nBoneWeightCount; // offset 0x48, size 0x4, align 4
    char _pad_004C[0x4]; // offset 0x4C
};
