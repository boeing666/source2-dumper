#pragma once

class CCitadel_Modifier_GoatGoingUp : public CCitadelModifier /*0x0*/  // sizeof 0x268, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    bool m_bAtTargetElevation; // offset 0xD0, size 0x1, align 1
    char _pad_00D1[0x3]; // offset 0xD1
    Vector m_vKnockAwayVector; // offset 0xD4, size 0xC, align 4
    char _pad_00E0[0x180]; // offset 0xE0
    float32 m_flTargetElevation; // offset 0x260, size 0x4, align 4
    char _pad_0264[0x4]; // offset 0x264
};
