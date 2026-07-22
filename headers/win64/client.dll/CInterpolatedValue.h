#pragma once

class CInterpolatedValue  // sizeof 0x14, align 0xFF [trivial_dtor] (client)
{
public:
    float32 m_flStartTime; // offset 0x0, size 0x4, align 4
    float32 m_flEndTime; // offset 0x4, size 0x4, align 4
    float32 m_flStartValue; // offset 0x8, size 0x4, align 4
    float32 m_flEndValue; // offset 0xC, size 0x4, align 4
    int32 m_nInterpType; // offset 0x10, size 0x4, align 4
};
