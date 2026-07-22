#pragma once

class CCredits : public CPointEntity /*0x0*/  // sizeof 0x4C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CEntityIOOutput m_OnCreditsDone; // offset 0x4A8, size 0x18, align 255
    bool m_bRolledOutroCredits; // offset 0x4C0, size 0x1, align 1
    char _pad_04C1[0x3]; // offset 0x4C1
    float32 m_flLogoLength; // offset 0x4C4, size 0x4, align 4
};
