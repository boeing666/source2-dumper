#pragma once

class CAnimComponentUpdater  // sizeof 0x30, align 0xFF [vtable abstract] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CUtlString m_name; // offset 0x18, size 0x8, align 8
    AnimComponentID m_id; // offset 0x20, size 0x4, align 4
    AnimNodeNetworkMode m_networkMode; // offset 0x24, size 0x4, align 4
    bool m_bStartEnabled; // offset 0x28, size 0x1, align 1
    char _pad_0029[0x7]; // offset 0x29
};
