#pragma once

class CMathRemap : public CLogicalEntity /*0x0*/  // sizeof 0x548, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    float32 m_flInMin; // offset 0x4B0, size 0x4, align 4
    float32 m_flInMax; // offset 0x4B4, size 0x4, align 4
    float32 m_flOut1; // offset 0x4B8, size 0x4, align 4
    float32 m_flOut2; // offset 0x4BC, size 0x4, align 4
    float32 m_flOldInValue; // offset 0x4C0, size 0x4, align 4
    bool m_bEnabled; // offset 0x4C4, size 0x1, align 1
    char _pad_04C5[0x3]; // offset 0x4C5
    CEntityOutputTemplate< float32 > m_OutValue; // offset 0x4C8, size 0x20, align 8
    CEntityIOOutput m_OnRoseAboveMin; // offset 0x4E8, size 0x18, align 255
    CEntityIOOutput m_OnRoseAboveMax; // offset 0x500, size 0x18, align 255
    CEntityIOOutput m_OnFellBelowMin; // offset 0x518, size 0x18, align 255
    CEntityIOOutput m_OnFellBelowMax; // offset 0x530, size 0x18, align 255
};
