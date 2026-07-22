#pragma once

class CMotionNode  // sizeof 0x28, align 0xFF [vtable abstract] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CUtlString m_name; // offset 0x18, size 0x8, align 8
    AnimNodeID m_id; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
};
