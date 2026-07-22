#pragma once

class CMathColorBlend : public CLogicalEntity /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    float32 m_flInMin; // offset 0x788, size 0x4, align 4
    float32 m_flInMax; // offset 0x78C, size 0x4, align 4
    Color m_OutColor1; // offset 0x790, size 0x4, align 1
    Color m_OutColor2; // offset 0x794, size 0x4, align 1
    CEntityOutputTemplate< Color > m_OutValue; // offset 0x798, size 0x20, align 8
};
