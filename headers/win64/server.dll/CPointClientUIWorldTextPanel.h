#pragma once

class CPointClientUIWorldTextPanel : public CPointClientUIWorldPanel /*0x0*/  // sizeof 0xC10, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA10]; // offset 0x0
    char[512] m_messageText; // offset 0xA10, size 0x200, align 1
};
