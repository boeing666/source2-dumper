#pragma once

class COmniLight : public CBarnLight /*0x0*/  // sizeof 0xE20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xE10]; // offset 0x0
    float32 m_flInnerAngle; // offset 0xE10, size 0x4, align 4
    float32 m_flOuterAngle; // offset 0xE14, size 0x4, align 4
    bool m_bShowLight; // offset 0xE18, size 0x1, align 1
    char _pad_0E19[0x7]; // offset 0xE19
};
