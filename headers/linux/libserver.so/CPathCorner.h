#pragma once

class CPathCorner : public CPointEntity /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    float32 m_flSpeed; // offset 0x778, size 0x4, align 4
    float32 m_flWait; // offset 0x77C, size 0x4, align 4
    float32 m_flRadius; // offset 0x780, size 0x4, align 4
    char _pad_0784[0x4]; // offset 0x784
    CEntityIOOutput m_OnPass; // offset 0x788, size 0x18, align 255
};
