#pragma once

class CCitadel_Modifier_GoatGoingUp : public CCitadelModifier /*0x0*/  // sizeof 0x360, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    bool m_bAtTargetElevation; // offset 0x138, size 0x1, align 1
    char _pad_0139[0x217]; // offset 0x139
    Vector m_vKnockAwayVector; // offset 0x350, size 0xC, align 4
    float32 m_flTargetElevation; // offset 0x35C, size 0x4, align 4
};
