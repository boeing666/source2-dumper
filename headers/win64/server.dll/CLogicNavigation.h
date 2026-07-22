#pragma once

class CLogicNavigation : public CLogicalEntity /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    bool m_isOn; // offset 0x4B0, size 0x1, align 1
    char _pad_04B1[0x3]; // offset 0x4B1
    navproperties_t m_navProperty; // offset 0x4B4, size 0x4, align 4
};
