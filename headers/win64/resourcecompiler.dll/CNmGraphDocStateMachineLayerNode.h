#pragma once

class CNmGraphDocStateMachineLayerNode : public CNmGraphDocLayerBaseNode /*0x0*/  // sizeof 0x108, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x100]; // offset 0x0
    bool m_isSynchronized; // offset 0x100, size 0x1, align 1
    bool m_ignoreEvents; // offset 0x101, size 0x1, align 1
    NmPoseBlendMode_t m_blendMode; // offset 0x102, size 0x1, align 1
    char _pad_0103[0x5]; // offset 0x103
};
