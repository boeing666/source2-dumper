#pragma once

class CCitadel_Modifier_GoatGoingUp : public CCitadelModifier /*0x0*/  // sizeof 0x358, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    bool m_bAtTargetElevation; // offset 0x130, size 0x1, align 1
    char _pad_0131[0x217]; // offset 0x131
    Vector m_vKnockAwayVector; // offset 0x348, size 0xC, align 4
    float32 m_flTargetElevation; // offset 0x354, size 0x4, align 4
};
