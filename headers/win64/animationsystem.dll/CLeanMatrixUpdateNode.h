#pragma once

class CLeanMatrixUpdateNode : public CLeafUpdateNode /*0x0*/  // sizeof 0xF0, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x5C]; // offset 0x0
    int32[3][3] m_frameCorners; // offset 0x5C, size 0x24, align 4
    CPoseHandle[9] m_poses; // offset 0x80, size 0x24, align 2
    char _pad_00A4[0x4]; // offset 0xA4
    CAnimInputDamping m_damping; // offset 0xA8, size 0x18, align 8
    AnimVectorSource m_blendSource; // offset 0xC0, size 0x4, align 4
    CAnimParamHandle m_paramIndex; // offset 0xC4, size 0x2, align 1
    char _pad_00C6[0x2]; // offset 0xC6
    Vector m_verticalAxis; // offset 0xC8, size 0xC, align 4
    Vector m_horizontalAxis; // offset 0xD4, size 0xC, align 4
    HSequence m_hSequence; // offset 0xE0, size 0x4, align 255
    float32 m_flMaxValue; // offset 0xE4, size 0x4, align 4
    int32 m_nSequenceMaxFrame; // offset 0xE8, size 0x4, align 4
    char _pad_00EC[0x4]; // offset 0xEC
};
