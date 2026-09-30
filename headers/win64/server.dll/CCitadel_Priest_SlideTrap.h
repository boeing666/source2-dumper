#pragma once

class CCitadel_Priest_SlideTrap : public CBaseModelEntity /*0x0*/  // sizeof 0x8D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x890]; // offset 0x0
    float32 m_flRangeAtCast; // offset 0x890, size 0x4, align 4
    char _pad_0894[0x3C]; // offset 0x894
    bool m_bArmed; // offset 0x8D0, size 0x1, align 1
    bool m_bMoving; // offset 0x8D1, size 0x1, align 1
    bool m_bFinished; // offset 0x8D2, size 0x1, align 1
    char _pad_08D3[0x5]; // offset 0x8D3
};
