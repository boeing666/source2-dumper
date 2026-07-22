#pragma once

class CRectLight : public CBarnLight /*0x0*/  // sizeof 0xD38, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD30]; // offset 0x0
    bool m_bShowLight; // offset 0xD30, size 0x1, align 1
    char _pad_0D31[0x7]; // offset 0xD31
};
