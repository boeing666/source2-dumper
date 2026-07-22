#pragma once

class CMathColorBlend : public CLogicalEntity /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    float32 m_flInMin; // offset 0x778, size 0x4, align 4
    float32 m_flInMax; // offset 0x77C, size 0x4, align 4
    Color m_OutColor1; // offset 0x780, size 0x4, align 1
    Color m_OutColor2; // offset 0x784, size 0x4, align 1
    CEntityOutputTemplate< Color > m_OutValue; // offset 0x788, size 0x20, align 8
};
