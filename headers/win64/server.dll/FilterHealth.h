#pragma once

class FilterHealth : public CBaseFilter /*0x0*/  // sizeof 0x4F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4E8]; // offset 0x0
    bool m_bAdrenalineActive; // offset 0x4E8, size 0x1, align 1
    char _pad_04E9[0x3]; // offset 0x4E9
    int32 m_iHealthMin; // offset 0x4EC, size 0x4, align 4
    int32 m_iHealthMax; // offset 0x4F0, size 0x4, align 4
    char _pad_04F4[0x4]; // offset 0x4F4
};
