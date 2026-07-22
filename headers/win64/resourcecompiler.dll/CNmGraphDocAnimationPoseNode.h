#pragma once

class CNmGraphDocAnimationPoseNode : public CNmGraphDocVariationDataNode /*0x0*/  // sizeof 0x210, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x200]; // offset 0x0
    Range_t m_inputTimeRemapRange; // offset 0x200, size 0x8, align 4 | MPropertyAttributeEditor
    float32 m_fixedTimeValue; // offset 0x208, size 0x4, align 4
    bool m_useFramesAsInput; // offset 0x20C, size 0x1, align 1
    char _pad_020D[0x3]; // offset 0x20D
};
