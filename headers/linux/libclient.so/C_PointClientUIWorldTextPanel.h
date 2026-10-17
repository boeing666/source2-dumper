#pragma once

class C_PointClientUIWorldTextPanel : public C_PointClientUIWorldPanel /*0x0*/  // sizeof 0x1150, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xF49]; // offset 0x0
    char[512] m_messageText; // offset 0xF49, size 0x200, align 1
    char _pad_1149[0x7]; // offset 0x1149
};
