#pragma once

class CRectLight : public CBarnLight /*0x0*/  // sizeof 0xE18, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xE10]; // offset 0x0
    bool m_bShowLight; // offset 0xE10, size 0x1, align 1
    char _pad_0E11[0x7]; // offset 0xE11
};
