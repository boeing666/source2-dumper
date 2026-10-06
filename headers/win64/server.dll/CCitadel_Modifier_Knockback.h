#pragma once

class CCitadel_Modifier_Knockback : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x158, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    float32 m_flForce; // offset 0x150, size 0x4, align 4
    bool m_bKnockedBack; // offset 0x154, size 0x1, align 1
    char _pad_0155[0x3]; // offset 0x155
};
