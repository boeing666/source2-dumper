#pragma once

class CModifierHandleBase  // sizeof 0x18, align 0x8 [vtable trivial_dtor] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    uint64 m_hStableHandle; // offset 0x8, size 0x8, align 8 | MNotSaved
    char _pad_0010[0x8]; // offset 0x10
};
