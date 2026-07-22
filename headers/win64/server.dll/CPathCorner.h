#pragma once

class CPathCorner : public CPointEntity /*0x0*/  // sizeof 0x4C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    float32 m_flWait; // offset 0x4A0, size 0x4, align 4
    float32 m_flRadius; // offset 0x4A4, size 0x4, align 4
    CEntityIOOutput m_OnPass; // offset 0x4A8, size 0x18, align 255
};
