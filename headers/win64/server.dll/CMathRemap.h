#pragma once

class CMathRemap : public CLogicalEntity /*0x0*/  // sizeof 0x538, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    float32 m_flInMin; // offset 0x4A0, size 0x4, align 4
    float32 m_flInMax; // offset 0x4A4, size 0x4, align 4
    float32 m_flOut1; // offset 0x4A8, size 0x4, align 4
    float32 m_flOut2; // offset 0x4AC, size 0x4, align 4
    float32 m_flOldInValue; // offset 0x4B0, size 0x4, align 4
    bool m_bEnabled; // offset 0x4B4, size 0x1, align 1
    char _pad_04B5[0x3]; // offset 0x4B5
    CEntityOutputTemplate< float32 > m_OutValue; // offset 0x4B8, size 0x20, align 8
    CEntityIOOutput m_OnRoseAboveMin; // offset 0x4D8, size 0x18, align 255
    CEntityIOOutput m_OnRoseAboveMax; // offset 0x4F0, size 0x18, align 255
    CEntityIOOutput m_OnFellBelowMin; // offset 0x508, size 0x18, align 255
    CEntityIOOutput m_OnFellBelowMax; // offset 0x520, size 0x18, align 255
};
