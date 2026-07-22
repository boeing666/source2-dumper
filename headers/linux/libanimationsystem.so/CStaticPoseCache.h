#pragma once

class CStaticPoseCache  // sizeof 0x30, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlVector< CCachedPose > m_poses; // offset 0x10, size 0x18, align 8
    int32 m_nBoneCount; // offset 0x28, size 0x4, align 4
    int32 m_nMorphCount; // offset 0x2C, size 0x4, align 4
};
