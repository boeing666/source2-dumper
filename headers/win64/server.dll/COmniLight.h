#pragma once

class COmniLight : public CBarnLight /*0x0*/  // sizeof 0xBD0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC0]; // offset 0x0
    float32 m_flInnerAngle; // offset 0xBC0, size 0x4, align 4
    float32 m_flOuterAngle; // offset 0xBC4, size 0x4, align 4
    bool m_bShowLight; // offset 0xBC8, size 0x1, align 1
    char _pad_0BC9[0x7]; // offset 0xBC9
};
