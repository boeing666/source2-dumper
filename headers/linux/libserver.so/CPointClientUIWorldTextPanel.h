#pragma once

class CPointClientUIWorldTextPanel : public CPointClientUIWorldPanel /*0x0*/  // sizeof 0xEE8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCE1]; // offset 0x0
    char[512] m_messageText; // offset 0xCE1, size 0x200, align 1
    char _pad_0EE1[0x7]; // offset 0xEE1
};
