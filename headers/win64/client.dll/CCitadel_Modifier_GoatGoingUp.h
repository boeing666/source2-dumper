#pragma once

class CCitadel_Modifier_GoatGoingUp : public CCitadelModifier /*0x0*/  // sizeof 0x258, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    bool m_bAtTargetElevation; // offset 0xC0, size 0x1, align 1
    char _pad_00C1[0x3]; // offset 0xC1
    Vector m_vKnockAwayVector; // offset 0xC4, size 0xC, align 4
    char _pad_00D0[0x180]; // offset 0xD0
    float32 m_flTargetElevation; // offset 0x250, size 0x4, align 4
    char _pad_0254[0x4]; // offset 0x254
};
