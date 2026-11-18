#pragma once

class CPointClientUIWorldTextPanel : public CPointClientUIWorldPanel /*0x0*/  // sizeof 0xC78, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA78]; // offset 0x0
    char[512] m_messageText; // offset 0xA78, size 0x200, align 1
};
