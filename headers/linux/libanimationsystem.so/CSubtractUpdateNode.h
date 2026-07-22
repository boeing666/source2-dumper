#pragma once

class CSubtractUpdateNode : public CBinaryUpdateNode /*0x0*/  // sizeof 0x98, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x90]; // offset 0x0
    BinaryNodeChildOption m_footMotionTiming; // offset 0x90, size 0x4, align 4
    bool m_bApplyToFootMotion; // offset 0x94, size 0x1, align 1
    bool m_bApplyChannelsSeparately; // offset 0x95, size 0x1, align 1
    bool m_bUseModelSpace; // offset 0x96, size 0x1, align 1
    char _pad_0097[0x1]; // offset 0x97
};
