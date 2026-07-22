#pragma once

class sControlGroupElem  // sizeof 0x318, align 0xFF [trivial_dtor] (client)
{
public:
    char[260] m_UnitName; // offset 0x0, size 0x104, align 1
    char[260] m_UnitLabel; // offset 0x104, size 0x104, align 1
    uint8 m_unUnitLabelIndex; // offset 0x208, size 0x1, align 1
    char _pad_0209[0x3]; // offset 0x209
    CHandle< C_BaseEntity > m_hEntity; // offset 0x20C, size 0x4, align 4
    bool m_bIsIllusion; // offset 0x210, size 0x1, align 1
    char[260] m_IllusionLabel; // offset 0x211, size 0x104, align 1
    char _pad_0315[0x3]; // offset 0x315
};
