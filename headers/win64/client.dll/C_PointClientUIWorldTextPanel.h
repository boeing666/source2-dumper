#pragma once

class C_PointClientUIWorldTextPanel : public C_PointClientUIWorldPanel /*0x0*/  // sizeof 0xEF0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xCF0]; // offset 0x0
    char[512] m_messageText; // offset 0xCF0, size 0x200, align 1
};
