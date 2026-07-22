#pragma once

class FilterHealth : public CBaseFilter /*0x0*/  // sizeof 0x648, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x638]; // offset 0x0
    bool m_bAdrenalineActive; // offset 0x638, size 0x1, align 1
    char _pad_0639[0x3]; // offset 0x639
    int32 m_iHealthMin; // offset 0x63C, size 0x4, align 4
    int32 m_iHealthMax; // offset 0x640, size 0x4, align 4
    char _pad_0644[0x4]; // offset 0x644
};
