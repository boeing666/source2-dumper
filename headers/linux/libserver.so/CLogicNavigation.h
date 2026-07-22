#pragma once

class CLogicNavigation : public CLogicalEntity /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x790]; // offset 0x0
    bool m_isOn; // offset 0x790, size 0x1, align 1
    char _pad_0791[0x3]; // offset 0x791
    navproperties_t m_navProperty; // offset 0x794, size 0x4, align 4
};
