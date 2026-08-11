#pragma once

class CBaseFilter : public CLogicalEntity /*0x0*/  // sizeof 0x4E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    bool m_bNegated; // offset 0x4A8, size 0x1, align 1
    char _pad_04A9[0x7]; // offset 0x4A9
    CEntityIOOutput m_OnPass; // offset 0x4B0, size 0x18, align 255
    CEntityIOOutput m_OnFail; // offset 0x4C8, size 0x18, align 255
};
