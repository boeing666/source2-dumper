#pragma once

class FilterHealth : public CBaseFilter /*0x0*/  // sizeof 0x4E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4D8]; // offset 0x0
    bool m_bAdrenalineActive; // offset 0x4D8, size 0x1, align 1
    char _pad_04D9[0x3]; // offset 0x4D9
    int32 m_iHealthMin; // offset 0x4DC, size 0x4, align 4
    int32 m_iHealthMax; // offset 0x4E0, size 0x4, align 4
    char _pad_04E4[0x4]; // offset 0x4E4
};
