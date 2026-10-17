#pragma once

class CNmGraphDocTargetOffsetNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x128, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x108]; // offset 0x0
    bool m_bIsBoneSpaceOffset; // offset 0x108, size 0x1, align 1
    char _pad_0109[0x3]; // offset 0x109
    QAngle m_rotationOffset; // offset 0x10C, size 0xC, align 4
    Vector m_translationOffset; // offset 0x118, size 0xC, align 4
    char _pad_0124[0x4]; // offset 0x124
};
