#pragma once

class CBaseFilter : public CLogicalEntity /*0x0*/  // sizeof 0x628, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    bool m_bNegated; // offset 0x5F0, size 0x1, align 1
    char _pad_05F1[0x7]; // offset 0x5F1
    CEntityIOOutput m_OnPass; // offset 0x5F8, size 0x18, align 255
    CEntityIOOutput m_OnFail; // offset 0x610, size 0x18, align 255
};
