#pragma once

class CPointClientUIWorldTextPanel : public CPointClientUIWorldPanel /*0x0*/  // sizeof 0xE08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC01]; // offset 0x0
    char[512] m_messageText; // offset 0xC01, size 0x200, align 1
    char _pad_0E01[0x7]; // offset 0xE01
};
