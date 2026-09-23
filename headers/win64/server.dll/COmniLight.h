#pragma once

class COmniLight : public CBarnLight /*0x0*/  // sizeof 0xB48, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB38]; // offset 0x0
    float32 m_flInnerAngle; // offset 0xB38, size 0x4, align 4
    float32 m_flOuterAngle; // offset 0xB3C, size 0x4, align 4
    bool m_bShowLight; // offset 0xB40, size 0x1, align 1
    char _pad_0B41[0x7]; // offset 0xB41
};
