#pragma once

class CMathRemap : public CLogicalEntity /*0x0*/  // sizeof 0x820, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    float32 m_flInMin; // offset 0x788, size 0x4, align 4
    float32 m_flInMax; // offset 0x78C, size 0x4, align 4
    float32 m_flOut1; // offset 0x790, size 0x4, align 4
    float32 m_flOut2; // offset 0x794, size 0x4, align 4
    float32 m_flOldInValue; // offset 0x798, size 0x4, align 4
    bool m_bEnabled; // offset 0x79C, size 0x1, align 1
    char _pad_079D[0x3]; // offset 0x79D
    CEntityOutputTemplate< float32 > m_OutValue; // offset 0x7A0, size 0x20, align 8
    CEntityIOOutput m_OnRoseAboveMin; // offset 0x7C0, size 0x18, align 255
    CEntityIOOutput m_OnRoseAboveMax; // offset 0x7D8, size 0x18, align 255
    CEntityIOOutput m_OnFellBelowMin; // offset 0x7F0, size 0x18, align 255
    CEntityIOOutput m_OnFellBelowMax; // offset 0x808, size 0x18, align 255
};
