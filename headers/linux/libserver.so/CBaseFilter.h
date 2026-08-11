#pragma once

class CBaseFilter : public CLogicalEntity /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    bool m_bNegated; // offset 0x778, size 0x1, align 1
    char _pad_0779[0x7]; // offset 0x779
    CEntityIOOutput m_OnPass; // offset 0x780, size 0x18, align 255
    CEntityIOOutput m_OnFail; // offset 0x798, size 0x18, align 255
};
