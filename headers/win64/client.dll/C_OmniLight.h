#pragma once

class C_OmniLight : public C_BarnLight /*0x0*/  // sizeof 0xF30, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF20]; // offset 0x0
    float32 m_flInnerAngle; // offset 0xF20, size 0x4, align 4
    float32 m_flOuterAngle; // offset 0xF24, size 0x4, align 4
    bool m_bShowLight; // offset 0xF28, size 0x1, align 1
    char _pad_0F29[0x7]; // offset 0xF29
};
