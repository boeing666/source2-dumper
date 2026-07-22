#pragma once

class CRotDoor : public CBaseDoor /*0x0*/  // sizeof 0xC50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC4A]; // offset 0x0
    bool m_bSolidBsp; // offset 0xC4A, size 0x1, align 1
    char _pad_0C4B[0x5]; // offset 0xC4B
};
