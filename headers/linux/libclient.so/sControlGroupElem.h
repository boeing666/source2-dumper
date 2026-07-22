#pragma once

class sControlGroupElem  // sizeof 0x300C, align 0xFF [trivial_dtor] (client)
{
public:
    char[4096] m_UnitName; // offset 0x0, size 0x1000, align 1
    char[4096] m_UnitLabel; // offset 0x1000, size 0x1000, align 1
    uint8 m_unUnitLabelIndex; // offset 0x2000, size 0x1, align 1
    char _pad_2001[0x3]; // offset 0x2001
    CHandle< C_BaseEntity > m_hEntity; // offset 0x2004, size 0x4, align 4
    bool m_bIsIllusion; // offset 0x2008, size 0x1, align 1
    char[4096] m_IllusionLabel; // offset 0x2009, size 0x1000, align 1
    char _pad_3009[0x3]; // offset 0x3009
};
