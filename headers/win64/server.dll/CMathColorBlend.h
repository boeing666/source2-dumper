#pragma once

class CMathColorBlend : public CLogicalEntity /*0x0*/  // sizeof 0x4D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    float32 m_flInMin; // offset 0x4A8, size 0x4, align 4
    float32 m_flInMax; // offset 0x4AC, size 0x4, align 4
    Color m_OutColor1; // offset 0x4B0, size 0x4, align 1
    Color m_OutColor2; // offset 0x4B4, size 0x4, align 1
    CEntityOutputTemplate< Color > m_OutValue; // offset 0x4B8, size 0x20, align 8
};
