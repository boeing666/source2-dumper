#pragma once

class CCitadel_Modifier_GoatGoingUp : public CCitadelModifier /*0x0*/  // sizeof 0x378, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    bool m_bAtTargetElevation; // offset 0x150, size 0x1, align 1
    char _pad_0151[0x217]; // offset 0x151
    Vector m_vKnockAwayVector; // offset 0x368, size 0xC, align 4
    float32 m_flTargetElevation; // offset 0x374, size 0x4, align 4
};
