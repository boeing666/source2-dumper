#pragma once

class CPulseTurtleGraphicsCursor : public CPulseExecCursor /*0x0*/  // sizeof 0xE8, align 0xFF [vtable] (pulse_system)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    Color m_Color; // offset 0xD0, size 0x4, align 1
    Vector2D m_vPos; // offset 0xD4, size 0x8, align 4
    float32 m_flHeadingDeg; // offset 0xDC, size 0x4, align 4
    bool m_bPenUp; // offset 0xE0, size 0x1, align 1
    char _pad_00E1[0x7]; // offset 0xE1
};
