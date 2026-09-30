#pragma once

class CMathCounter : public CLogicalEntity /*0x0*/  // sizeof 0x560, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    float32 m_flMin; // offset 0x4B0, size 0x4, align 4
    float32 m_flMax; // offset 0x4B4, size 0x4, align 4
    bool m_bHitMin; // offset 0x4B8, size 0x1, align 1
    bool m_bHitMax; // offset 0x4B9, size 0x1, align 1
    bool m_bDisabled; // offset 0x4BA, size 0x1, align 1
    char _pad_04BB[0x5]; // offset 0x4BB
    CEntityOutputTemplate< float32 > m_OutValue; // offset 0x4C0, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnGetValue; // offset 0x4E0, size 0x20, align 8
    CEntityIOOutput m_OnHitMin; // offset 0x500, size 0x18, align 255
    CEntityIOOutput m_OnHitMax; // offset 0x518, size 0x18, align 255
    CEntityIOOutput m_OnChangedFromMin; // offset 0x530, size 0x18, align 255
    CEntityIOOutput m_OnChangedFromMax; // offset 0x548, size 0x18, align 255
};
