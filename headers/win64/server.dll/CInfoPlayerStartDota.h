#pragma once

class CInfoPlayerStartDota : public CPointEntity /*0x0*/  // sizeof 0x4D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    bool m_bDisabled; // offset 0x498, size 0x1, align 1
    char _pad_0499[0x7]; // offset 0x499
    CEntityIOOutput m_OnEnabled; // offset 0x4A0, size 0x18, align 255
    CEntityIOOutput m_OnDisabled; // offset 0x4B8, size 0x18, align 255
};
