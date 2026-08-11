#pragma once

class CCitadel_Modifier_Knockback : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0xE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    float32 m_flForce; // offset 0xD8, size 0x4, align 4
    bool m_bKnockedBack; // offset 0xDC, size 0x1, align 1
    char _pad_00DD[0x3]; // offset 0xDD
};
