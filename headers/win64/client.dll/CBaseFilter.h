#pragma once

class CBaseFilter : public CLogicalEntity /*0x0*/  // sizeof 0x638, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    bool m_bNegated; // offset 0x600, size 0x1, align 1
    char _pad_0601[0x7]; // offset 0x601
    CEntityIOOutput m_OnPass; // offset 0x608, size 0x18, align 255
    CEntityIOOutput m_OnFail; // offset 0x620, size 0x18, align 255
};
