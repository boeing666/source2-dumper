#pragma once

class CRectLight : public CBarnLight /*0x0*/  // sizeof 0xB40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB38]; // offset 0x0
    bool m_bShowLight; // offset 0xB38, size 0x1, align 1
    char _pad_0B39[0x7]; // offset 0xB39
};
