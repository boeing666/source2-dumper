#pragma once

class CLogicGameStateReport : public CBaseEntity /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    bool m_bDisabled; // offset 0x778, size 0x1, align 1
    char _pad_0779[0xC7]; // offset 0x779
};
