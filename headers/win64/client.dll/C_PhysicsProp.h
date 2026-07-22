#pragma once

class C_PhysicsProp : public C_BreakableProp /*0x0*/  // sizeof 0xC40, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xC30]; // offset 0x0
    bool m_bAwake; // offset 0xC30, size 0x1, align 1 | MNotSaved
    char _pad_0C31[0xF]; // offset 0xC31
};
