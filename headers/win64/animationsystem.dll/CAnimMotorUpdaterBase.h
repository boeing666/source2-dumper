#pragma once

class CAnimMotorUpdaterBase  // sizeof 0x20, align 0xFF [vtable abstract] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlString m_name; // offset 0x10, size 0x8, align 8
    bool m_bDefault; // offset 0x18, size 0x1, align 1
    char _pad_0019[0x7]; // offset 0x19
};
