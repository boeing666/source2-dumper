#pragma once

class C_PhysicsProp : public C_BreakableProp /*0x0*/  // sizeof 0x1300, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x12F0]; // offset 0x0
    bool m_bAwake; // offset 0x12F0, size 0x1, align 1 | MNotSaved
    char _pad_12F1[0xF]; // offset 0x12F1
};
