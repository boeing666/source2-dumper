#pragma once

class CMathRemap : public CLogicalEntity /*0x0*/  // sizeof 0x810, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    float32 m_flInMin; // offset 0x778, size 0x4, align 4
    float32 m_flInMax; // offset 0x77C, size 0x4, align 4
    float32 m_flOut1; // offset 0x780, size 0x4, align 4
    float32 m_flOut2; // offset 0x784, size 0x4, align 4
    float32 m_flOldInValue; // offset 0x788, size 0x4, align 4
    bool m_bEnabled; // offset 0x78C, size 0x1, align 1
    char _pad_078D[0x3]; // offset 0x78D
    CEntityOutputTemplate< float32 > m_OutValue; // offset 0x790, size 0x20, align 8
    CEntityIOOutput m_OnRoseAboveMin; // offset 0x7B0, size 0x18, align 255
    CEntityIOOutput m_OnRoseAboveMax; // offset 0x7C8, size 0x18, align 255
    CEntityIOOutput m_OnFellBelowMin; // offset 0x7E0, size 0x18, align 255
    CEntityIOOutput m_OnFellBelowMax; // offset 0x7F8, size 0x18, align 255
};
