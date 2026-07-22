#pragma once

class CConstraintTarget  // sizeof 0x60, align 0x10 (modellib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    Quaternion m_qOffset; // offset 0x20, size 0x10, align 16
    Vector m_vOffset; // offset 0x30, size 0xC, align 4
    uint32 m_nBoneHash; // offset 0x3C, size 0x4, align 4
    CUtlString m_sName; // offset 0x40, size 0x8, align 8
    float32 m_flWeight; // offset 0x48, size 0x4, align 4
    char _pad_004C[0xD]; // offset 0x4C
    bool m_bIsAttachment; // offset 0x59, size 0x1, align 1
    char _pad_005A[0x6]; // offset 0x5A
};
