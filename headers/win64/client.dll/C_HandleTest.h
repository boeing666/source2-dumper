#pragma once

class C_HandleTest : public C_BaseEntity /*0x0*/  // sizeof 0x608, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    CHandle< C_BaseEntity > m_Handle; // offset 0x600, size 0x4, align 4
    bool m_bSendHandle; // offset 0x604, size 0x1, align 1
    char _pad_0605[0x3]; // offset 0x605
};
