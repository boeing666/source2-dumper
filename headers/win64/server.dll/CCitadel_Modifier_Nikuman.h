#pragma once

class CCitadel_Modifier_Nikuman : public CCitadelModifierAura /*0x0*/  // sizeof 0x5A0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x598]; // offset 0x0
    int32 m_nTotalSelfHeal; // offset 0x598, size 0x4, align 4
    int32 m_nTotalTeammateHeal; // offset 0x59C, size 0x4, align 4
};
