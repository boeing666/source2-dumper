#pragma once

class CLogicNavigation : public CLogicalEntity /*0x0*/  // sizeof 0x788, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    bool m_isOn; // offset 0x780, size 0x1, align 1
    char _pad_0781[0x3]; // offset 0x781
    navproperties_t m_navProperty; // offset 0x784, size 0x4, align 4
};
