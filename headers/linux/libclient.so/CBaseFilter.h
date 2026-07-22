#pragma once

class CBaseFilter : public CLogicalEntity /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    bool m_bNegated; // offset 0x76C, size 0x1, align 1
    char _pad_076D[0x3]; // offset 0x76D
    CEntityIOOutput m_OnPass; // offset 0x770, size 0x18, align 255
    CEntityIOOutput m_OnFail; // offset 0x788, size 0x18, align 255
};
