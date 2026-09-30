#pragma once

class CCitadel_Modifier_Knockback : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x140, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    float32 m_flForce; // offset 0x138, size 0x4, align 4
    bool m_bKnockedBack; // offset 0x13C, size 0x1, align 1
    char _pad_013D[0x3]; // offset 0x13D
};
