#pragma once

class C_HandleTest : public C_BaseEntity /*0x0*/  // sizeof 0x788, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x77C]; // offset 0x0
    CHandle< C_BaseEntity > m_Handle; // offset 0x77C, size 0x4, align 4
    bool m_bSendHandle; // offset 0x780, size 0x1, align 1
    char _pad_0781[0x7]; // offset 0x781
};
