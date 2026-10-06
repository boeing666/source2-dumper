#pragma once

class CCitadel_Modifier_GoatGoingUp : public CCitadelModifier /*0x0*/  // sizeof 0x370, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    bool m_bAtTargetElevation; // offset 0x148, size 0x1, align 1
    char _pad_0149[0x217]; // offset 0x149
    Vector m_vKnockAwayVector; // offset 0x360, size 0xC, align 4
    float32 m_flTargetElevation; // offset 0x36C, size 0x4, align 4
};
