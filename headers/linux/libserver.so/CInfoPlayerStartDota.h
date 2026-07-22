#pragma once

class CInfoPlayerStartDota : public CPointEntity /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    bool m_bDisabled; // offset 0x778, size 0x1, align 1
    char _pad_0779[0x7]; // offset 0x779
    CEntityIOOutput m_OnEnabled; // offset 0x780, size 0x18, align 255
    CEntityIOOutput m_OnDisabled; // offset 0x798, size 0x18, align 255
};
