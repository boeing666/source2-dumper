#pragma once

class CCitadel_Priest_SlideTrap : public C_BaseModelEntity /*0x0*/  // sizeof 0xC10, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBCC]; // offset 0x0
    float32 m_flRangeAtCast; // offset 0xBCC, size 0x4, align 4
    char _pad_0BD0[0x3C]; // offset 0xBD0
    bool m_bArmed; // offset 0xC0C, size 0x1, align 1
    bool m_bMoving; // offset 0xC0D, size 0x1, align 1
    bool m_bFinished; // offset 0xC0E, size 0x1, align 1
    char _pad_0C0F[0x1]; // offset 0xC0F
};
