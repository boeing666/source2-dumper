#pragma once

class C_PhysicsProp : public C_BreakableProp /*0x0*/  // sizeof 0xF20, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xF18]; // offset 0x0
    bool m_bAwake; // offset 0xF18, size 0x1, align 1 | MNotSaved
    char _pad_0F19[0x7]; // offset 0xF19
};
