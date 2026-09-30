#pragma once

class CCredits : public CPointEntity /*0x0*/  // sizeof 0x4D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CEntityIOOutput m_OnCreditsDone; // offset 0x4B0, size 0x18, align 255
    bool m_bRolledOutroCredits; // offset 0x4C8, size 0x1, align 1
    char _pad_04C9[0x3]; // offset 0x4C9
    float32 m_flLogoLength; // offset 0x4CC, size 0x4, align 4
};
