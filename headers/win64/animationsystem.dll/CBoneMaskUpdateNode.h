#pragma once

class CBoneMaskUpdateNode : public CBinaryUpdateNode /*0x0*/  // sizeof 0xB0, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x94]; // offset 0x0
    int32 m_nWeightListIndex; // offset 0x94, size 0x4, align 4
    float32 m_flRootMotionBlend; // offset 0x98, size 0x4, align 4
    BoneMaskBlendSpace m_blendSpace; // offset 0x9C, size 0x4, align 4
    BinaryNodeChildOption m_footMotionTiming; // offset 0xA0, size 0x4, align 4
    bool m_bUseBlendScale; // offset 0xA4, size 0x1, align 1
    char _pad_00A5[0x3]; // offset 0xA5
    AnimValueSource m_blendValueSource; // offset 0xA8, size 0x4, align 4
    CAnimParamHandle m_hBlendParameter; // offset 0xAC, size 0x2, align 1
    char _pad_00AE[0x2]; // offset 0xAE
};
