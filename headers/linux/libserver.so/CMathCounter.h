#pragma once

class CMathCounter : public CLogicalEntity /*0x0*/  // sizeof 0x828, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    float32 m_flMin; // offset 0x778, size 0x4, align 4
    float32 m_flMax; // offset 0x77C, size 0x4, align 4
    bool m_bHitMin; // offset 0x780, size 0x1, align 1
    bool m_bHitMax; // offset 0x781, size 0x1, align 1
    bool m_bDisabled; // offset 0x782, size 0x1, align 1
    char _pad_0783[0x5]; // offset 0x783
    CEntityOutputTemplate< float32 > m_OutValue; // offset 0x788, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnGetValue; // offset 0x7A8, size 0x20, align 8
    CEntityIOOutput m_OnHitMin; // offset 0x7C8, size 0x18, align 255
    CEntityIOOutput m_OnHitMax; // offset 0x7E0, size 0x18, align 255
    CEntityIOOutput m_OnChangedFromMin; // offset 0x7F8, size 0x18, align 255
    CEntityIOOutput m_OnChangedFromMax; // offset 0x810, size 0x18, align 255
};
