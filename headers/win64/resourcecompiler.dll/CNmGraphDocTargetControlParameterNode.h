#pragma once

class CNmGraphDocTargetControlParameterNode : public CNmGraphDocControlParameterNode /*0x0*/  // sizeof 0x140, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x118]; // offset 0x0
    bool m_bIsSet; // offset 0x118, size 0x1, align 1
    bool m_bIsBoneID; // offset 0x119, size 0x1, align 1
    char _pad_011A[0x2]; // offset 0x11A
    QAngle m_targetOrientation; // offset 0x11C, size 0xC, align 4
    Vector m_targetPosition; // offset 0x128, size 0xC, align 4
    char _pad_0134[0x4]; // offset 0x134
    CGlobalSymbol m_previewStartBoneID; // offset 0x138, size 0x8, align 8
};
