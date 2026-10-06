#pragma once

class CCitadel_Modifier_Familiar_AttachHeal : public CCitadelModifier /*0x0*/  // sizeof 0x2A0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    float32 m_flTotalPendingHeal; // offset 0x138, size 0x4, align 4
    float32 m_flTotalHeal; // offset 0x13C, size 0x4, align 4
    char _pad_0140[0x160]; // offset 0x140
};
