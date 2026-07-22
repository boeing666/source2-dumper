#pragma once

class CCitadel_Modifier_Familiar_AttachHeal : public CCitadelModifier /*0x0*/  // sizeof 0x1C8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    float32 m_flTotalPendingHeal; // offset 0xC0, size 0x4, align 4
    float32 m_flTotalHeal; // offset 0xC4, size 0x4, align 4
    char _pad_00C8[0x100]; // offset 0xC8
};
