#pragma once

class CCitadel_Modifier_TossUp : public CCitadelModifier /*0x0*/  // sizeof 0x148, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    bool m_bForceApplied; // offset 0x130, size 0x1, align 1
    bool m_bRestrictMovement; // offset 0x131, size 0x1, align 1
    char _pad_0132[0x2]; // offset 0x132
    Vector m_vTossUpForce; // offset 0x134, size 0xC, align 4
    float32 m_flCurrentVelocityScale; // offset 0x140, size 0x4, align 4
    char _pad_0144[0x4]; // offset 0x144
};
