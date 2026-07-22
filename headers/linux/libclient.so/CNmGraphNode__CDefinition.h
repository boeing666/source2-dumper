#pragma once

class CNmGraphNode::CDefinition  // sizeof 0x10, align 0xFF [vtable abstract] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    int16 m_nNodeIdx; // offset 0x8, size 0x2, align 2
    char _pad_000A[0x6]; // offset 0xA
};
