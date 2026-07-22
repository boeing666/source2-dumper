#pragma once

class FilterHealth : public CBaseFilter /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x7A0]; // offset 0x0
    bool m_bAdrenalineActive; // offset 0x7A0, size 0x1, align 1
    char _pad_07A1[0x3]; // offset 0x7A1
    int32 m_iHealthMin; // offset 0x7A4, size 0x4, align 4
    int32 m_iHealthMax; // offset 0x7A8, size 0x4, align 4
    char _pad_07AC[0x4]; // offset 0x7AC
};
