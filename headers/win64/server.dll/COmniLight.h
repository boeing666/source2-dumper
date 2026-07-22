#pragma once

class COmniLight : public CBarnLight /*0x0*/  // sizeof 0xA68, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA58]; // offset 0x0
    float32 m_flInnerAngle; // offset 0xA58, size 0x4, align 4
    float32 m_flOuterAngle; // offset 0xA5C, size 0x4, align 4
    bool m_bShowLight; // offset 0xA60, size 0x1, align 1
    char _pad_0A61[0x7]; // offset 0xA61
};
