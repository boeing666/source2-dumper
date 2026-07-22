#pragma once

class CRotDoor : public CBaseDoor /*0x0*/  // sizeof 0x988, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x980]; // offset 0x0
    bool m_bSolidBsp; // offset 0x980, size 0x1, align 1
    char _pad_0981[0x7]; // offset 0x981
};
