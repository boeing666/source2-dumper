#pragma once

class FilterHealth : public CBaseFilter /*0x0*/  // sizeof 0x4F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4E0]; // offset 0x0
    bool m_bAdrenalineActive; // offset 0x4E0, size 0x1, align 1
    char _pad_04E1[0x3]; // offset 0x4E1
    int32 m_iHealthMin; // offset 0x4E4, size 0x4, align 4
    int32 m_iHealthMax; // offset 0x4E8, size 0x4, align 4
    char _pad_04EC[0x4]; // offset 0x4EC
};
