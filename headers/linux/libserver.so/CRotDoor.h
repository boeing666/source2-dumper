#pragma once

class CRotDoor : public CBaseDoor /*0x0*/  // sizeof 0xD30, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD2A]; // offset 0x0
    bool m_bSolidBsp; // offset 0xD2A, size 0x1, align 1
    char _pad_0D2B[0x5]; // offset 0xD2B
};
