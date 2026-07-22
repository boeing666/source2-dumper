#pragma once

class CSubtractUpdateNode : public CBinaryUpdateNode /*0x0*/  // sizeof 0xA0, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x94]; // offset 0x0
    BinaryNodeChildOption m_footMotionTiming; // offset 0x94, size 0x4, align 4
    bool m_bApplyToFootMotion; // offset 0x98, size 0x1, align 1
    bool m_bApplyChannelsSeparately; // offset 0x99, size 0x1, align 1
    bool m_bUseModelSpace; // offset 0x9A, size 0x1, align 1
    char _pad_009B[0x5]; // offset 0x9B
};
