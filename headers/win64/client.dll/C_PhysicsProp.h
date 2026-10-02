#pragma once

class C_PhysicsProp : public C_BreakableProp /*0x0*/  // sizeof 0xF80, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    bool m_bAwake; // offset 0xF70, size 0x1, align 1 | MNotSaved
    char _pad_0F71[0xF]; // offset 0xF71
};
