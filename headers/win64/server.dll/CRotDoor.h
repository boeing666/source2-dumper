#pragma once

class CRotDoor : public CBaseDoor /*0x0*/  // sizeof 0xA60, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA58]; // offset 0x0
    bool m_bSolidBsp; // offset 0xA58, size 0x1, align 1
    char _pad_0A59[0x7]; // offset 0xA59
};
