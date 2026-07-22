#pragma once

struct FollowTargetOpFixedSettings_t  // sizeof 0x10, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
    int32 m_boneIndex; // offset 0x0, size 0x4, align 4
    bool m_bBoneTarget; // offset 0x4, size 0x1, align 1
    char _pad_0005[0x3]; // offset 0x5
    int32 m_boneTargetIndex; // offset 0x8, size 0x4, align 4
    bool m_bWorldCoodinateTarget; // offset 0xC, size 0x1, align 1
    bool m_bMatchTargetOrientation; // offset 0xD, size 0x1, align 1
    char _pad_000E[0x2]; // offset 0xE
};
