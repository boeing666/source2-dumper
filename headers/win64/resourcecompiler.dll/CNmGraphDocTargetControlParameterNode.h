#pragma once

class CNmGraphDocTargetControlParameterNode : public CNmGraphDocControlParameterNode /*0x0*/  // sizeof 0x148, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x120]; // offset 0x0
    bool m_bIsSet; // offset 0x120, size 0x1, align 1
    bool m_bIsBoneID; // offset 0x121, size 0x1, align 1
    char _pad_0122[0x2]; // offset 0x122
    QAngle m_targetOrientation; // offset 0x124, size 0xC, align 4
    Vector m_targetPosition; // offset 0x130, size 0xC, align 4
    char _pad_013C[0x4]; // offset 0x13C
    CGlobalSymbol m_previewStartBoneID; // offset 0x140, size 0x8, align 8
};
