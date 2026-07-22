#pragma once

class FilterHealth : public CBaseFilter /*0x0*/  // sizeof 0x638, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x628]; // offset 0x0
    bool m_bAdrenalineActive; // offset 0x628, size 0x1, align 1
    char _pad_0629[0x3]; // offset 0x629
    int32 m_iHealthMin; // offset 0x62C, size 0x4, align 4
    int32 m_iHealthMax; // offset 0x630, size 0x4, align 4
    char _pad_0634[0x4]; // offset 0x634
};
