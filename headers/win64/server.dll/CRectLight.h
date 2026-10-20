#pragma once

class CRectLight : public CBarnLight /*0x0*/  // sizeof 0xBC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC0]; // offset 0x0
    bool m_bShowLight; // offset 0xBC0, size 0x1, align 1
    char _pad_0BC1[0x7]; // offset 0xBC1
};
