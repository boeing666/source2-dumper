#pragma once

class CCredits : public CPointEntity /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CEntityIOOutput m_OnCreditsDone; // offset 0x498, size 0x18, align 255
    bool m_bRolledOutroCredits; // offset 0x4B0, size 0x1, align 1
    char _pad_04B1[0x3]; // offset 0x4B1
    float32 m_flLogoLength; // offset 0x4B4, size 0x4, align 4
};
