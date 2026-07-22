#pragma once

struct FootFixedData_t  // sizeof 0x50, align 0x10 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
    VectorAligned m_vToeOffset; // offset 0x0, size 0x10, align 16
    VectorAligned m_vHeelOffset; // offset 0x10, size 0x10, align 16
    int32 m_nTargetBoneIndex; // offset 0x20, size 0x4, align 4
    int32 m_nAnkleBoneIndex; // offset 0x24, size 0x4, align 4
    int32 m_nIKAnchorBoneIndex; // offset 0x28, size 0x4, align 4
    int32 m_ikChainIndex; // offset 0x2C, size 0x4, align 4
    float32 m_flMaxIKLength; // offset 0x30, size 0x4, align 4
    int32 m_nFootIndex; // offset 0x34, size 0x4, align 4
    int32 m_nTagIndex; // offset 0x38, size 0x4, align 4
    float32 m_flMaxRotationLeft; // offset 0x3C, size 0x4, align 4
    float32 m_flMaxRotationRight; // offset 0x40, size 0x4, align 4
    char _pad_0044[0xC]; // offset 0x44
};
