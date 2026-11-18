#pragma once

class C_PointClientUIWorldTextPanel : public C_PointClientUIWorldPanel /*0x0*/  // sizeof 0x11B0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xFA1]; // offset 0x0
    char[512] m_messageText; // offset 0xFA1, size 0x200, align 1
    char _pad_11A1[0xF]; // offset 0x11A1
};
