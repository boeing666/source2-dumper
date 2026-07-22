#pragma once

class CPulseTurtleGraphicsCursor : public CPulseExecCursor /*0x0*/  // sizeof 0xF0, align 0xFF [vtable] (pulse_system)
{
public:
    char _pad_0000[0xD5]; // offset 0x0
    Color m_Color; // offset 0xD5, size 0x4, align 1
    char _pad_00D9[0x3]; // offset 0xD9
    Vector2D m_vPos; // offset 0xDC, size 0x8, align 4
    float32 m_flHeadingDeg; // offset 0xE4, size 0x4, align 4
    bool m_bPenUp; // offset 0xE8, size 0x1, align 1
    char _pad_00E9[0x7]; // offset 0xE9
};
