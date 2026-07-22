#pragma once

class CConstraintSlave  // sizeof 0x50, align 0x10 (modellib) {MGetKV3ClassDefaults}
{
public:
    Quaternion m_qBaseOrientation; // offset 0x0, size 0x10, align 16
    Vector m_vBasePosition; // offset 0x10, size 0xC, align 4
    uint32 m_nBoneHash; // offset 0x1C, size 0x4, align 4
    float32 m_flWeight; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
    CUtlString m_sName; // offset 0x28, size 0x8, align 8
    char _pad_0030[0x20]; // offset 0x30
};
