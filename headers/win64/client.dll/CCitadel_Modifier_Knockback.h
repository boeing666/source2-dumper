#pragma once

class CCitadel_Modifier_Knockback : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0xD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC8]; // offset 0x0
    float32 m_flForce; // offset 0xC8, size 0x4, align 4
    bool m_bKnockedBack; // offset 0xCC, size 0x1, align 1
    char _pad_00CD[0x3]; // offset 0xCD
};
