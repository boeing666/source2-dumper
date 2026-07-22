#pragma once

class CCredits : public CPointEntity /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CEntityIOOutput m_OnCreditsDone; // offset 0x778, size 0x18, align 255
    bool m_bRolledOutroCredits; // offset 0x790, size 0x1, align 1
    char _pad_0791[0x3]; // offset 0x791
    float32 m_flLogoLength; // offset 0x794, size 0x4, align 4
};
