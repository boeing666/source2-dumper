#pragma once

class CAnimUpdateNodeBase  // sizeof 0x58, align 0xFF [vtable abstract] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14]; // offset 0x0
    CAnimNodePath m_nodePath; // offset 0x14, size 0x30, align 4
    AnimNodeNetworkMode m_networkMode; // offset 0x44, size 0x4, align 4
    char _pad_0048[0x8]; // offset 0x48
    CUtlString m_name; // offset 0x50, size 0x8, align 8
};
