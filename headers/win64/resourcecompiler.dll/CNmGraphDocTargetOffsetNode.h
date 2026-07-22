#pragma once

class CNmGraphDocTargetOffsetNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x120, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x100]; // offset 0x0
    bool m_bIsBoneSpaceOffset; // offset 0x100, size 0x1, align 1
    char _pad_0101[0x3]; // offset 0x101
    QAngle m_rotationOffset; // offset 0x104, size 0xC, align 4
    Vector m_translationOffset; // offset 0x110, size 0xC, align 4
    char _pad_011C[0x4]; // offset 0x11C
};
