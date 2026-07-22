#pragma once

class COmniLight : public CBarnLight /*0x0*/  // sizeof 0xD40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD30]; // offset 0x0
    float32 m_flInnerAngle; // offset 0xD30, size 0x4, align 4
    float32 m_flOuterAngle; // offset 0xD34, size 0x4, align 4
    bool m_bShowLight; // offset 0xD38, size 0x1, align 1
    char _pad_0D39[0x7]; // offset 0xD39
};
