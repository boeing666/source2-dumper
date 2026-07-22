#pragma once

class CMathRemap : public CLogicalEntity /*0x0*/  // sizeof 0x540, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    float32 m_flInMin; // offset 0x4A8, size 0x4, align 4
    float32 m_flInMax; // offset 0x4AC, size 0x4, align 4
    float32 m_flOut1; // offset 0x4B0, size 0x4, align 4
    float32 m_flOut2; // offset 0x4B4, size 0x4, align 4
    float32 m_flOldInValue; // offset 0x4B8, size 0x4, align 4
    bool m_bEnabled; // offset 0x4BC, size 0x1, align 1
    char _pad_04BD[0x3]; // offset 0x4BD
    CEntityOutputTemplate< float32 > m_OutValue; // offset 0x4C0, size 0x20, align 8
    CEntityIOOutput m_OnRoseAboveMin; // offset 0x4E0, size 0x18, align 255
    CEntityIOOutput m_OnRoseAboveMax; // offset 0x4F8, size 0x18, align 255
    CEntityIOOutput m_OnFellBelowMin; // offset 0x510, size 0x18, align 255
    CEntityIOOutput m_OnFellBelowMax; // offset 0x528, size 0x18, align 255
};
