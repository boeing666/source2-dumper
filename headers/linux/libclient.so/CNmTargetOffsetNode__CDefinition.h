#pragma once

class CNmTargetOffsetNode::CDefinition : public CNmTargetValueNode::CDefinition /*0x0*/  // sizeof 0x30, align 0x10 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_nInputValueNodeIdx; // offset 0xA, size 0x2, align 2
    bool m_bIsBoneSpaceOffset; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
    Quaternion m_rotationOffset; // offset 0x10, size 0x10, align 16
    Vector m_translationOffset; // offset 0x20, size 0xC, align 4
    char _pad_002C[0x4]; // offset 0x2C
};
