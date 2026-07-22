#pragma once

class CFeNamedJiggleBone  // sizeof 0xD0, align 0x10 (physicslib) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_strParentBone; // offset 0x0, size 0x8, align 8
    char _pad_0008[0x8]; // offset 0x8
    CTransform m_transform; // offset 0x10, size 0x20, align 16
    uint32 m_nJiggleParent; // offset 0x30, size 0x4, align 4
    CFeJiggleBone m_jiggleBone; // offset 0x34, size 0x9C, align 4
};
