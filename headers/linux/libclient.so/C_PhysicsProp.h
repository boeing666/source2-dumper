#pragma once

class C_PhysicsProp : public C_BreakableProp /*0x0*/  // sizeof 0xDB0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xDA8]; // offset 0x0
    bool m_bAwake; // offset 0xDA8, size 0x1, align 1 | MNotSaved
    char _pad_0DA9[0x7]; // offset 0xDA9
};
