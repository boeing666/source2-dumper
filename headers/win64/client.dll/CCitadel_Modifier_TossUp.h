#pragma once

class CCitadel_Modifier_TossUp : public CCitadelModifier /*0x0*/  // sizeof 0xD8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    bool m_bForceApplied; // offset 0xC0, size 0x1, align 1
    bool m_bRestrictMovement; // offset 0xC1, size 0x1, align 1
    char _pad_00C2[0x2]; // offset 0xC2
    Vector m_vTossUpForce; // offset 0xC4, size 0xC, align 4
    float32 m_flCurrentVelocityScale; // offset 0xD0, size 0x4, align 4
    char _pad_00D4[0x4]; // offset 0xD4
};
